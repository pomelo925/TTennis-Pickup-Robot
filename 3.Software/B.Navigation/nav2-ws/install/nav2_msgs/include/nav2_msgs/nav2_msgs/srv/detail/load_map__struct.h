// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package nav2_msgs.
typedef struct nav2_msgs__srv__LoadMap_Request
{
  rosidl_runtime_c__String map_url;
} nav2_msgs__srv__LoadMap_Request;

// Struct for a sequence of nav2_msgs__srv__LoadMap_Request.
typedef struct nav2_msgs__srv__LoadMap_Request__Sequence
{
  nav2_msgs__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__LoadMap_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  nav2_msgs__srv__LoadMap_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_MAP_DOES_NOT_EXIST'.
enum
{
  nav2_msgs__srv__LoadMap_Response__RESULT_MAP_DOES_NOT_EXIST = 1
};

/// Constant 'RESULT_INVALID_MAP_DATA'.
enum
{
  nav2_msgs__srv__LoadMap_Response__RESULT_INVALID_MAP_DATA = 2
};

/// Constant 'RESULT_INVALID_MAP_METADATA'.
enum
{
  nav2_msgs__srv__LoadMap_Response__RESULT_INVALID_MAP_METADATA = 3
};

/// Constant 'RESULT_UNDEFINED_FAILURE'.
enum
{
  nav2_msgs__srv__LoadMap_Response__RESULT_UNDEFINED_FAILURE = 255
};

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/LoadMap in the package nav2_msgs.
typedef struct nav2_msgs__srv__LoadMap_Response
{
  /// Returned map is only valid if result equals RESULT_SUCCESS
  nav_msgs__msg__OccupancyGrid map;
  uint8_t result;
} nav2_msgs__srv__LoadMap_Response;

// Struct for a sequence of nav2_msgs__srv__LoadMap_Response.
typedef struct nav2_msgs__srv__LoadMap_Response__Sequence
{
  nav2_msgs__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__LoadMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
