//
// Created by matt on 08/04/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "message_filters/subscriber.h"
#include "tf/message_filter.h"
#include "tf/transform_listener.h"
#include "filters/filter_chain.h"

class laserscan_filter{
public:
    laserscan_filter():
            scan_sub(nh, "/van_loading/front_laser/scan", 10),
            tf_filter(scan_sub, tf, "base_link", 10),
            filter_chain("sensor_msgs::LaserScan")
    {
        // Configure filter chain
        filter_chain.configure("~");

        // Setup tf::MessageFilter for input
        tf_filter.registerCallback(
                boost::bind(&laserscan_filter::filter, this, _1));
        tf_filter.setTolerance(ros::Duration(0.03));

        // Advertise output
        output_pub = nh.advertise<sensor_msgs::LaserScan>("/van_loading/front_laser/scan_filtered", 10);
        ROS_INFO("Laserscan filter node ready!");
    }

    void filter(const sensor_msgs::LaserScan::ConstPtr& ls_in){
        // Run the filter chain
        filter_chain.update (*ls_in, ls);
        std::cout << ls;

        // Publish the output
        output_pub.publish(ls);
    }

private:
    // Our NodeHandle
    ros::NodeHandle nh;

    // Components for tf::MessageFilter
    tf::TransformListener tf;
    message_filters::Subscriber<sensor_msgs::LaserScan> scan_sub;
    tf::MessageFilter<sensor_msgs::LaserScan> tf_filter;

    // Filter Chain
    filters::FilterChain<sensor_msgs::LaserScan> filter_chain;

    // Components for publishing
    sensor_msgs::LaserScan ls;
    ros::Publisher output_pub;

};


int main(int argc, char **argv) {
    ros::init(argc, argv, "laserscan_filter_node");
//    ros::NodeHandle nh;
    laserscan_filter f();
    ros::spin();
    return 0;
}