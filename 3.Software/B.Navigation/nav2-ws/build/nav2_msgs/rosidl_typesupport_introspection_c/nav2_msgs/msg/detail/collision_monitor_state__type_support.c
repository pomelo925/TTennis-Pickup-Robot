// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/collision_monitor_state__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/collision_monitor_state__functions.h"
#include "nav2_msgs/msg/detail/collision_monitor_state__struct.h"


// Include directives for member types
// Member `polygon_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__CollisionMonitorState__init(message_memory);
}

void nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_fini_function(void * message_memory)
{
  nav2_msgs__msg__CollisionMonitorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_member_array[2] = {
  {
    "action_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CollisionMonitorState, action_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CollisionMonitorState, polygon_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_members = {
  "nav2_msgs__msg",  // message namespace
  "CollisionMonitorState",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__msg__CollisionMonitorState),
  nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_member_array,  // message members
  nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_type_support_handle = {
  0,
  &nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, CollisionMonitorState)() {
  if (!nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__CollisionMonitorState__rosidl_typesupport_introspection_c__CollisionMonitorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
