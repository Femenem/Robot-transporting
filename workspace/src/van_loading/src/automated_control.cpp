//
// Created by matt on 28/03/19.
//

#include "ros/ros.h"
#include "van_loading/ICPDirection.h"
#include <double_ackermann/DoubleAckermann.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Int16.h>

#define AVERAGE_NUMBER 3

class automated_control{
public:
    automated_control(ros::NodeHandle nh){
        this->valueCount = 0;
        this->numberOfStates = 0;
        this->stateTracker = 0;
        this->stateWentDown = false;
        this->directionSub = nh.subscribe("/van_loading/ICP_direction",
                1,
                &automated_control::store_movement,
                this);
        this->numberOfStatesSub = nh.subscribe("/van_loading/number_of_states",
                1,
                &automated_control::set_number_of_states,
                this);
        this->moveCommandPub = nh.advertise<double_ackermann::DoubleAckermann>("van_loading/cmd_ackermann", 10);
        this->changeStatePub = nh.advertise<std_msgs::Int16>("van_loading/ICP_model_state", 1);
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

private:
    void move_robot(van_loading::ICPDirection direction){
        double_ackermann::DoubleAckermann directionToSend;
        if(direction.x < 0.1 && direction.x > -0.1){ // Close enough to move on
            if(this->stateTracker == this->numberOfStates){ // FINISHED
                ROS_INFO("Robot is at the goal.");
                ros::shutdown();
                return;
            } else { // Not finished so move on
                ROS_INFO("Close enough to goal, moving state forwards");
                this->stateTracker++;
                std_msgs::Int16 state;
                state.data = this->stateTracker;
                this->changeStatePub.publish(state);
                directionToSend.speed = 0.0;
            }
        } else{
            directionToSend.speed = (direction.x * -1); // Invert because values are backwards
            if (directionToSend.speed < 0.8){ // If speed is low enough, make it faster
                directionToSend.speed = directionToSend.speed * 1.5;
            }
        }
        if(direction.y > 0.05 || direction.y < -0.05){ // Y position is far enough out to need a turn
            directionToSend.steering = deg_to_rad(direction.y) * -1; // * 20 to make it faster
            if (directionToSend.steering < 0.1){
                directionToSend.steering = directionToSend.steering * 100;
            }
        }
        directionToSend.ackermann = 2; // Front ackermann
        this->moveCommandPub.publish(directionToSend);
        std::cout << "Moving- " << "Speed: " << std::to_string(directionToSend.speed) <<
        " Steering: " << std::to_string(directionToSend.steering) << std::endl;
        std::cout << "Current state: " << std::to_string(this->stateTracker) <<
        " Number of states: " << std::to_string(this->numberOfStates) << std::endl;
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
    int stateTracker;
    int numberOfStates;
    int valueCount;
    bool stateWentDown;
    van_loading::ICPDirection directions[AVERAGE_NUMBER];
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "automated_control_node");
    ros::NodeHandle nh;
    automated_control robot(nh);
    ros::spin();
}