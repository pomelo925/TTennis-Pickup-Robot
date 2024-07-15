// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ClearCostmapAroundRobot in the package nav2_msgs.
typedef struct nav2_msgs__srv__ClearCostmapAroundRobot_Request
{
  float reset_distance;
} nav2_msgs__srv__ClearCostmapAroundRobot_Request;

// Struct for a sequence of nav2_msgs__srv__ClearCostmapAroundRobot_Request.
typedef struct nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence
{
  nav2_msgs__srv__ClearCostmapAroundRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/ClearCostmapAroundRobot in the package nav2_msgs.
typedef struct nav2_msgs__srv__ClearCostmapAroundRobot_Response
{
  std_msgs__msg__Empty response;
} nav2_msgs__srv__ClearCostmapAroundRobot_Response;

// Struct for a sequence of nav2_msgs__srv__ClearCostmapAroundRobot_Response.
typedef struct nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence
{
  nav2_msgs__srv__ClearCostmapAroundRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__STRUCT_H_
