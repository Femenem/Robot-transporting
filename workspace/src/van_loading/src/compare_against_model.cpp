//
// Created by matt on 13/03/19.
//

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

#include <iostream>
#include <fstream>

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

#define SCANS_SIZE 180

float MODEL_RANGES[] = {
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 3.10579, 3.08903,
        3.10092, 3.08156, 3.07114, 3.05844, 30, 30, 7.64658, 7.63009, 30, 30, 30, 30, 30,
        30, 30, 30, 7.63224, 7.62528, 30, 3.19526, 3.08708, 3.06366, 3.0744, 3.09371, 3.09556,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
char MODEL_VALID[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1};

void compare_laser_data(const sensor_msgs::LaserScan ls){

    float SOURCE_RANGES[SCANS_SIZE];
    for (int i = 0; i < SCANS_SIZE; ++i) { // Copy values from vector to array
        if(ls.ranges[i] > 30){
            SOURCE_RANGES[i] = 30;
        }else {
            SOURCE_RANGES[i] = ls.ranges[i];
        }
    }
    CSimplePointsMap m1, m2;
    float runningTime;
    CICP::TReturnInfo info;
    CICP ICP;

    // Load scans:
    CObservation2DRangeScan model;
    model.aperture = M_PIf;
    model.rightToLeft = true;
    ASSERT_(sizeof(MODEL_RANGES) == sizeof(float) * SCANS_SIZE);

    /**
     * Copy the  float scan laser arrays to the corresponding members of the
     * CObservation2DRangeScan instances
     */
    model.loadFromVectors(SCANS_SIZE, MODEL_RANGES, MODEL_VALID);
    CObservation2DRangeScan source = model;
    source.loadFromVectors(SCANS_SIZE, SOURCE_RANGES, MODEL_VALID);

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
    ICP.options.maxIterations = 100;
    ICP.options.thresholdAng = DEG2RAD(10.0f);
    ICP.options.thresholdDist = 0.75f;
    ICP.options.ALFA = 0.5f;
    ICP.options.smallestThresholdDist = 0.05f;
    ICP.options.doRANSAC = false;

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

}

int main(int argc, char **argv) {
    ros::init(argc, argv, "compare_laser_data_node");
    ros::NodeHandle nh;
    ros::start();
    ros::Rate loopRate(50);
    ros::Subscriber laserSub = nh.subscribe("/van_loading/front_laser/scan", 1, compare_laser_data);
    while(ros::ok()){
        ros::spinOnce();
        loopRate.sleep();
    }
}