# Install script for directory: /home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libcvd-prefix/src/libcvd-build/libCVD.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/argb.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/bgrx.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/bresenham.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/byte.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/camera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/canny.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourmap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourspace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourspacebuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourspaces.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourspace_convert.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/colourspace_frame.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/connected_components.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/convolution.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/deinterlacebuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/deinterlaceframe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/diskbuffer2.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/diskbuffer2_frame.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/distance_transform.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/documentation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/draw.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/esm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/fast_corner.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/gles1_helpers.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/glwindow.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/gl_helpers.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/haar.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/harris_corner.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/helpers.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image_convert.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image_convert_fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image_interpolate.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image_io.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/image_ref.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/integral_image.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/interpolate.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/la.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/localvideobuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/localvideoframe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/morphology.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/nonmax_suppression.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/opencv.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/readaheadvideobuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/rgb.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/rgb8.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/rgba.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/serverpushjpegbuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/serverpushjpegframe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/timeddiskbuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/timer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/utility.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/vector_image_ref.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videobuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videobufferflags.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videobufferwithdata.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videofilebuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videofilebuffer_frame.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videoframe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videosource.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/vision.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/vision_exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/yc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/video" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/video/skipbuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/builtin_components.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/concurrency_utilities.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/convert_pixel_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/gles1_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/gl_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/image_ref_implementation.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/bmp.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/cvdimage.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/fits.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/jpeg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/parameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/png.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/pnm_grok.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/save_postscript.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/text.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal/io" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/io/tiff.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/load_and_save.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/name_builtin_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/name_CVD_rgb_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/pixel_operations.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/pixel_traits.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/rgb_components.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/scalar_convert.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/internal" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/internal/win.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/Linux" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/Linux/dvbuffer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/Linux" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/Linux/dvbuffer3.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd/Linux" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/Linux/dvframe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cvd" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cvd/videodisplay.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libcvd-prefix/src/libcvd-build/include/cvd")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/otherlibs/libcvd/cmake/CVDConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libcvd-prefix/src/libcvd-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
