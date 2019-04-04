//
// Created by matt on 28/03/19.
//

#include "ros/ros.h"
#include "van_loading/ICPDirection.h"
#include <geometry_msgs/Twist.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Int16.h>

#define AVERAGE_NUMBER 10

class automated_control{
public:
    automated_control(ros::NodeHandle nh){
        this->valueCount = 0;
        this->numberOfStates = 0;
        this->stateTracker = 0;
        this->stateWentDown = false;
        this->speedKp = 0.8;
        this->steeringKp = 0.8;
        this->targetSpeed = 0.0;
        this->targetSteering = 0.0;
        this->currentSpeed = 0.0;
        this->currentSteering = 0.0;
        this->directionSub = nh.subscribe("/van_loading/ICP_direction",
                1,
                &automated_control::store_movement,
                this);
        this->numberOfStatesSub = nh.subscribe("/van_loading/number_of_states",
                1,
                &automated_control::set_number_of_states,
                this);
        this->moveCommandPub = nh.advertise<geometry_msgs::Twist>("/van_loading/cmd_vel", 1);
        this->changeStatePub = nh.advertise<std_msgs::Int16>("van_loading/ICP_model_state", 1);
        this->sendMovementTimer = nh.createTimer(ros::Duration(0.3), &automated_control::update_movement,
                this);
        ROS_INFO("Automated control ready.");
    }

    ~automated_control(){
    }

    void store_movement(van_loading::ICPDirection direction){
        this->directions[this->valueCount] = direction; // store this direction
        this->valueCount++;
        if (this->valueCount >= AVERAGE_NUMBER){
            ROS_INFO("Calculating movement");
            // calculate average and send command
            van_loading::ICPDirection averageDirection = calculate_average();
            if(averageDirection.goodness > 0.8){ // Its an accurate reading if above 80%
                ROS_INFO("Model match good, moving robot");
                move_robot(averageDirection); // Safely move
            } else { // Not accurate reading so change state
                // Go back 1, if still inaccurate, forward 2
                ROS_INFO("Model not a good enough match, changing state");
                std::cout << "Goodness: " << std::to_string(averageDirection.goodness) << std::endl;
                // TODO: bug above, memory issue if not printing out.

                if(this->stateTracker == 0){ // At the start so go up a state
                    this->stateTracker++;
                    this->stateWentDown = false;
                }
                else if(this->stateTracker > 0 && !this->stateWentDown ){ // Go back one
                    this->stateTracker--;
                    this->stateWentDown = true;

                } else if(this->stateTracker+2 < this->numberOfStates && this->stateWentDown){ // Go forward
                    this->stateTracker = this->stateTracker + 2;
                    this->stateWentDown = false;
                }
                std_msgs::Int16 state;
                state.data = this->stateTracker;
                this->changeStatePub.publish(state);
                std::cout << "New state: " << std::to_string(this->stateTracker) << std::endl;
            }

            this->valueCount = 0; // Reset average value count
        }
    }

    void set_number_of_states(std_msgs::Int16 number){
        this->numberOfStates = number.data-1;
    }

    void update_movement(const ros::TimerEvent&){
        float setSpeed = 0.0; // Default for errors
        float setSteering = 0.0;  // Default for errors
        geometry_msgs::Twist movement;
        setSpeed = speedKp * (this->targetSpeed - this->currentSpeed); // Kp * error
        setSteering = steeringKp * (this->targetSteering - this->currentSteering); // Kp * error
        this->currentSpeed = this->currentSpeed + setSpeed;
        this->currentSteering = this->currentSteering + setSteering;

        movement.linear.x = this->currentSpeed;
        movement.angular.z = this->currentSteering;
        this->moveCommandPub.publish(movement);

        std::cout << "Target- " << "Speed: " << std::to_string(this->targetSpeed) <<
                  " Steering: " << std::to_string(this->targetSteering) << std::endl;
        std::cout << "Moving- " << "Speed: " << std::to_string(this->currentSpeed) <<
                  " Steering: " << std::to_string(this->currentSteering) << std::endl;
    }

private:
    // Updates target speed/changes state
    void move_robot(van_loading::ICPDirection direction){
        if(direction.x < 0.05 && direction.x > -0.05){ // Close enough to move on
            if(this->stateTracker == this->numberOfStates){ // FINISHED
//                ROS_INFO("Robot is at the goal.");
                ros::shutdown();
                return;
            } else { // Not finished so move on
//                ROS_INFO("Close enough to goal, moving state forwards");
                this->stateTracker++;
                std_msgs::Int16 state;
                state.data = this->stateTracker;
                this->changeStatePub.publish(state);
                this->targetSpeed = 0.0;
            }
        } else{ // Speed calculation
            this->targetSpeed = (direction.x * -1) *2 ; // Invert because values are backwards.
            // * 2 because we are slow af.
        }
        // Cap speed to 1m/s
        if(this->targetSpeed > 1.0){
            this->targetSpeed = 1.0;
        }

        // Steering calculation
        if(direction.y > 0.05 || direction.y < -0.05){ // Y position is far enough out to need a turn
            this->targetSteering = deg_to_rad(direction.y) * -1; // * 20 to make it faster
            if (direction.angle > 2.0){ // If angle is far out, add it to calculation
                this->targetSteering = this->targetSteering + direction.angle;
            }
            if (this->targetSteering < 1){
                this->targetSteering = this->targetSteering * 20;
            }
        } else{
            this->targetSteering = 0.0;
        }
        if(this->targetSpeed < 0.0){ // Going backwards so switch steering
            this->targetSteering = this->targetSteering * -1;
        }


//        std::cout << "Current state: " << std::to_string(this->stateTracker) <<
//        " Number of states: " << std::to_string(this->numberOfStates) << std::endl;
    }

    float get_speed_error(float ){

    }

    float deg_to_rad(float degree){
        return (degree * 3.142)/180;
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
    bool stateWentDown;
    van_loading::ICPDirection directions[AVERAGE_NUMBER];
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "automated_control_node");
    ros::NodeHandle nh;
    automated_control robot(nh);
    ros::spin();
}