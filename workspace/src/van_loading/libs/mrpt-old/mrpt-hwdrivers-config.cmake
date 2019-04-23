include(CMakeFindDependencyMacro)

# Hints to help CMake finding my dependencies (and theirs own), as well as
# other future calls to search for other mrpt modules from our parent scope:
# 1: MRPT_DIR cmake var:
if (NOT "${MRPT_DIR}" STREQUAL "")
  list(APPEND CMAKE_PREFIX_PATH "${MRPT_DIR}")
  # If the user defines MRPT_DIR, that path overrides whatever CMake on its own
  # found (this file):
  get_filename_component(this_dir "${CMAKE_CURRENT_LIST_DIR}" ABSOLUTE)
  get_filename_component(user_mrpt_dir "${MRPT_DIR}" ABSOLUTE)
  if ((EXISTS "${MRPT_DIR}/mrpt-hwdrivers-config.cmake") AND (NOT "${this_dir}" STREQUAL "${user_mrpt_dir}"))
    message("mrpt-hwdrivers_DIR was: ${mrpt-hwdrivers_DIR}")
    set(mrpt-hwdrivers_DIR "${MRPT_DIR}" CACHE PATH "Path to mrpt-hwdrivers" FORCE)
    include(${MRPT_DIR}/mrpt-hwdrivers-config.cmake)
    return()
  endif()
endif()
# 2) The current (and parent) path:
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_LIST_DIR}")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_LIST_DIR}/../")
list(REMOVE_DUPLICATES CMAKE_PREFIX_PATH)

# Search for dependencies first:
set(_deps "mrpt-comms;mrpt-maps;mrpt-gui;mrpt-vision")
foreach(_dep ${_deps}) # NO quotes for the list to be a CMake list!
  find_dependency(${_dep})
  if(${_dep}_FOUND)
    mark_as_advanced(${_dep}_DIR)
  endif()
endforeach()


# Include targets for this library:
include(${CMAKE_CURRENT_LIST_DIR}/mrpt-hwdrivers-targets.cmake)
