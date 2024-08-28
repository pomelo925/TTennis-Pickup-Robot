// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/costmap_meta_data__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.h"


// Include directives for member types
// Member `map_load_time`
// Member `update_time`
#include "builtin_interfaces/msg/time.h"
// Member `map_load_time`
// Member `update_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `layer`
#include "rosidl_runtime_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/pose.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__CostmapMetaData__init(message_memory);
}

void nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_fini_function(void * message_memory)
{
  nav2_msgs__msg__CostmapMetaData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_member_array[7] = {
  {
    "map_load_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, map_load_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, update_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, layer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, size_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, size_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CostmapMetaData, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_members = {
  "nav2_msgs__msg",  // message namespace
  "CostmapMetaData",  // message name
  7,  // number of fields
  sizeof(nav2_msgs__msg__CostmapMetaData),
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_member_array,  // message members
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_type_support_handle = {
  0,
  &nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, CostmapMetaData)() {
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__CostmapMetaData__rosidl_typesupport_introspection_c__CostmapMetaData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
