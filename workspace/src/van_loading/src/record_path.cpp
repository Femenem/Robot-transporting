//
// Created by matt on 20/02/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include <geometry_msgs/Twist.h>

#include <ctime>
#include <chrono>

#include <iostream>
#include <fstream>
#include <string>

#define MAX_COUNT 80 // getting middle 80 values
#define SNAPSHOT_DISTANCE 0.30  // ~0.2m
#define AVERAGE_NUMBER 3

// TODO: Change into class. When class is destroyed, make new file with number of lines at top?
// TODO: Capture snapshots of the laserscan depending on how fast the robot is traveling

class record_path{
public:
    record_path(ros::NodeHandle nh){
        currentSpeed = 0;
        numberOfSnapshots = 0;
        averageCount = 0;
        distanceTraveled = SNAPSHOT_DISTANCE; // Take a snapshot at the start
        laserSub = nh.subscribe("/van_loading/front_laser/scan_filtered", 1, &record_path::handle_laser_data, this);
        speedSub = nh.subscribe("/van_loading/cmd_vel", 1, &record_path::new_movement_command, this);
        startTime = std::chrono::system_clock::now();
        now = std::time(0); // Get now time
        timestamp = std::localtime(&now); // Convert to local time
        fileString = "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/data/"
                + std::to_string(timestamp->tm_mday) + "-" + std::to_string(timestamp->tm_mon)
                + "-" + std::to_string(timestamp->tm_hour) + std::to_string(timestamp->tm_min)
                + std::to_string(timestamp->tm_sec) + ".csv"; // TODO MAKE LOCAL FILE
        file.open(fileString, std::ios::app);
        ROS_INFO("File has been opened in this location: %s", fileString.c_str());
        ROS_INFO("Recording.");
    }

    ~record_path(){
        distanceTraveled = SNAPSHOT_DISTANCE;
        ros::spinOnce(); // Take last snapshot
        file.close();
    }

    void new_movement_command(const geometry_msgs::Twist& cmd){
        double distanceToAdd;
        endTime = std::chrono::system_clock::now(); // End timer
        std::chrono::duration<double> timeElapsed = endTime - startTime;
        if(currentSpeed < 0){
            currentSpeed = currentSpeed * -1; // Make positive value instead
        }
        // If timeElspsed > 300ms then robot stopped after 300ms.
        if (timeElapsed.count() > 0.3){
            distanceToAdd = 0.3 * currentSpeed;
        } else {
            distanceToAdd = timeElapsed.count() * currentSpeed;
        }
        distanceTraveled = distanceTraveled + distanceToAdd;
        // On next laser scan if distanceTraveled is over the threshold, snapshot is taken.

        currentSpeed = cmd.linear.x;
        startTime = std::chrono::system_clock::now();
    }

    void handle_laser_data(const sensor_msgs::LaserScan ls){
        // TODO Grab 5 laserscans and make average of them
        if(take_snapshot()){ // Computes distance traveled from last snapshot
            scans[averageCount] = ls;
            averageCount++;
            if(averageCount >= AVERAGE_NUMBER){ // Taken an average
                float ranges[MAX_COUNT];
                for (int k = 0; k < MAX_COUNT; ++k) { // Init all as 0
                    ranges[k] = 0;
                }
                for (int j = 0; j < AVERAGE_NUMBER; ++j) {
                    for (int i = 0; i < MAX_COUNT; ++i) {
                        ranges[i] = ranges[i] + scans[j].ranges[i];
                    }
                }
                for (int i = 0; i < MAX_COUNT; ++i) {
                    file << (ranges[i]/AVERAGE_NUMBER); // Copy value to file
                    if(i != MAX_COUNT-1) { // Not the final value then do CSV.
                        file << ",";
                    }
                }
                file << "\n"; // End of CSV for this
                numberOfSnapshots++;
                ROS_INFO("Snapshot taken. Current number of snapshots: %i", numberOfSnapshots);
                distanceTraveled = 0.0; // Reset distance for next snapshot
                averageCount = 0; // Reset scan count for next snapshot
            }
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
    int averageCount;
    sensor_msgs::LaserScan scans[AVERAGE_NUMBER];

    bool take_snapshot(){
        if (distanceTraveled >= SNAPSHOT_DISTANCE){
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