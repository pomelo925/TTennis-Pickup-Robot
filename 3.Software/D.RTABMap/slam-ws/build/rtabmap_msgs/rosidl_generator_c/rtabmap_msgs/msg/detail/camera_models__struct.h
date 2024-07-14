// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'models'
#include "rtabmap_msgs/msg/detail/camera_model__struct.h"

/// Struct defined in msg/CameraModels in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__CameraModels
{
  rtabmap_msgs__msg__CameraModel__Sequence models;
} rtabmap_msgs__msg__CameraModels;

// Struct for a sequence of rtabmap_msgs__msg__CameraModels.
typedef struct rtabmap_msgs__msg__CameraModels__Sequence
{
  rtabmap_msgs__msg__CameraModels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__CameraModels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_H_
