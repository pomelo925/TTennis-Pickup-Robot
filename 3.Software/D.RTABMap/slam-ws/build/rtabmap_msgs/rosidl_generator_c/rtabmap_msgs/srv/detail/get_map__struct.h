// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetMap in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetMap_Request
{
  bool global_map;
  bool optimized;
  bool graph_only;
} rtabmap_msgs__srv__GetMap_Request;

// Struct for a sequence of rtabmap_msgs__srv__GetMap_Request.
typedef struct rtabmap_msgs__srv__GetMap_Request__Sequence
{
  rtabmap_msgs__srv__GetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rtabmap_msgs/msg/detail/map_data__struct.h"

/// Struct defined in srv/GetMap in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetMap_Response
{
  rtabmap_msgs__msg__MapData data;
} rtabmap_msgs__srv__GetMap_Response;

// Struct for a sequence of rtabmap_msgs__srv__GetMap_Response.
typedef struct rtabmap_msgs__srv__GetMap_Response__Sequence
{
  rtabmap_msgs__srv__GetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
