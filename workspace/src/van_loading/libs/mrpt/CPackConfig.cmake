# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "OFF")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_FREEBSD "OFF")
SET(CPACK_BINARY_IFW "OFF")
SET(CPACK_BINARY_NSIS "OFF")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_PRODUCTBUILD "")
SET(CPACK_BINARY_RPM "OFF")
SET(CPACK_BINARY_STGZ "ON")
SET(CPACK_BINARY_TBZ2 "OFF")
SET(CPACK_BINARY_TGZ "ON")
SET(CPACK_BINARY_TXZ "OFF")
SET(CPACK_BINARY_TZ "ON")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_BUILD_SOURCE_DIRS "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt;/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENTS_ALL "Apps;Libraries;Unspecified")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DESCRIPTION_TEXT "<h1 align=center>The MRPT project</h1>

<table>
 <tr>
  <td>gcc/clang</td>
  <td><a href=https://travis-ci.org/MRPT/mrpt alt=Travis:gcc,clang><img src=https://travis-ci.org/MRPT/mrpt.png?branch=master /></a><br/><a href=https://circleci.com/gh/MRPT/mrpt><img src=https://circleci.com/gh/MRPT/mrpt.svg?style=svg></a> </td>
  <td>MSVC</td>
  <td><a href=https://ci.appveyor.com/project/jlblancoc/mrpt alt=AppVeyor:msvc><img src=https://ci.appveyor.com/api/projects/status/yjs4lpj02f6a1ylg?svg=true /></a></td>
  <td><a href=https://codecov.io/gh/MRPT/mrpt alt=codecov><img src=https://codecov.io/gh/MRPT/mrpt/branch/master/graph/badge.svg /></a></td>
  <td><a href=https://gitter.im/MRPT/mrpt alt=Gitter><img src=https://badges.gitter.im/Join%20Chat.svg /></a></td>
  <td><a href=https://www.codetriage.com/mrpt/mrpt alt=Open Source Helpers><img src=https://www.codetriage.com/mrpt/mrpt/badges/users.svg /></a></td>
 </tr>
 <tr>
  <td>GH</td>
  <td><a href=https://github.com/MRPT/mrpt/releases alt=GitHub><img src=https://img.shields.io/github/downloads/mrpt/mrpt/total.svg /></a></td>
  <td>SF(datasets)</td>
  <td><a href=https://sourceforge.net/projects/mrpt/files/ alt=SourceForge><img src=https://img.shields.io/sourceforge/dt/mrpt.svg /></a></td>
  <td>Stable</td>
  <td><a href=https://github.com/MRPT/mrpt/releases alt=Releases><img src=https://img.shields.io/github/release/MRPT/mrpt.svg /></a></td>

</tr>
</table>


## 1. Introduction
<img align=right src=https://mrpt.github.io/imgs/mrpt-videos-mix2.gif>

