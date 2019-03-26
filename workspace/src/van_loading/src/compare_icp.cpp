//
// Created by matt on 13/03/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/Int8.h"
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

#define SCAN_SIZE 180

char MODEL_VALID[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0}; // Only look at the middle 60 values


class icp_compare
{
public:
    icp_compare(ros::NodeHandle nh){
        this->stateSub = nh.subscribe("/van_loading/ICP_model_state", 1, &icp_compare::update_state, this);
        ROS_INFO("Model state subscribed.");
        this->laserSub = nh.subscribe("/van_loading/front_laser/scan", 1, &icp_compare::compare_laser_data, this);
        ROS_INFO("Laser scan subscribed.");
        this->directionPub = nh.advertise<van_loading::ICPDirection>("/van_loading/ICP_direction", 10);
        // Load model data
        this->numberOfStates = 0;
        this->state = 0; // Starting state
        models = this->load_models();

        ROS_INFO("ICP node ready.");
    }

    ~icp_compare(){

    }

    void update_state(const std_msgs::Int8 newState){
        this->state = newState.data;
        cout << "Current state" << this->state;
    }

    float** load_models(){
        std::ifstream data("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/config/model.csv");
        std::vector<std::vector<float>> values;
        std::vector<float> valueline;
        std::string item;
        float ** model;
        for (string line; getline(data, line); )
        {
            std::istringstream in(line);

            while (getline(in, item, ','))
            {
                valueline.push_back(atof(item.c_str()));
            }

            values.push_back(valueline);
            valueline.clear();
            this->numberOfStates++; // Counting each line as a new state
        }
        model = new float*[this->numberOfStates];
        ROS_INFO("Test");
        for (int i = 0; i < numberOfStates; ++i) { // Convert from vector to array for ready for ICP
            model[i] = new float[SCAN_SIZE];
            for (int j = 0; j < SCAN_SIZE; ++j) {
                if(values[i][j] >= 30){
                    model[i][j] = 30.0f;
                } else{
                    model[i][j] = values[i][j];
                }
//                cout << MODEL_RANGES[i][j]; // DEBUG
            }
        }
        return model;
    }

    void compare_laser_data(const sensor_msgs::LaserScan ls){
        float SOURCE_RANGES[SCAN_SIZE];
        float MODEL_RANGES[SCAN_SIZE];
        for (int i = 0; i < SCAN_SIZE; ++i) { // Copy values from vector to array
            if(ls.ranges[i] > 30){
                SOURCE_RANGES[i] = 30.0f;
            }else {
                SOURCE_RANGES[i] = ls.ranges[i];
            }
            MODEL_RANGES[i] = this->models[this->state][i];
//        cout << SOURCE_RANGES[i] << ":" << MODEL_RANGES[this->state][i] << ", "; // DEBUG
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
        //	ICP.options.ICP_algorithm = icpLevenbergMarquardt;
        ICP.options.ICP_algorithm = icpClassic;
//    ICP.options.ICP_algorithm = (TICPAlgorithm)ICP_method;

        // configuration options for the icp algorithm
        ICP.options.maxIterations = 200;
        ICP.options.thresholdAng = DEG2RAD(15.0f);
        ICP.options.thresholdDist = 2.0f;
        ICP.options.ALFA = 0.5f;
        ICP.options.smallestThresholdDist = 0.01f;
        ICP.options.doRANSAC = true;
        ICP.options.corresponding_points_decimation = 1;

//    ICP.options.dumpToConsole();
        // -----------------------------------------------------

        /**
         * Scans alignment procedure.
         * Given an initial guess (initialPose) and the maps to be aligned, the
         * algorithm returns the probability density function (pdf) of the alignment
         * Additional arguments are provided to investigate the performance of the
         * algorithm
         */
        CPose2D initialPose(0.0f, 0.0f, (float)DEG2RAD(0.0f));

        CPosePDF::Ptr pdf =
                ICP.Align(&m1, &m2, initialPose, &runningTime, (void*)&info);

        printf(
                "ICP run in %.02fms, %d iterations (%.02fms/iter), %.01f%% goodness\n "
                "-> ",
                runningTime * 1000, info.nIterations,
                runningTime * 1000.0f / info.nIterations, info.goodness * 100);

        cout << "Mean of estimation: " << pdf->getMeanVal() << endl << endl;

        CPosePDFGaussian gPdf;
        gPdf.copyFrom(*pdf);

        cout << "Covariance of estimation: " << endl << gPdf.cov << endl;

        cout << " std(x): " << sqrt(gPdf.cov(0, 0)) << endl;
        cout << " std(y): " << sqrt(gPdf.cov(1, 1)) << endl;
        cout << " std(phi): " << RAD2DEG(sqrt(gPdf.cov(2, 2))) << " (deg)" << endl;

        CPose2D icpEstimate = pdf->getMeanVal();
        mrpt::math::dynamic_vector<double> vector;
        icpEstimate.getAsVector(vector);

        van_loading::ICPDirection direction;
        direction.x = vector[0];
        direction.y = vector[1];
        direction.angle = vector[2];

        directionPub.publish(direction);
        std::cout << "Help?";

    }

private:
    ros::Subscriber laserSub;
    ros::Subscriber stateSub;
    ros::Publisher directionPub;
    int state;
    int numberOfStates;
    float ** models;
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "compare_laser_data_node");
    ros::NodeHandle nh;
    icp_compare icp(nh);
    ros::spin();
}