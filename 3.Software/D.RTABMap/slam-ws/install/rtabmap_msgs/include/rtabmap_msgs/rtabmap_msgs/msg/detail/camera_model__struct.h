// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'local_transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/CameraModel in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__CameraModel
{
  sensor_msgs__msg__CameraInfo camera_info;
  geometry_msgs__msg__Transform local_transform;
} rtabmap_msgs__msg__CameraModel;

// Struct for a sequence of rtabmap_msgs__msg__CameraModel.
typedef struct rtabmap_msgs__msg__CameraModel__Sequence
{
  rtabmap_msgs__msg__CameraModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__CameraModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_H_
