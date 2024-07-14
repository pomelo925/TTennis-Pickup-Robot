// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pt'
#include "rtabmap_msgs/msg/detail/point2f__struct.h"

/// Struct defined in msg/KeyPoint in the package rtabmap_msgs.
/**
  * class cv::KeyPoint
  * {
  *     Point2f pt;
  *     float size;
  *     float angle;
  *     float response;
  *     int octave;
  *     int class_id;
  * }
 */
typedef struct rtabmap_msgs__msg__KeyPoint
{
  rtabmap_msgs__msg__Point2f pt;
  float size;
  float angle;
  float response;
  int32_t octave;
  int32_t class_id;
} rtabmap_msgs__msg__KeyPoint;

// Struct for a sequence of rtabmap_msgs__msg__KeyPoint.
typedef struct rtabmap_msgs__msg__KeyPoint__Sequence
{
  rtabmap_msgs__msg__KeyPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__KeyPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_
