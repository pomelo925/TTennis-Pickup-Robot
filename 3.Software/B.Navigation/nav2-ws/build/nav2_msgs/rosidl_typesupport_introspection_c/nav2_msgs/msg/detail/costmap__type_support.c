// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/costmap__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/costmap__functions.h"
#include "nav2_msgs/msg/detail/costmap__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `metadata`
#include "nav2_msgs/msg/costmap_meta_data.h"
// Member `metadata`
#include "nav2_msgs/msg/detail/costmap_meta_data__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__Costmap__init(message_memory);
}

void nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_fini_function(void * message_memory)
{
  nav2_msgs__msg__Costmap__fini(message_memory);
}

size_t nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__Costmap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__Costmap, metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__Costmap, data),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__data,  // size() function pointer
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__data,  // get_const(index) function pointer
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__data,  // get(index) function pointer
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__data,  // fetch(index, &value) function pointer
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__data,  // assign(index, value) function pointer
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_members = {
  "nav2_msgs__msg",  // message namespace
  "Costmap",  // message name
  3,  // number of fields
  sizeof(nav2_msgs__msg__Costmap),
  nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array,  // message members
  nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle = {
  0,
  &nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, Costmap)() {
  nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, CostmapMetaData)();
  if (!nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
