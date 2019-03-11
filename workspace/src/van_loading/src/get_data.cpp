//
// Created by matt on 20/02/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

#include <iostream>
#include <fstream>

#define MAX_COUNT 180

void handle_laser_data(const sensor_msgs::LaserScan ls){
    std::cout << "Timestamp:" << ls.header.stamp << "\n";
    for (int i = 0; i < MAX_COUNT; ++i) {
        if(ls.ranges[i] > 30.0){
            std::cout << 30.0 << ", ";
        } else{
            std::cout << ls.ranges[i] << ", ";
        }
    }
    std::cout << "\n";
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "get_laser_data_node");
    ros::NodeHandle nh;
    ros::start();
    ros::Rate loopRate(50);
    ros::Subscriber laserSub = nh.subscribe("/van_loading/front_laser/scan", 1, handle_laser_data);
    while(ros::ok()){

        ros::spinOnce();
        loopRate.sleep();
    }

}