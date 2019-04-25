//
// Created by matt on 28/03/19.
//

#include "ros/ros.h"
#include "van_loading/ICPDirection.h"
#include <geometry_msgs/Twist.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Int16.h>

#define MAX_SPEED 0.5
#define AVERAGE_NUMBER 5
#define DEBUG
#define AUTOMATIC_STATE

class automated_control{
public:
    automated_control(ros::NodeHandle nh){
        valueCount = 0;
        numberOfStates = 0;
        stateTracker = 0;
        stateWentDown = false;
        speedKp = 0.15;
        steeringKp = 0.4;
        targetSpeed = 0.0;
        targetSteering = 0.0;
        currentSpeed = 0.0;
        currentSteering = 0.0;
        currentDistance = 0.0;
        directionSub = nh.subscribe("/van_loading/ICP_direction",
                1,
                &automated_control::store_movement,
                this);
        numberOfStatesSub = nh.subscribe("/van_loading/number_of_states",
                1,
                &automated_control::set_number_of_states,
                this);
        moveCommandPub = nh.advertise<geometry_msgs::Twist>("/van_loading/cmd_vel", 1);
        changeStatePub = nh.advertise<std_msgs::Int16>("van_loading/ICP_model_state", 1);
        sendMovementTimer = nh.createTimer(ros::Duration(0.3), &automated_control::update_movement,
                this);
        ROS_INFO("Automated control ready.");
        std_msgs::Int16 state;
        state.data = stateTracker;
        changeStatePub.publish(state); // Set state to 0 at the start
    }

    ~automated_control(){
    }

    void store_movement(van_loading::ICPDirection direction){
        // TODO
        if (wentForward.size() == stateTracker){
            if(direction.x < 0){
                wentForward.insert(wentForward.begin() + stateTracker, true);
            } else{
                wentForward.insert(wentForward.begin() + stateTracker, false);
            }
        }
        if(stateTracker != 0) {
            if (stateTracker > 5) { // Past 5 states we should know the direction
                if (wentForward[stateTracker - 1] != wentForward[stateTracker]) { // Changed direction
                    ROS_INFO("Wrong direction? Advancing state.");
                    increment_state();
                }
            }
        }
        directions[valueCount] = direction; // store this direction
        valueCount++;
        if (valueCount >= AVERAGE_NUMBER){
//            ROS_INFO("Calculating movement");
            // calculate average and send command
            van_loading::ICPDirection averageDirection = calculate_average();
            //ROS_INFO("Average direction: x: %f, y: %f, angle: %f, goodness: %f",
            //        averageDirection.x, averageDirection.y, averageDirection.angle, averageDirection.goodness);
            if(averageDirection.goodness > 0.7 && averageDirection.goodness < 1.5){ // Its an accurate reading if above 80%
                move_robot(averageDirection); // Safely move
            } else { // Not accurate reading so change state
                // Go back 1, if still inaccurate, forward 2
                ROS_WARN("Model not a good enough match at %f, changing state", averageDirection.goodness);
                // TODO: bug above, memory issue if not printing out.
#ifdef AUTOMATIC_STATE
                if(stateTracker == 0){ // At the start so go up a state
                    increment_state();
                    stateWentDown = false;
                }
                else if(stateTracker > 0 && !stateWentDown ){ // State went up last
                    decrement_state();
                    stateWentDown = true;

                } else if(stateTracker+2 < numberOfStates && stateWentDown){ // State went down last
                    increment_state();
                    increment_state();
                    stateWentDown = false;
                }
#endif
            }
            valueCount = 0; // Reset average value count
        }
    }

    void set_number_of_states(std_msgs::Int16 number){
        numberOfStates = number.data-1;
    }

