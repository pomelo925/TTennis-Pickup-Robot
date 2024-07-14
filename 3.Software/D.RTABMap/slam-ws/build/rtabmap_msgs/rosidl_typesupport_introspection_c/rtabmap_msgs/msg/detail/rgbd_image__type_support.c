// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/rgbd_image__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/rgbd_image__functions.h"
#include "rtabmap_msgs/msg/detail/rgbd_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rgb_camera_info`
// Member `depth_camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `rgb_camera_info`
// Member `depth_camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/image.h"
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `rgb_compressed`
// Member `depth_compressed`
#include "sensor_msgs/msg/compressed_image.h"
// Member `rgb_compressed`
// Member `depth_compressed`
#include "sensor_msgs/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"
// Member `key_points`
#include "rtabmap_msgs/msg/key_point.h"
// Member `key_points`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "rtabmap_msgs/msg/point3f.h"
// Member `points`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `global_descriptor`
#include "rtabmap_msgs/msg/global_descriptor.h"
// Member `global_descriptor`
#include "rtabmap_msgs/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__RGBDImage__init(message_memory);
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__RGBDImage__fini(message_memory);
}

size_t rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__key_points(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__key_points(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__key_points(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__KeyPoint * item =
    ((const rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__key_points(untyped_member, index));
  rtabmap_msgs__msg__KeyPoint * value =
    (rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__KeyPoint * item =
    ((rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__key_points(untyped_member, index));
  const rtabmap_msgs__msg__KeyPoint * value =
    (const rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__key_points(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__points(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__points(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__points(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Point3f * item =
    ((const rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__points(untyped_member, index));
  rtabmap_msgs__msg__Point3f * value =
    (rtabmap_msgs__msg__Point3f *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Point3f * item =
    ((rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__points(untyped_member, index));
  const rtabmap_msgs__msg__Point3f * value =
    (const rtabmap_msgs__msg__Point3f *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__points(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__descriptors(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__descriptors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__descriptors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__descriptors(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__descriptors(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__descriptors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, rgb_camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, depth_camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, rgb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, rgb_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, depth_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, key_points),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__key_points,  // size() function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__key_points,  // get_const(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__key_points,  // get(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__key_points,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__key_points,  // assign(index, value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__key_points  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, points),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__points,  // size() function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__points,  // get_const(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__points,  // get(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__points,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__points,  // assign(index, value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__points  // resize(index) function pointer
  },
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, descriptors),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__size_function__RGBDImage__descriptors,  // size() function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__descriptors,  // get_const(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__get_function__RGBDImage__descriptors,  // get(index) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__fetch_function__RGBDImage__descriptors,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__assign_function__RGBDImage__descriptors,  // assign(index, value) function pointer
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__resize_function__RGBDImage__descriptors  // resize(index) function pointer
  },
  {
    "global_descriptor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__RGBDImage, global_descriptor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "RGBDImage",  // message name
  11,  // number of fields
  sizeof(rtabmap_msgs__msg__RGBDImage),
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array,  // message members
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, RGBDImage)() {
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GlobalDescriptor)();
  if (!rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
