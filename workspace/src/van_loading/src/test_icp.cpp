/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2019, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */

/**
 * Execute the iterating closest point algorithm (ICP) on a hardcoded pair of
 * laser data. The algorithm computes the transformation (translation and
 * rotation) for aligning the 2 sets of laser scans and plots the
 */

#include <mrpt/maps/CSimplePointsMap.h>
#include <mrpt/obs/CObservation2DRangeScan.h>
#include <mrpt/slam/CICP.h>
#include <mrpt/poses/CPose2D.h>
#include <mrpt/poses/CPosePDF.h>
#include <mrpt/poses/CPosePDFGaussian.h>
#include <mrpt/math/utils.h>

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

#include <iostream>
#include <fstream>

using namespace mrpt;
using namespace mrpt::slam;
using namespace mrpt::maps;
using namespace mrpt::obs;
using namespace mrpt::math;
using namespace mrpt::poses;
using namespace std;

bool skip_window = false;
int ICP_method = (int)icpClassic;

#define SCANS_SIZE 180

// A more usual case:
float SCAN_RANGES_1[] = {
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
char SCAN_VALID_1[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1};

float SCAN_RANGES_2[] = {
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 3.63753, 3.57566, 3.48227, 3.45992,
        3.47276, 3.85688, 3.80403, 3.73377, 4.16146, 4.09985, 4.16021, 4.28004, 30,
        30, 30, 30, 30, 2.89683, 2.87708, 2.84688, 2.83589, 2.80032, 2.85653, 3.15986,
        3.16363, 3.50332, 3.47319, 3.45493, 3.57857, 30, 30, 30, 30, 30, 30, 7.25748,
        7.21516, 7.40186, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
        30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
char SCAN_VALID_2[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1};

// ------------------------------------------------------
//				TestICP
// ------------------------------------------------------
void TestICP()
{
    CSimplePointsMap m1, m2;
    float runningTime;
    CICP::TReturnInfo info;
    CICP ICP;

    // Load scans:
    CObservation2DRangeScan scan1;
    scan1.aperture = M_PIf;
    scan1.rightToLeft = true;
    ASSERT_(sizeof(SCAN_RANGES_1) == sizeof(float) * SCANS_SIZE);

    /**
     * Copy the  float scan laser arrays to the corresponding members of the
     * CObservation2DRangeScan instances
     */
    scan1.loadFromVectors(SCANS_SIZE, SCAN_RANGES_1, SCAN_VALID_1);
    CObservation2DRangeScan scan2 = scan1;
    scan2.loadFromVectors(SCANS_SIZE, SCAN_RANGES_2, SCAN_VALID_2);

    // Build the points maps from the scans:
    m1.insertObservation(&scan1);
    m2.insertObservation(&scan2);


    // -----------------------------------------------------

    /**
     * user-set parameters for the icp algorithm.
     * For a full list of the available options check the online tutorials
     * page:
     * https://www.mrpt.org/Iterative_Closest_Point_(ICP)_and_other_matching_algorithms
     */

    //	select which algorithm version to use
    //	ICP.options.ICP_algorithm = icpLevenbergMarquardt;
    //	ICP.options.ICP_algorithm = icpClassic;
    ICP.options.ICP_algorithm = (TICPAlgorithm)ICP_method;

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

int main(int argc, char** argv)
{
    try
    {
        skip_window = (argc > 2);
        if (argc > 1)
        {
            ICP_method = atoi(argv[1]);
        }

        TestICP();

        return 0;
    }
    catch (exception& e)
    {
        cout << "MRPT exception caught: " << e.what() << endl;
        return -1;
    }
    catch (...)
    {
        printf("Another exception!!");
        return -1;
    }
}
