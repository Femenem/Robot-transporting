cmake_minimum_required(VERSION 2.8.3)
project(van_loading)

## Add support for C++11, supported in ROS Kinetic and newer
add_definitions(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  double_ackermann
  hardware_interface
  message_runtime
  nav_msgs
  roscpp
  std_msgs
  tf
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


## Uncomment this if the package has a setup.py. This macro ensures
## modules and global scripts declared therein get installed
## See http://ros.org/doc/api/catkin/html/user_guide/setup_dot_py.html
# catkin_python_setup()

################################################
## Declare ROS messages, services and actions ##
################################################

## To declare and build messages, services or actions from within this
## package, follow these steps:
## * Let MSG_DEP_SET be the set of packages whose message types you use in
##   your messages/services/actions (e.g. std_msgs, actionlib_msgs, ...).
## * In the file package.xml:
##   * add a build_depend tag for "message_generation"
##   * add a build_depend and a run_depend tag for each package in MSG_DEP_SET
##   * If MSG_DEP_SET isn't empty the following dependency has been pulled in
##     but can be declared for certainty nonetheless:
##     * add a run_depend tag for "message_runtime"
## * In this file (CMakeLists.txt):
##   * add "message_generation" and every package in MSG_DEP_SET to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * add "message_runtime" and every package in MSG_DEP_SET to
##     catkin_package(CATKIN_DEPENDS ...)
##   * uncomment the add_*_files sections below as needed
##     and list every .msg/.srv/.action file to be processed
##   * uncomment the generate_messages entry below
##   * add every package in MSG_DEP_SET to generate_messages(DEPENDENCIES ...)

## Generate messages in the 'msg' folder
# add_message_files(
#    FILES
#    Ackermann.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
#generate_messages(
#  DEPENDENCIES
#  std_msgs  # Or other packages containing msgs
#)

################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

## To declare and build dynamic reconfigure parameters within this
## package, follow these steps:
## * In the file package.xml:
##   * add a build_depend and a run_depend tag for "dynamic_reconfigure"
## * In this file (CMakeLists.txt):
##   * add "dynamic_reconfigure" to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * uncomment the "generate_dynamic_reconfigure_options" section below
##     and list every .cfg file to be processed

## Generate dynamic reconfigure parameters in the 'cfg' folder
# generate_dynamic_reconfigure_options(
#   cfg/DynReconf1.cfg
#   cfg/DynReconf2.cfg
# )

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
  LIBRARIES van_loading libs/mrpt
  CATKIN_DEPENDS hardware_interface message_runtime roscpp std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
#include_directories(
#  libs/libicp/src
#)

## Declare a C++ library
# add_library(${PROJECT_NAME}
#   src/${PROJECT_NAME}/idris.cpp
# )

## Add cmake target dependencies of the library
## as an example, code may need to be generated before libraries
## either from message generation or dynamic reconfigure
# add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
# add_executable(${PROJECT_NAME}_node src/idris_node.cpp)

## Rename C++ executable without prefix
## The above recommended prefix causes long target names, the following renames the
## target back to the shorter version for ease of user use
## e.g. "rosrun someones_pkg node" instead of "rosrun someones_pkg someones_pkg_node"
# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME node PREFIX "")

## Add cmake target dependencies of the executable
## same as for the library above
# add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
# target_link_libraries(${PROJECT_NAME}_node
#   ${catkin_LIBRARIES}
# )

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables and/or libraries for installation
# install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_idris.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(van_loading_node src/idris_sim.cpp)
add_executable(get_data_node src/get_data.cpp)
target_link_libraries(van_loading_node ${catkin_LIBRARIES})
target_link_libraries(get_data_node ${catkin_LIBRARIES})
# add_dependencies(idris_sim_node idris_sim_gencpp)

add_dependencies(van_loading_node double_ackermann_generate_messages_cpp)

## Mark other files for installation (e.g. launch and bag files, etc.)
install(FILES
  launch/idris_sim.launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(DIRECTORY
launch
DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

#======================== External Dependencies ===============================

# initially
set(EXTERNAL_LIBS "")
set(EXTRA_DEPS "")

#--------------------
# DEPENDENCY:  boost
#--------------------
find_package(Boost COMPONENTS thread filesystem system program_options date_time REQUIRED)
if (Boost_MINOR_VERSION GREATER 47)
    find_package(Boost COMPONENTS thread filesystem system program_options date_time chrono REQUIRED)
endif (Boost_MINOR_VERSION GREATER 47)
include_directories(${Boost_INCLUDE_DIRS})
set(EXTERNAL_LIBS ${EXTERNAL_LIBS} ${Boost_LIBRARIES})


#--------------------
# DEPENDENCY: eigen 3
#--------------------
find_path(EIGEN_INCLUDE_DIR Eigen/Core
        /usr/local/include/eigen3
        /usr/include/eigen3
        )

# Suppress Eigen's warning by adding it to the system's library
include_directories(SYSTEM "${EIGEN_INCLUDE_DIR}")

#TODO: this should be a more standard way
#find_package(Eigen3 REQUIRED)
#message("-- eigen3 , version ${EIGEN_VERSION}")


#--------------------
# DEPENDENCY: nabo
#--------------------
find_package(libnabo REQUIRED PATHS ${LIBNABO_INSTALL_DIR})
#include(libnaboConfig)
include_directories(${libnabo_INCLUDE_DIRS})
set(EXTERNAL_LIBS ${EXTERNAL_LIBS} ${libnabo_LIBRARIES})
message(STATUS "libnabo found, version ${libnabo_VERSION} (include=${libnabo_INCLUDE_DIRS} libs=${libnabo_LIBRARIES})")

target_link_libraries(van_loading_node ${EXTERNAL_LIBS})

### MRPT:

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} libs/mrpt)

find_package(mrpt-slam)
find_package(mrpt-nav)
add_executable(test_icp_node src/test_icp.cpp)
target_link_libraries(test_icp_node mrpt::slam mrpt::nav)

add_executable(compare_against_model_node src/compare_against_model.cpp)
target_link_libraries(compare_against_model_node mrpt::slam mrpt::nav ${catkin_LIBRARIES})

### Libicp

# directories
#set (LIBICP_SRC_DIR libs/libcp/src)
#FIND_PATH(BOOST_DIR "boost")
#
## include directory
#include_directories("${LIBICP_SRC_DIR}")
#include_directories("${BOOST_DIR}")
#
## determine if OpenMP can/should be used
#option(USE_OPENMP "Enable OpenMP?" ON) # set to OFF to disable
#if(USE_OPENMP)
#    FIND_PACKAGE(OpenMP)
#    if(OPENMP_FOUND OR OpenMP_FOUND)
#        message(STATUS "OpenMP flags = ${OpenMP_CXX_FLAGS}")
#        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
#        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
#    else(OPENMP_FOUND OR OpenMP_FOUND)
#        message(STATUS "OpenMP not supported")
#    endif(OPENMP_FOUND OR OpenMP_FOUND)
#endif(USE_OPENMP)
#
## sources
#FILE(GLOB LIBICP_SRC_FILES "libs/libcp/src/*.cpp")


#target_link_libraries(test_icp_node ${catkin_LIBRARIES} ${LIBICP_SRC_FILES})