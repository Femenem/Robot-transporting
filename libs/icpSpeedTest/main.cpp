//#include "../libicp"
//#include <mrpt/slam/CICP.h>


#include "Eigen/StdVector"
#include "pointmatcher/PointMatcher.h"
#include <cassert>
#include <iostream>
#include "boost/filesystem.hpp"

int main(int argc, char** argv) {

//    while(true){
//        for (int i = 1; i <= 179; ++i) {
//            std::cout << i << ", " << std::endl;
//        }
//        return 0;
//    }


    typedef PointMatcher<float> PM;
    typedef PM::DataPoints DP;

    // Load point clouds
    const DP ref(DP::load(argv[1]));
    const DP data(DP::load(argv[2]));

    // Create the default ICP algorithm
    PM::ICP icp;

    // See the implementation of setDefault() to create a custom ICP algorithm
    icp.setDefault();

    // Compute the transformation to express data in ref
    PM::TransformationParameters T = icp(data, ref);

    // Transform data to express it in ref
    DP data_out(data);
    icp.transformations.apply(data_out, T);

    // Safe files to see the results
    ref.save("test_ref.vtk");
    data.save("test_data_in.vtk");
    data_out.save("test_data_out.vtk");
    std::cout << "Final transformation:" << std::endl << T << std::endl;

    return 0;
}