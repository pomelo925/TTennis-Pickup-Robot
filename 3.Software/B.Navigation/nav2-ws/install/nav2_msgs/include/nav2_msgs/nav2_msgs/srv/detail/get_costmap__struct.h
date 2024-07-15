// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'specs'
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.h"

/// Struct defined in srv/GetCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCostmap_Request
{
  /// Specifications for the requested costmap
  nav2_msgs__msg__CostmapMetaData specs;
} nav2_msgs__srv__GetCostmap_Request;

// Struct for a sequence of nav2_msgs__srv__GetCostmap_Request.
typedef struct nav2_msgs__srv__GetCostmap_Request__Sequence
{
  nav2_msgs__srv__GetCostmap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCostmap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "nav2_msgs/msg/detail/costmap__struct.h"

/// Struct defined in srv/GetCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCostmap_Response
{
  nav2_msgs__msg__Costmap map;
} nav2_msgs__srv__GetCostmap_Response;

// Struct for a sequence of nav2_msgs__srv__GetCostmap_Response.
typedef struct nav2_msgs__srv__GetCostmap_Response__Sequence
{
  nav2_msgs__srv__GetCostmap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCostmap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_