Mobile Robot Programming Toolkit (MRPT) provides C++ libraries aimed at researchers
in mobile robotics and computer vision. Libraries include [SLAM solutions](http://www.mrpt.org/List_of_SLAM_algorithms), [3D(6D) geometry](http://www.mrpt.org/tutorials/programming/maths-and-geometry/2d_3d_geometry/), [SE(2)/SE(3) Lie groups](http://ingmec.ual.es/~jlblanco/papers/jlblanco2010geometry3D_techrep.pdf),
[probability density functions (pdfs)](http://reference.mrpt.org/stable/classmrpt_1_1utils_1_1_c_probability_density_function.html) over points, landmarks, poses and maps,
Bayesian inference ([Kalman filters](http://www.mrpt.org/Kalman_Filters), [particle filters](http://www.mrpt.org/tutorials/programming/statistics-and-bayes-filtering/particle_filters/)), [image processing](http://www.mrpt.org/tutorials/programming/images-image-processing-camera-models/), [obstacle avoidance](http://www.mrpt.org/Obstacle_avoidance), [etc](http://reference.mrpt.org/devel/modules.html).
MRPT also provides GUI apps for [Stereo camera calibration](http://www.mrpt.org/list-of-mrpt-apps/application-kinect-stereo-calib/), [dataset inspection](http://www.mrpt.org/list-of-mrpt-apps/rawlogviewer/),
and [much more](http://www.mrpt.org/list-of-mrpt-apps/).

## 2. Resources
  * Download the latest unstable code with: `git clone https://github.com/MRPT/mrpt.git --depth 1`
  * Ask questions at: [this Google group](http://www.mrpt.org/forum/) or at [stackoverflow](http://stackoverflow.com/search?q=mrpt) (please, use the tag `mrpt`!)
  * [Main project website](http://www.mrpt.org/), including [sources and Windows installer downloads](http://www.mrpt.org/download-mrpt/)
  * [C++ API reference](http://docs.mrpt.org/reference/)
  * ROS packages: [`mrpt_navigation`](http://wiki.ros.org/mrpt_navigation), [`mrpt_slam`](http://wiki.ros.org/mrpt_slam)
  * [Bindings documentation](https://github.com/MRPT/mrpt/wiki) (Python, Matlab)
  * Source code for [dozens of examples](http://www.mrpt.org/tutorials/mrpt-examples/)
  * Example configuration files for  MRPT applications can be found at:
     [MRPT/share/mrpt/config_files](https://github.com/MRPT/mrpt/tree/master/share/mrpt/config_files)
  * Some sample datasets are stored in:
     [MRPT/share/mrpt/datasets](https://github.com/MRPT/mrpt/tree/master/share/mrpt/datasets).
    A more complete dataset repository is [available online](http://www.mrpt.org/robotics_datasets).
  * [How to contribute](https://github.com/MRPT/mrpt/blob/master/.github/CONTRIBUTING.md) with your code for new feaures, bug fixes, etc.

## 3. Install

### 3.1. Ubuntu

See [PPA](https://launchpad.net/~joseluisblancoc/+archive/ubuntu/mrpt) for mrpt 2.0 branch (for mrpt 1.5.* [read here](https://github.com/MRPT/mrpt/tree/mrpt-1.5#31-ubuntu-ppa)).

        sudo add-apt-repository ppa:joseluisblancoc/mrpt
        sudo apt-get update
        sudo apt-get install libmrpt-dev mrpt-apps

Supported distributions:
  * Ubuntu 18.04 (Bionic), 18.10 (Cosmic), 19.04 (Disco)
  * Ubuntu 16.04LTS Xenial (EOL: April 2021)
  	* Using 16.04 requires installing gcc-7 due to some bugs in gcc-5:

          add-apt-repository ppa:ubuntu-toolchain-r/test
          apt-get update
          apt-get install -y g++-7


### 3.2. Build from sources

Minimum compiler requisites:
  * mrpt >=2.0 (`master` branch):
    * gcc-7 or newer.
      * Ubuntu 16.04LTS Xenial: [Instructions](https://gist.github.com/jlblancoc/99521194aba975286c80f93e47966dc5) for installing gcc-7 in this version of Ubuntu.
      * Newer distros: default gcc version is ok.
    * clang-4 or newer.
    * Windows: Visual Studio 2017 version 15.3 or newer.
    * cmake >= 3.3 required (>=3.4 for Windows).
  * mrpt 1.5.* and maintenance `mrpt-1.5` branch:
    * Ubuntu 14.04LTS Trusty: default gcc/clang versions
    * Windows: Visual Studio 2012
    * cmake >= 3.1 required
    * **EOL** for `mrpt-1.5.*`: April 2019.

To build in Debian/Ubuntu follow the steps below. See [full build docs](http://www.mrpt.org/Building_and_Installing_Instructions) online
for Windows instructions or to learn all the details.

  * Install minimum recommended dependencies:

```bash
sudo apt install build-essential pkg-config cmake libwxgtk3.0-dev libwxgtk3.0-gtk3-dev \
libopencv-dev libeigen3-dev libgtest-dev
```
  MRPT builds against OpenCV 2.4.x, 3.x, 4.x, but it is recommended to use 3.0 or later.


  * Install additional dependencies to enable all MRPT features:

```bash
sudo apt install libftdi-dev freeglut3-dev zlib1g-dev libusb-1.0-0-dev \
libudev-dev libfreenect-dev libdc1394-22-dev libavformat-dev libswscale-dev \
libassimp-dev libjpeg-dev   libsuitesparse-dev libpcap-dev liboctomap-dev
```

  * Build with `cmake` as usual:

```bash
mkdir build && cd build
cmake ..
make
```

## 4. License
MRPT is released under the [new BSD license](http://www.mrpt.org/License/).
")
SET(CPACK_GENERATOR "STGZ;TGZ;TZ")
SET(CPACK_INSTALL_CMAKE_PROJECTS "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build;MRPT;ALL;/")
SET(CPACK_INSTALL_PREFIX "/usr/local")
SET(CPACK_MODULE_PATH "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/cmakemodules;/usr/lib/cmake/vtk-6.3")
SET(CPACK_NSIS_DISPLAY_NAME "mrpt-1.9.9")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "mrpt-1.9.9")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/CPackConfig.cmake")
SET(CPACK_PACKAGE_CONTACT "Jose Luis Blanco Claraco <joseluisblancoc@gmail.com>")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/README.md")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "MRPT is a set of C++ libraries and applications for mobile robot software development.")
SET(CPACK_PACKAGE_FILE_NAME "MRPT-1.9.9-Linux")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "mrpt-1.9.9")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "mrpt-1.9.9")
SET(CPACK_PACKAGE_NAME "MRPT")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Jose Luis Blanco Claraco")
SET(CPACK_PACKAGE_VERSION "1.9.9")
SET(CPACK_PACKAGE_VERSION_MAJOR "1")
SET(CPACK_PACKAGE_VERSION_MINOR "9")
SET(CPACK_PACKAGE_VERSION_PATCH "9")
SET(CPACK_RESOURCE_FILE_LICENSE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/COPYING")
SET(CPACK_RESOURCE_FILE_README "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/README.md")
SET(CPACK_RESOURCE_FILE_WELCOME "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/README.md")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TGZ")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_RPM "")
SET(CPACK_SOURCE_TBZ2 "")
SET(CPACK_SOURCE_TGZ "")
SET(CPACK_SOURCE_TXZ "")
SET(CPACK_SOURCE_TZ "")
SET(CPACK_SOURCE_ZIP "")
SET(CPACK_SYSTEM_NAME "Linux")
SET(CPACK_TOPLEVEL_TAG "Linux")
SET(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
