// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/Point2f.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__POINT2F__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__POINT2F__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2f in the package rtabmap_msgs.
/**
  * class cv::Point2f
  * {
  *     float x;
  *     float y;
  * }
 */
typedef struct rtabmap_msgs__msg__Point2f
{
  float x;
  float y;
} rtabmap_msgs__msg__Point2f;

// Struct for a sequence of rtabmap_msgs__msg__Point2f.
typedef struct rtabmap_msgs__msg__Point2f__Sequence
{
  rtabmap_msgs__msg__Point2f * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__Point2f__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__POINT2F__STRUCT_H_
