// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_2d_msgs:msg/Pose2D32.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_2d_msgs/msg/detail/pose2_d32__rosidl_typesupport_introspection_c.h"
#include "nav_2d_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_2d_msgs/msg/detail/pose2_d32__functions.h"
#include "nav_2d_msgs/msg/detail/pose2_d32__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_2d_msgs__msg__Pose2D32__init(message_memory);
}

void nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_fini_function(void * message_memory)
{
  nav_2d_msgs__msg__Pose2D32__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs__msg__Pose2D32, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs__msg__Pose2D32, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs__msg__Pose2D32, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_members = {
  "nav_2d_msgs__msg",  // message namespace
  "Pose2D32",  // message name
  3,  // number of fields
  sizeof(nav_2d_msgs__msg__Pose2D32),
  nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_member_array,  // message members
  nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_init_function,  // function to initialize message memory (memory has to be allocated)
  nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_type_support_handle = {
  0,
  &nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_2d_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Pose2D32)() {
  if (!nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_type_support_handle.typesupport_identifier) {
    nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav_2d_msgs__msg__Pose2D32__rosidl_typesupport_introspection_c__Pose2D32_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
