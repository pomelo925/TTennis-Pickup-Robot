// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/node__functions.h"
#include "rtabmap_msgs/msg/detail/node__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `word_id_keys`
// Member `word_id_values`
// Member `word_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/key_point.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `word_pts`
#include "rtabmap_msgs/msg/point3f.h"
// Member `word_pts`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rtabmap_msgs/msg/sensor_data.h"
// Member `data`
#include "rtabmap_msgs/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__Node__init(message_memory);
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__Node__fini(message_memory);
}

size_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_id_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_id_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_id_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_id_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_id_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_id_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_id_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_id_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_kpts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_kpts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_kpts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_kpts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__KeyPoint * item =
    ((const rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_kpts(untyped_member, index));
  rtabmap_msgs__msg__KeyPoint * value =
    (rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_kpts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__KeyPoint * item =
    ((rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_kpts(untyped_member, index));
  const rtabmap_msgs__msg__KeyPoint * value =
    (const rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_kpts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_pts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_pts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_pts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Point3f * item =
    ((const rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_pts(untyped_member, index));
  rtabmap_msgs__msg__Point3f * value =
    (rtabmap_msgs__msg__Point3f *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Point3f * item =
    ((rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_pts(untyped_member, index));
  const rtabmap_msgs__msg__Point3f * value =
    (const rtabmap_msgs__msg__Point3f *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_pts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_descriptors(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_descriptors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_descriptors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_descriptors(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_descriptors(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_descriptors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[12] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_id_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_id_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_id_keys,  // size() function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_id_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_id_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_id_keys  // resize(index) function pointer
  },
  {
    "word_id_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_id_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_id_values,  // size() function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_id_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_id_values,  // get(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_id_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_id_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_id_values  // resize(index) function pointer
  },
  {
    "word_kpts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_kpts),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_kpts,  // size() function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_kpts,  // get_const(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_kpts,  // get(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_kpts,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_kpts,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_kpts  // resize(index) function pointer
  },
  {
    "word_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_pts),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_pts,  // size() function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_pts,  // get_const(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_pts,  // get(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_pts,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_pts,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_pts  // resize(index) function pointer
  },
  {
    "word_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_descriptors),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__word_descriptors,  // size() function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__word_descriptors,  // get_const(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__word_descriptors,  // get(index) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__word_descriptors,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__word_descriptors,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__word_descriptors  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "Node",  // message name
  12,  // number of fields
  sizeof(rtabmap_msgs__msg__Node),
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Node)() {
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, SensorData)();
  if (!rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