    void update_movement(const ros::TimerEvent&){
        float setSpeed = 0.0; // Default for errors
        float setSteering = 0.0;  // Default for errors
        geometry_msgs::Twist movement;
        setSpeed = speedKp * (targetSpeed - currentSpeed); // Kp * error
        setSteering = steeringKp * (targetSteering - currentSteering); // Kp * error
        currentSpeed = currentSpeed + setSpeed;
        currentSteering = currentSteering + setSteering;

        movement.linear.x = currentSpeed;
        movement.angular.z = currentSteering;
        moveCommandPub.publish(movement);
#ifdef DEBUG
        ROS_INFO("Distance from target: %f", currentDistance);
        ROS_INFO("Target - Speed: %f Steering: %f", targetSpeed, targetSteering);
        ROS_INFO("Moving - Speed: %f Steering: %f", currentSpeed, currentSteering);
        ROS_INFO("Current state: %i", stateTracker);
#endif
    }

private:
    // Updates target speed/changes state
    void move_robot(van_loading::ICPDirection direction){
        /**
         * Check if we are close enough to finish/move on
         */
        if((direction.x < 0.20 && direction.x > -0.20)){ // Close enough to move on (just above snapshot distance)
            if(stateTracker == numberOfStates){ // FINISHED
                ROS_INFO("Robot is at the goal.");
                targetSpeed = 0.0;
                targetSteering = 0.0;
                currentSpeed = 0.0;
                currentSteering = 0.0;
//                ros::shutdown();
                return;
            } else { // Not finished so move on
                ROS_INFO("Close enough to goal, moving state forwards");
#ifdef AUTOMATIC_STATE
                increment_state();
#endif
                targetSpeed = 0.0;
            }
        }
        /**
         * Not close enough to move on so move closer
         */
        else {
                // Calculate speed
                targetSpeed = (direction.x * -1) * 2; // Invert because values are backwards.
                // * 2 because we are slow af.
                currentDistance = direction.x * -1;

                // Cap speed to 1m/s
                if (targetSpeed > MAX_SPEED) {
                    targetSpeed = MAX_SPEED;
                } else if (targetSpeed < -MAX_SPEED){
                    targetSpeed = -MAX_SPEED;
                }

                if ((direction.y > 0.02 || direction.y < -0.02) || (direction.angle > 0.5 || direction.angle < -0.5)) { // Y position is far enough out to need a turn
                    if(direction.y < 0.6 && direction.y > -0.6){ // If y is too far out, do nothing
                        targetSteering = ((direction.y * -1) * 2); // * 2 to make it faster
                    }
//                    if (direction.angle > 2.0 || direction.angle < -2.0) { // If angle is far out, add it to calculation
                        targetSteering = targetSteering + (deg_to_rad((direction.angle * -1) * 500));
//                    }
                    if (targetSteering > 0.20 || targetSteering < -0.20) { // Big value
                        targetSteering = targetSteering / 10;
                    }
                    if(targetSteering > 0.3 ){ // Max turn of ~17 degrees
                        targetSteering = 0.3;
                    } else if(targetSteering < -0.3){
                        targetSteering = -0.3;
                    }
//                    targetSteering = targetSteering * -1; // Backwards driving?
//                    targetSteering = targetSteering + targetSpeed;
                } else {
                    targetSteering = 0.0;
                }
                if (currentSpeed < 0.0) { // Going backwards so switch steering
                    targetSteering = targetSteering * -1;
                }

                // Steering calculation
//                if (direction.y > 0.00 || direction.y < -0.02) { // Y position is far enough out to need a turn
//                    targetSteering = deg_to_rad(direction.y) * -1; // * 20 to make it faster
//                    if (direction.angle > 2.0) { // If angle is far out, add it to calculation
//                        targetSteering = targetSteering + direction.angle;
//                    }
//                    if (targetSteering < 1) {
//                        targetSteering = targetSteering * 100;
//                    }
//                } else {
//                    targetSteering = 0.0;
//                }
//                if (currentSpeed < 0.0) { // Going backwards so switch steering
//                    targetSteering = targetSteering * -1;
//                }


//        std::cout << "Current state: " << std::to_string(stateTracker) <<
//        " Number of states: " << std::to_string(numberOfStates) << std::endl;
//            }
        }
    }

    float deg_to_rad(float degree){
        return (degree * 3.142)/180;
    }

    void increment_state(){
        if(stateTracker != numberOfStates){
            ROS_INFO("Incrementing state");
            stateTracker++;
            std_msgs::Int16 state;
            state.data = stateTracker;
            changeStatePub.publish(state);
        } else{ // ERROR SO STOP
            ROS_ERROR("At the maximum state. Something went wrong. Stopping robot.");
            targetSpeed = 0.0;
            currentSpeed = 0.0;
        }
    }

    void decrement_state(){
        if(stateTracker != 0){
            ROS_INFO("Decrementing state");
            stateTracker--;
            std_msgs::Int16 state;
            state.data = stateTracker;
            changeStatePub.publish(state);
        }else{ // ERROR SO STOP
            ROS_ERROR("At the minimum state. Something went wrong. Stopping robot.");
            targetSpeed = 0.0;
            currentSpeed = 0.0;
        }
    }

    van_loading::ICPDirection calculate_average(){
        float x;
        float y;
        float angle;
        float goodness;
        van_loading::ICPDirection averageDirection;
        // Add values together
        for (int i = 0; i < AVERAGE_NUMBER; ++i) {
            x = x + directions[i].x;
            y = y + directions[i].y;
            angle = angle + directions[i].angle;
            goodness = goodness + directions[i].goodness;
        }
        // Calculate average
        x = x / AVERAGE_NUMBER;
        y = y / AVERAGE_NUMBER;
        angle = angle / AVERAGE_NUMBER;
        goodness = goodness / AVERAGE_NUMBER;
        // Create message
        averageDirection.x = x;
        averageDirection.y = y;
        averageDirection.angle = angle;
        averageDirection.goodness = goodness;
        // Return the average
        return averageDirection;
    }

    ros::Subscriber directionSub;
    ros::Subscriber numberOfStatesSub;
    ros::Publisher moveCommandPub;
    ros::Publisher changeStatePub;
    ros::Timer sendMovementTimer;
    int stateTracker;
    int numberOfStates;
    int valueCount;
    float speedKp;
    float steeringKp;
    float currentSpeed;
    float currentSteering;
    float targetSpeed;
    float targetSteering;
    float currentDistance;
    bool stateWentDown;
    van_loading::ICPDirection directions[AVERAGE_NUMBER];
    std::vector<bool> wentForward;
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "automated_control_node");
    ros::NodeHandle nh;
    automated_control robot(nh);
    ros::spin();
}