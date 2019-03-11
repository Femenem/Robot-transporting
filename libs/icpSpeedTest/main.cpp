//#include "../libicp"
//#include <mrpt/slam/CICP.h>

#include <mrpt/maps/CSimplePointsMap.h>
#include <mrpt/obs/CObservation2DRangeScan.h>
#include <mrpt/slam/CICP.h>
#include <mrpt/poses/CPose2D.h>
#include <mrpt/poses/CPosePDF.h>
#include <mrpt/poses/CPosePDFGaussian.h>
#include <mrpt/gui.h>
#include <mrpt/math/utils.h>

#include <iostream>
#include <fstream>

#define SCAN_SIZE 180

// Globals
int ICP_method = (int) icpClassic;
float SOURCE_DATA[] = { 0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  0.0,  0.0,
                        0.0,  0.0,  0.0,  0.0,  0.0,  3.182666301727295,
                        3.17217755317688,  3.163421154022217,  3.1386680603027344,
                        3.1160290241241455,  0.0,  0.0,  0.0,  0.0,  0.0,
                        7.600202560424805,  7.56876277923584,  0.0,  0.0,
                        0.0,  3.048004627227783,  3.012477159500122,  3.0182173252105713,
                        3.0093634128570557,  3.0306177139282227,  3.0033621788024902,
                        3.670501470565796,  3.6858925819396973, 3.685093402862549,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0};

float MODEL_DATA[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      3.7719333171844482, 3.0769121646881104, 3.079191207885742, 3.09710693359375,
                      3.0464165210723877, 3.0593223571777344, 7.55477237701416, 7.537793159484863,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.544264793395996, 3.0756242275238037,
                      3.054802656173706, 3.060952663421631, 3.0953149795532227, 3.0981061458587646,
                      3.1139943599700928, 3.7619433403015137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                      0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

using namespace mrpt;
using namespace mrpt::slam;
using namespace mrpt::maps;
using namespace mrpt::obs;
using namespace mrpt::math;
using namespace mrpt::poses;
using namespace std;

bool skip_window = false;
int ICP_method = (int)icpClassic;


int main(int argc, char** argv) {

    CSimplePointsMap m1, m2;
    float runningTime;
    CICP::TReturnInfo info;
    CICP ICP;

    // Load scans:
    CObservation2DRangeScan scan1;
    scan1.aperture = M_PIf;
    scan1.rightToLeft = true;
    ASSERT_(sizeof(MODEL_DATA) == sizeof(float) * SCAN_SIZE);

    /**
     * Copy the  float scan laser arrays to the corresponding members of the
     * CObservation2DRangeScan instances
     */
    scan1.loadFromVectors(SCAN_SIZE, SOURCE_DATA, MODEL_DATA);
    CObservation2DRangeScan scan2 = scan1;
    scan2.loadFromVectors(SCAN_SIZE, SOURCE_DATA, MODEL_DATA);

    // Build the points maps from the scans:
    m1.insertObservation(&scan1);
    m2.insertObservation(&scan2);

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

    ICP.options.dumpToConsole();

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

    return 0;
}