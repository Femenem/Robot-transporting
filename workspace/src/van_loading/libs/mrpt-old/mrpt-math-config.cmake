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
  if ((EXISTS "${MRPT_DIR}/mrpt-math-config.cmake") AND (NOT "${this_dir}" STREQUAL "${user_mrpt_dir}"))
    message("mrpt-math_DIR was: ${mrpt-math_DIR}")
    set(mrpt-math_DIR "${MRPT_DIR}" CACHE PATH "Path to mrpt-math" FORCE)
    include(${MRPT_DIR}/mrpt-math-config.cmake)
    return()
  endif()
endif()
# 2) The current (and parent) path:
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_LIST_DIR}")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_LIST_DIR}/../")
list(REMOVE_DUPLICATES CMAKE_PREFIX_PATH)

# Search for dependencies first:
set(_deps "mrpt-core;mrpt-containers;mrpt-typemeta;mrpt-serialization;mrpt-random;mrpt-system;mrpt-nanoflann;Eigen3")
foreach(_dep ${_deps}) # NO quotes for the list to be a CMake list!
  find_dependency(${_dep})
  if(${_dep}_FOUND)
    mark_as_advanced(${_dep}_DIR)
  endif()
endforeach()
if (NOT TARGET Eigen3::Eigen)
	add_library(Eigen3::Eigen INTERFACE IMPORTED GLOBAL)
	if (TARGET Eigen)
		target_link_libraries(Eigen3::Eigen INTERFACE Eigen)
	else()
		if(EXISTS "/usr/include/eigen3")
			set(eigen_dirs /usr/include/eigen3)
		else()
			set(eigen_dirs )
		endif()
		set_target_properties(Eigen3::Eigen PROPERTIES
			INTERFACE_INCLUDE_DIRECTORIES
				$<BUILD_INTERFACE:${eigen_dirs}>
		)
	endif()
endif()


# Include targets for this library:
include(${CMAKE_CURRENT_LIST_DIR}/mrpt-math-targets.cmake)
