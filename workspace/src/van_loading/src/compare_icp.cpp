//
// Created by matt on 13/03/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/Int16.h"
#include "van_loading/ICPDirection.h"

#include <iostream>
#include <fstream>
#include <string>

#include <mrpt/maps/CSimplePointsMap.h>
#include <mrpt/obs/CObservation2DRangeScan.h>
#include <mrpt/slam/CICP.h>
#include <mrpt/poses/CPose2D.h>
#include <mrpt/poses/CPosePDF.h>
#include <mrpt/poses/CPosePDFGaussian.h>
#include <mrpt/math/utils.h>

using namespace mrpt;
using namespace mrpt::slam;
using namespace mrpt::maps;
using namespace mrpt::obs;
using namespace mrpt::math;
using namespace mrpt::poses;
using namespace std;

#define SCAN_SIZE 80

#define DEBUG


class icp_compare
{
public:
    icp_compare(ros::NodeHandle nh){
        this->stateSub = nh.subscribe("/van_loading/ICP_model_state", 1, &icp_compare::update_state, this);
        ROS_INFO("Model state subscribed.");
        this->laserSub = nh.subscribe("/van_loading/front_laser/scan_filtered", 1, &icp_compare::compare_laser_data, this);
        ROS_INFO("Laser scan subscribed.");
        this->directionPub = nh.advertise<van_loading::ICPDirection>("/van_loading/ICP_direction", 1);
        this->numberOfStatesPub = nh.advertise<std_msgs::Int16>("/van_loading/number_of_states", 1, true); // Latched

        // Load model data
        this->numberOfStates = 0;
        this->state = 0; // Starting state
        models = load_models();
        std_msgs::Int16 sendNumberOfStates;
        sendNumberOfStates.data = this->numberOfStates;
        this->numberOfStatesPub.publish(sendNumberOfStates);

        ROS_INFO("ICP node ready.");
    }

    ~icp_compare(){

    }

    void update_state(const std_msgs::Int16 newState){
        this->state = newState.data;
        cout << "Current state" << this->state;
    }

    std::vector<std::vector<float> > load_models(){
        std::ifstream data("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/config/model.csv");
        std::vector<float> valueline;
        std::string item;
        std::vector<std::vector<float> > model;
        for (string line; getline(data, line); )
        {
            std::istringstream in(line);

            while (getline(in, item, ','))
            {
                valueline.push_back(atof(item.c_str()));
            }

            model.push_back(valueline);
            valueline.clear();
            this->numberOfStates++; // Counting each line as a new state
        }
        data.close();
        return model;
    }

