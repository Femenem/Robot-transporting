cmake_minimum_required(VERSION 3.13)
project(icpSpeedTest)

set(CMAKE_CXX_STANDARD 11)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR/mrpt}")

# The list of "libs" which can be included can be found in:
#  https://www.mrpt.org/Libraries
# Add the top-level dependencies only.
# --------------------------------------------------------------------------
#foreach(dep slam;gui)
#    # if not building from inside MRPT source tree, find it as a cmake
#    # imported project:
#    if (NOT TARGET mrpt::${dep})
#        find_package(mrpt-${dep} REQUIRED)
#    endif()
#endforeach()
#
#add_executable(icpSpeedTest main.cpp)
#
## Add the required libraries for linking:
#foreach(dep slam;gui)
#    target_link_libraries(${sampleName} mrpt::${dep})
#endforeach()

# Set optimized building:
if((${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang" OR CMAKE_COMPILER_IS_GNUCXX) AND NOT CMAKE_BUILD_TYPE MATCHES "Debug")
    add_compile_options(-O3)
endif()