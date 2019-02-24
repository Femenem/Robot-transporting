# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "double_ackermann: 1 messages, 0 services")

set(MSG_I_FLAGS "-Idouble_ackermann:/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(double_ackermann_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_custom_target(_double_ackermann_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "double_ackermann" "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(double_ackermann
  "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/double_ackermann
)

### Generating Services

### Generating Module File
_generate_module_cpp(double_ackermann
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/double_ackermann
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(double_ackermann_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(double_ackermann_generate_messages double_ackermann_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_dependencies(double_ackermann_generate_messages_cpp _double_ackermann_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(double_ackermann_gencpp)
add_dependencies(double_ackermann_gencpp double_ackermann_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS double_ackermann_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(double_ackermann
  "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/double_ackermann
)

### Generating Services

### Generating Module File
_generate_module_eus(double_ackermann
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/double_ackermann
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(double_ackermann_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(double_ackermann_generate_messages double_ackermann_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_dependencies(double_ackermann_generate_messages_eus _double_ackermann_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(double_ackermann_geneus)
add_dependencies(double_ackermann_geneus double_ackermann_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS double_ackermann_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(double_ackermann
  "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/double_ackermann
)

### Generating Services

### Generating Module File
_generate_module_lisp(double_ackermann
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/double_ackermann
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(double_ackermann_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(double_ackermann_generate_messages double_ackermann_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_dependencies(double_ackermann_generate_messages_lisp _double_ackermann_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(double_ackermann_genlisp)
add_dependencies(double_ackermann_genlisp double_ackermann_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS double_ackermann_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(double_ackermann
  "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/double_ackermann
)

### Generating Services

### Generating Module File
_generate_module_nodejs(double_ackermann
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/double_ackermann
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(double_ackermann_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(double_ackermann_generate_messages double_ackermann_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_dependencies(double_ackermann_generate_messages_nodejs _double_ackermann_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(double_ackermann_gennodejs)
add_dependencies(double_ackermann_gennodejs double_ackermann_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS double_ackermann_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(double_ackermann
  "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/double_ackermann
)

### Generating Services

### Generating Module File
_generate_module_py(double_ackermann
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/double_ackermann
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(double_ackermann_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(double_ackermann_generate_messages double_ackermann_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg/DoubleAckermann.msg" NAME_WE)
add_dependencies(double_ackermann_generate_messages_py _double_ackermann_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(double_ackermann_genpy)
add_dependencies(double_ackermann_genpy double_ackermann_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS double_ackermann_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/double_ackermann)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/double_ackermann
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(double_ackermann_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/double_ackermann)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/double_ackermann
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(double_ackermann_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/double_ackermann)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/double_ackermann
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(double_ackermann_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/double_ackermann)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/double_ackermann
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(double_ackermann_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/double_ackermann)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/double_ackermann\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/double_ackermann
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(double_ackermann_generate_messages_py std_msgs_generate_messages_py)
endif()
