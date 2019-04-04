//
// Created by matt on 20/02/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include <double_ackermann/DoubleAckermann.h>

#include <ctime>
#include <chrono>

#include <iostream>
#include <fstream>
#include <string>

#define MAX_COUNT 180
#define SNAPSHOT_DISTANCE 0.50  // ~0.5m

// TODO: Change into class. When class is destroyed, make new file with number of lines at top?
// TODO: Capture snapshots of the laserscan depending on how fast the robot is traveling

class record_path{
public:
    record_path(ros::NodeHandle nh){
        this->currentSpeed = 0;
        this->numberOfSnapshots = 0;
        this->distanceTraveled = SNAPSHOT_DISTANCE; // Take a snapshot at the start
        this->laserSub = nh.subscribe("/van_loading/front_laser/scan", 1, &record_path::handle_laser_data, this);
        this->speedSub = nh.subscribe("/van_loading/cmd_ackermann", 1, &record_path::new_movement_command, this);
        this->startTime = std::chrono::system_clock::now();
        this->now = std::time(0); // Get now time
        this->timestamp = std::localtime(&now); // Convert to local time
        this->fileString = "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/data/"
                + std::to_string(this->timestamp->tm_mday) + "-" + std::to_string(this->timestamp->tm_mon)
                + ":" + std::to_string(this->timestamp->tm_hour) + std::to_string(this->timestamp->tm_min)
                + std::to_string(this->timestamp->tm_sec) + ".csv";
        this->file.open(fileString, std::ios::app);
        ROS_INFO("File has been opened in this location: ");
        std::cout << this->fileString << std::endl;
        ROS_INFO("Recording.");
    }

    ~record_path(){
        this->distanceTraveled = SNAPSHOT_DISTANCE;
        ros::spinOnce(); // Take last snapshot
        this->file.close();
    }

    void new_movement_command(const double_ackermann::DoubleAckermann& cmd){
        double distanceToAdd;
        this->endTime = std::chrono::system_clock::now(); // End timer
        std::chrono::duration<double> timeElapsed = this->endTime - this->startTime;
        // If timeElspsed > 300ms then robot stopped after 300ms.
        if (timeElapsed.count() > 0.3){
            distanceToAdd = 0.3 * this->currentSpeed;
        } else {
            distanceToAdd = timeElapsed.count() * this->currentSpeed;
        }
        this->distanceTraveled = this->distanceTraveled + distanceToAdd;
        // On next laser scan if distanceTraveled is over the threshold, snapshot is taken.

        this->currentSpeed = cmd.speed;
        this->startTime = std::chrono::system_clock::now();
    }

    void handle_laser_data(const sensor_msgs::LaserScan ls){
        if(take_snapshot()){ // Computes distance traveled from last snapshot
            for (int i = 0; i < MAX_COUNT; ++i) {
                if(ls.ranges[i] > 30.0){
                    this->file << 30.0;
                } else{
                    this->file << ls.ranges[i];
                }
                if(i != MAX_COUNT-1) { // Not the final value then do CSV.
                    this->file << ",";
                }
            }
            this->file << "\n"; // End of CSV for this
            this->numberOfSnapshots++;
            ROS_INFO("Snapshot taken.");
            std::cout << std::to_string(this->numberOfSnapshots) << std::endl;
        }
    }

private:
    std::ofstream file;
    ros::Subscriber laserSub;
    ros::Subscriber speedSub;
    std::time_t now;
    std::tm* timestamp;
    std::string fileString;
    float currentSpeed; // meters/s
    double distanceTraveled; // meters
    std::chrono::time_point<std::chrono::system_clock> startTime;
    std::chrono::time_point<std::chrono::system_clock> endTime;
    int numberOfSnapshots;

    bool take_snapshot(){
        if (this->distanceTraveled >= SNAPSHOT_DISTANCE){
            this->distanceTraveled = 0.0; // Reset distance travelled TODO: DOESNT WORK?!?!?!?
            return true;
        } else{
            return false;
        }
    }
};


int main(int argc, char **argv) {
    ros::init(argc, argv, "record_path_node");
    ros::NodeHandle nh;
    record_path record_path(nh);
    ros::spin();
}