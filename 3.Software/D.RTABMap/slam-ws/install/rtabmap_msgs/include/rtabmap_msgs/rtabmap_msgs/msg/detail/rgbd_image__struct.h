// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rgb_camera_info'
// Member 'depth_camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'rgb_compressed'
// Member 'depth_compressed'
#include "sensor_msgs/msg/detail/compressed_image__struct.h"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__struct.h"
// Member 'descriptors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.h"

/// Struct defined in msg/RGBDImage in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__RGBDImage
{
  std_msgs__msg__Header header;
  /// For stereo, rgb corresponds to left camera, and depth the right camera.
  /// camera info
  sensor_msgs__msg__CameraInfo rgb_camera_info;
  sensor_msgs__msg__CameraInfo depth_camera_info;
  /// Raw
  sensor_msgs__msg__Image rgb;
  sensor_msgs__msg__Image depth;
  /// Compressed
  sensor_msgs__msg__CompressedImage rgb_compressed;
  sensor_msgs__msg__CompressedImage depth_compressed;
  /// Local features
  rtabmap_msgs__msg__KeyPoint__Sequence key_points;
  rtabmap_msgs__msg__Point3f__Sequence points;
  /// compressed descriptors
  /// use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
  rosidl_runtime_c__uint8__Sequence descriptors;
  rtabmap_msgs__msg__GlobalDescriptor global_descriptor;
} rtabmap_msgs__msg__RGBDImage;

// Struct for a sequence of rtabmap_msgs__msg__RGBDImage.
typedef struct rtabmap_msgs__msg__RGBDImage__Sequence
{
  rtabmap_msgs__msg__RGBDImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__RGBDImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__STRUCT_H_
