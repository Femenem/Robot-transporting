# Install script for directory: /home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mrpt" TYPE FILE FILES
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/parse-files/mrpt-config.cmake"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/mrpt-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/mrpt-doc/" TYPE DIRECTORY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/doc/html")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/mrpt-doc/" TYPE DIRECTORY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/samples")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/share/applications"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/share/pixmaps"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/share/metainfo"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/share/mime"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/share/mrpt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mrpt" TYPE FILE FILES
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/include/mrpt-configuration/unix//mrpt/config.h"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/include/mrpt-configuration/unix//mrpt/version.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/otherlibs/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/libs/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/apps/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/doc/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/otherlibs/gtest-1.8.1/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/tests/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/python/cmake_install.cmake")
  include("/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/samples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
