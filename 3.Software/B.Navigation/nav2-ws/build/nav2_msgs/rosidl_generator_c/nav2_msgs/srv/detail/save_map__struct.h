// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SAVE_MAP__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__SAVE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_topic'
// Member 'map_url'
// Member 'image_format'
// Member 'map_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveMap in the package nav2_msgs.
typedef struct nav2_msgs__srv__SaveMap_Request
{
  rosidl_runtime_c__String map_topic;
  rosidl_runtime_c__String map_url;
  /// Constants for image_format. Supported formats: pgm, png, bmp
  rosidl_runtime_c__String image_format;
  /// Map modes: trinary, scale or raw
  rosidl_runtime_c__String map_mode;
  /// Thresholds. Values in range of
  float free_thresh;
  float occupied_thresh;
} nav2_msgs__srv__SaveMap_Request;

// Struct for a sequence of nav2_msgs__srv__SaveMap_Request.
typedef struct nav2_msgs__srv__SaveMap_Request__Sequence
{
  nav2_msgs__srv__SaveMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__SaveMap_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaveMap in the package nav2_msgs.
typedef struct nav2_msgs__srv__SaveMap_Response
{
  bool result;
} nav2_msgs__srv__SaveMap_Response;

// Struct for a sequence of nav2_msgs__srv__SaveMap_Response.
typedef struct nav2_msgs__srv__SaveMap_Response__Sequence
{
  nav2_msgs__srv__SaveMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__SaveMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__SAVE_MAP__STRUCT_H_
