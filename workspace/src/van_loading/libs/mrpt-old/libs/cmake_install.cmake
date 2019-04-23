# Install script for directory: /home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/bayes/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/comms/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/config/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/containers/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/core/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/db/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/detectors/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/expr/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/graphs/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/graphslam/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/gui/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hwdrivers/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/img/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/io/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/kinematics/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/maps/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/math/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/nanoflann/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/nav/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/obs/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/opengl/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/pbmap/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/poses/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/random/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/rtti/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/serialization/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/slam/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/system/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/tclap/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/tfest/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/topography/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/typemeta/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/vision/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/vision-lgpl/cmake_install.cmake")

endif()

