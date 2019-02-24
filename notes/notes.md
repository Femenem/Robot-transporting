# Notes

### Dependancies:
MRPT: sudo apt install libftdi-dev freeglut3-dev zlib1g-dev libusb-1.0-0-dev \
      libudev-dev libfreenect-dev libdc1394-22-dev libavformat-dev libswscale-dev \
      libassimp-dev libjpeg-dev   libsuitesparse-dev libpcap-dev liboctomap-dev

      sudo apt install build-essential pkg-config cmake libwxgtk3.0-dev \
      libopencv-dev libeigen3-dev libgtest-dev

### Week 11/02/19:
Van width = ~1.6m

Monday:
Made prototype model of van. This needs to be changed to the real measured values
Setup workspace for running ros
Missing ackerman.h file. Get this off fred for controlling idris
Need to make own project

Tuesday:
Made own project and changed idris_sim to van_loading
Changed van model to have 2 ramps instead of 1
Tried making a message file, didn't work

Wednesday:
Looked up Algorithms to use. Decided on ICP

Thursday:

Friday: off

### Week 18/02/19:

Monday: off

Tuesday:
Found ICP libraries. Need to test
Downloaded double_ackerman and made catkin_make compile

Wednesday:
Installed ICP libraries
Gathered laserScan data for comparing computational times
Started speedtest program

Thursday:
Downloaded and compiled another ICP library.
Got example code to work

Friday:
Started using mendeley and updated all (most) sources.
Tried to fix coltroller issue.

