# Install script for directory: /home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so.1.9.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so.1.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/lib/libmrpt-hmtslam.so.1.9.9"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/lib/libmrpt-hmtslam.so.1.9"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/lib/libmrpt-hmtslam.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so.1.9.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so.1.9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmrpt-hmtslam.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam/mrpt-hmtslam-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam/mrpt-hmtslam-targets.cmake"
         "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam/CMakeFiles/Export/share/mrpt-hmtslam/mrpt-hmtslam-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam/mrpt-hmtslam-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam/mrpt-hmtslam-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam/CMakeFiles/Export/share/mrpt-hmtslam/mrpt-hmtslam-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam" TYPE FILE FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam/CMakeFiles/Export/share/mrpt-hmtslam/mrpt-hmtslam-targets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mrpt-hmtslam" TYPE FILE FILES
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/mrpt-hmtslam-config.cmake"
    "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/mrpt-hmtslam-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mrpt/hmtslam/include/" TYPE DIRECTORY FILES "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/libs/mrpt/libs/hmtslam/include/")
endif()