    void compare_laser_data(const sensor_msgs::LaserScan ls){
        float SOURCE_RANGES[SCAN_SIZE];
        float MODEL_RANGES[SCAN_SIZE];
        char MODEL_VALID[SCAN_SIZE];
        for (int i = 0; i < SCAN_SIZE; ++i) { // Copy values from vector to array
            if(ls.ranges[i] == -1){ // Invalid value
                SOURCE_RANGES[i] = 5.0f;
                MODEL_VALID[i] = 1;
                if(models[state][i] == -1){ // Both invalid, don't count it
                    MODEL_VALID[i] = 1;
                    models[state][i] = 5.0f;
                }
            }else { // Source is valid
                SOURCE_RANGES[i] = ls.ranges[i];
                MODEL_VALID[i] = 1;
                if(models[state][i] == -1){ // Source valid but model not.
                    models[state][i] = 5.0f;
                }
            }
            MODEL_RANGES[i] = models[state][i];
//        cout << to_string(MODEL_VALID[i]) << "::" << SOURCE_RANGES[i] << ":" << MODEL_RANGES[i] << ", "; // DEBUG
        }
        CSimplePointsMap m1, m2;
        float runningTime;
        CICP::TReturnInfo info;
        CICP ICP;

        // Load scans:
        CObservation2DRangeScan model;
        model.aperture = M_PIf;
        model.rightToLeft = true;
        ASSERT_(sizeof(MODEL_RANGES) == sizeof(float) * SCAN_SIZE);

        /**
         * Copy the  float scan laser arrays to the corresponding members of the
         * CObservation2DRangeScan instances
         */
        model.loadFromVectors(SCAN_SIZE, MODEL_RANGES, MODEL_VALID);
        CObservation2DRangeScan source = model;
        source.loadFromVectors(SCAN_SIZE, SOURCE_RANGES, MODEL_VALID);

        // Build the points maps from the scans:
        m1.insertObservation(&model);
        m2.insertObservation(&source);


        // -----------------------------------------------------

        /**
         * user-set parameters for the icp algorithm.
         * For a full list of the available options check the online tutorials
         * page:
         * https://www.mrpt.org/Iterative_Closest_Point_(ICP)_and_other_matching_algorithms
         */

        //	select which algorithm version to use
//        	ICP.options.ICP_algorithm = icpLevenbergMarquardt;
        ICP.options.ICP_algorithm = icpClassic;
//    ICP.options.ICP_algorithm = (TICPAlgorithm)ICP_method;

        // configuration options for the icp algorithm
        ICP.options.maxIterations = 200;
        ICP.options.thresholdAng = DEG2RAD(2.5f);
        ICP.options.thresholdDist = 2.5f;
        ICP.options.ALFA = 0.0f;
        ICP.options.smallestThresholdDist = 0.01f;
        ICP.options.doRANSAC = false;
        ICP.options.corresponding_points_decimation = 3;

//    ICP.options.dumpToConsole();
        // -----------------------------------------------------

        /**
         * Scans alignment procedure.
         * Given an initial guess (initialPose) and the maps to be aligned, the
         * algorithm returns the probability density function (pdf) of the alignment
         * Additional arguments are provided to investigate the performance of the
         * algorithm
         */
        CPose2D initialPose(-0.15f, 0.0f, (float)DEG2RAD(0.0f)); // Behind by 0.3m

        CPosePDF::Ptr pdf =
                ICP.Align(&m1, &m2, initialPose, &runningTime, (void*)&info);
#ifdef DEBUG
        printf(
                "ICP run in %.02fms, %d iterations (%.02fms/iter), %.01f%% goodness\n "
                "-> ",
                runningTime * 1000, info.nIterations,
                runningTime * 1000.0f / info.nIterations, info.goodness * 100);

        cout << "Mean of estimation: " << pdf->getMeanVal() << endl << endl;
#endif

        CPosePDFGaussian gPdf;
        gPdf.copyFrom(*pdf);
#ifdef DEBUG
        cout << "Covariance of estimation: " << endl << gPdf.cov << endl;

        cout << " std(x): " << sqrt(gPdf.cov(0, 0)) << endl;
        cout << " std(y): " << sqrt(gPdf.cov(1, 1)) << endl;
        cout << " std(phi): " << RAD2DEG(sqrt(gPdf.cov(2, 2))) << " (deg)" << endl;
#endif
        CPose2D icpEstimate = pdf->getMeanVal();
        mrpt::math::dynamic_vector<double> vector;
        icpEstimate.getAsVector(vector);

        van_loading::ICPDirection direction;
        direction.x = vector[0];
        direction.y = vector[1];
        direction.angle = vector[2];
        direction.goodness = info.goodness;
#ifdef DEBUG
        std::cout << "Goodness: " << std::to_string(direction.goodness) << std::endl;
        std::cout << "Current state:" << std::to_string(state) << std::endl;
#endif
        directionPub.publish(direction);
    }

private:
    ros::Subscriber laserSub;
    ros::Subscriber stateSub;
    ros::Publisher numberOfStatesPub;
    ros::Publisher directionPub;
    int state;
    int numberOfStates;
    std::vector<std::vector<float> > models; // 2d vector
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "compare_laser_data_node");
    ros::NodeHandle nh;
    icp_compare icp(nh);
    ros::spin();
}