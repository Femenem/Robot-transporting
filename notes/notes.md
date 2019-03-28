# Notes

### Dependancies:
MRPT: sudo apt install libftdi-dev freeglut3-dev zlib1g-dev libusb-1.0-0-dev \
      libudev-dev libfreenect-dev libdc1394-22-dev libavformat-dev libswscale-dev \
      libassimp-dev libjpeg-dev   libsuitesparse-dev libpcap-dev liboctomap-dev

      sudo apt install build-essential pkg-config cmake libwxgtk3.0-dev \
      libopencv-dev libeigen3-dev libgtest-dev

      sudo apt-get install ros-melodic-mrpt-slam

      MRPT:
      sudo add-apt-repository ppa:joseluisblancoc/mrpt
      sudo apt-get update
      sudo apt-get install libmrpt-dev mrpt-apps



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

### Week 25/02/19:

Monday:
Fixed controller issue. Needed to install ros-melodic-effort-controllers and ros-melodic-velocity-controllers
Got test data by manually echoing the topic.

Tuesday:
Converted data to csv file format

Wednesday: off

Thursday: off

Friday: off

### Week 04/03/19:

Monday: off

Tuesday:
Made manual control of robot

Wednesday:
Took measurements of van
Made van to scale. Robot slides off ramps.

Thursday:
Worked on poster

Friday:
Finished poster and handed in

### Week 11/03/19:

Monday:
Finally got MRPT to work with cmake.

Tuesday:
Tested ICP works with model and test data.

Wednesday:
Made ICP program that compares real time data with model.
Fixed controllers (again).
Improved moving robot program. (added quit button and reset button)
Get data program now saves all recorded data to file rather than terminal output.
Made van model heavier and aligned ramps better.

Thursday:
Update trello.

Friday:
Look at min-depth in gazebo. For contact with surfaces

### Week 18/03/19:

Monday:
Did demonstration. Went ok.
Possibly use PID to control.

Tuesday:
Fixed bouncing issue in van. Set max_vel to 0.0 instead of 0.1

Wednesday:


Thursday:
Added states.
Added version 0.1 of automated movement.
Manual control of states.
ICP compare changed to class.
ICP compare loads from file.

Friday:
Limited sensor data to middle 80 because of too little variance when comparing inf to inf.
Change state no longer works, idk why.

## Week 25/03/19:

Monday:
Made version 0.1 of recording program.

Tuesday:
Fixed state not publishing.
Fixed catkin_make issues.
Updated recording program. Still need to get it to count distance properly.
Updated ICP node to work with any number of states.

Wednesday:
Fixed recording program. Now works as planned.
Edited ICP algorithm values. Set alpha to 0 and corresponding_points_decimation to 2.
Alpha = 0

Thursday:

Friday:
