# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "van_loading: 1 messages, 0 services")

set(MSG_I_FLAGS "-Ivan_loading:/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Idouble_ackermann:/home/matt/Documents/Robot-transporting/workspace/src/double_ackermann/trunk/msg;-Ivan_loading:/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(van_loading_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_custom_target(_van_loading_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "van_loading" "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(van_loading
  "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/van_loading
)

### Generating Services

### Generating Module File
_generate_module_cpp(van_loading
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/van_loading
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(van_loading_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(van_loading_generate_messages van_loading_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_dependencies(van_loading_generate_messages_cpp _van_loading_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(van_loading_gencpp)
add_dependencies(van_loading_gencpp van_loading_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS van_loading_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(van_loading
  "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/van_loading
)

### Generating Services

### Generating Module File
_generate_module_eus(van_loading
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/van_loading
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(van_loading_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(van_loading_generate_messages van_loading_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_dependencies(van_loading_generate_messages_eus _van_loading_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(van_loading_geneus)
add_dependencies(van_loading_geneus van_loading_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS van_loading_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(van_loading
  "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/van_loading
)

### Generating Services

### Generating Module File
_generate_module_lisp(van_loading
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/van_loading
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(van_loading_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(van_loading_generate_messages van_loading_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_dependencies(van_loading_generate_messages_lisp _van_loading_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(van_loading_genlisp)
add_dependencies(van_loading_genlisp van_loading_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS van_loading_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(van_loading
  "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/van_loading
)

### Generating Services

### Generating Module File
_generate_module_nodejs(van_loading
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/van_loading
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(van_loading_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(van_loading_generate_messages van_loading_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_dependencies(van_loading_generate_messages_nodejs _van_loading_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(van_loading_gennodejs)
add_dependencies(van_loading_gennodejs van_loading_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS van_loading_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(van_loading
  "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/van_loading
)

### Generating Services

### Generating Module File
_generate_module_py(van_loading
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/van_loading
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(van_loading_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(van_loading_generate_messages van_loading_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/matt/Documents/Robot-transporting/workspace/src/van_loading/msg/ICPDirection.msg" NAME_WE)
add_dependencies(van_loading_generate_messages_py _van_loading_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(van_loading_genpy)
add_dependencies(van_loading_genpy van_loading_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS van_loading_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/van_loading)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/van_loading
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(van_loading_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET double_ackermann_generate_messages_cpp)
  add_dependencies(van_loading_generate_messages_cpp double_ackermann_generate_messages_cpp)
endif()
if(TARGET van_loading_generate_messages_cpp)
  add_dependencies(van_loading_generate_messages_cpp van_loading_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/van_loading)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/van_loading
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(van_loading_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET double_ackermann_generate_messages_eus)
  add_dependencies(van_loading_generate_messages_eus double_ackermann_generate_messages_eus)
endif()
if(TARGET van_loading_generate_messages_eus)
  add_dependencies(van_loading_generate_messages_eus van_loading_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/van_loading)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/van_loading
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(van_loading_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET double_ackermann_generate_messages_lisp)
  add_dependencies(van_loading_generate_messages_lisp double_ackermann_generate_messages_lisp)
endif()
if(TARGET van_loading_generate_messages_lisp)
  add_dependencies(van_loading_generate_messages_lisp van_loading_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/van_loading)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/van_loading
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(van_loading_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET double_ackermann_generate_messages_nodejs)
  add_dependencies(van_loading_generate_messages_nodejs double_ackermann_generate_messages_nodejs)
endif()
if(TARGET van_loading_generate_messages_nodejs)
  add_dependencies(van_loading_generate_messages_nodejs van_loading_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/van_loading)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/van_loading\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/van_loading
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(van_loading_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET double_ackermann_generate_messages_py)
  add_dependencies(van_loading_generate_messages_py double_ackermann_generate_messages_py)
endif()
if(TARGET van_loading_generate_messages_py)
  add_dependencies(van_loading_generate_messages_py van_loading_generate_messages_py)
endif()
