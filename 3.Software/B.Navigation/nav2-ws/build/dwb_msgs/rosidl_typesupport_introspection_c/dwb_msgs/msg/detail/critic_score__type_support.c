// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/msg/detail/critic_score__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/msg/detail/critic_score__functions.h"
#include "dwb_msgs/msg/detail/critic_score__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__msg__CriticScore__init(message_memory);
}

void dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_fini_function(void * message_memory)
{
  dwb_msgs__msg__CriticScore__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__CriticScore, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__CriticScore, raw_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__CriticScore, scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_members = {
  "dwb_msgs__msg",  // message namespace
  "CriticScore",  // message name
  3,  // number of fields
  sizeof(dwb_msgs__msg__CriticScore),
  dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_member_array,  // message members
  dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_init_function,  // function to initialize message memory (memory has to be allocated)
  dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_type_support_handle = {
  0,
  &dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, CriticScore)() {
  if (!dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_type_support_handle.typesupport_identifier) {
    dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dwb_msgs__msg__CriticScore__rosidl_typesupport_introspection_c__CriticScore_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
