// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/MapGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/map_graph__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/map_graph__functions.h"
#include "rtabmap_msgs/msg/detail/map_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/transform.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `poses_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "rtabmap_msgs/msg/link.h"
// Member `links`
#include "rtabmap_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__MapGraph__init(message_memory);
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__MapGraph__fini(message_memory);
}

size_t rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__links(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Link__Sequence * member =
    (const rtabmap_msgs__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Link__Sequence * member =
    (const rtabmap_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Link__Sequence * member =
    (rtabmap_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Link * item =
    ((const rtabmap_msgs__msg__Link *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links(untyped_member, index));
  rtabmap_msgs__msg__Link * value =
    (rtabmap_msgs__msg__Link *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Link * item =
    ((rtabmap_msgs__msg__Link *)
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links(untyped_member, index));
  const rtabmap_msgs__msg__Link * value =
    (const rtabmap_msgs__msg__Link *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__links(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Link__Sequence * member =
    (rtabmap_msgs__msg__Link__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Link__Sequence__fini(member);
  return rtabmap_msgs__msg__Link__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__MapGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_to_odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__MapGraph, map_to_odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__MapGraph, poses_id),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses_id,  // size() function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id,  // get_const(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id,  // get(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses_id,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses_id,  // assign(index, value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses_id  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__MapGraph, poses),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses,  // size() function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses,  // get_const(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses,  // get(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses,  // assign(index, value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__MapGraph, links),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__links,  // size() function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links,  // get_const(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links,  // get(index) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__links,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__links,  // assign(index, value) function pointer
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__links  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "MapGraph",  // message name
  5,  // number of fields
  sizeof(rtabmap_msgs__msg__MapGraph),
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array,  // message members
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, MapGraph)() {
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Link)();
  if (!rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
