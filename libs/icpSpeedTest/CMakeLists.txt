cmake_minimum_required(VERSION 3.13)
project(icpSpeedTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(icpSpeedTest main.cpp)

#--------------------
# DEPENDENCY: eigen 3
#--------------------
find_path(EIGEN_INCLUDE_DIR Eigen/Core
        /usr/local/include/eigen3
        /usr/include/eigen3
        )

# Suppress Eigen's warning by adding it to the system's library
include_directories(SYSTEM "${EIGEN_INCLUDE_DIR}")

find_package(Boost REQUIRED COMPONENTS system)