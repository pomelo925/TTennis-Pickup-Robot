// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GPS in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__GPS
{
  /// in seconds
  double stamp;
  /// DD format
  double longitude;
  /// DD format
  double latitude;
  /// in meters
  double altitude;
  /// in meters
  double error;
  /// North 0->360 deg
  double bearing;
} rtabmap_msgs__msg__GPS;

// Struct for a sequence of rtabmap_msgs__msg__GPS.
typedef struct rtabmap_msgs__msg__GPS__Sequence
{
  rtabmap_msgs__msg__GPS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__GPS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_H_
