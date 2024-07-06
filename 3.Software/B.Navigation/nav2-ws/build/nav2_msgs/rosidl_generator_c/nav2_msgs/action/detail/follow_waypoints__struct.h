// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Goal
{
  geometry_msgs__msg__PoseStamped__Sequence poses;
} nav2_msgs__action__FollowWaypoints_Goal;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Goal.
typedef struct nav2_msgs__action__FollowWaypoints_Goal__Sequence
{
  nav2_msgs__action__FollowWaypoints_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'missed_waypoints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Result
{
  rosidl_runtime_c__int32__Sequence missed_waypoints;
} nav2_msgs__action__FollowWaypoints_Result;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Result.
typedef struct nav2_msgs__action__FollowWaypoints_Result__Sequence
{
  nav2_msgs__action__FollowWaypoints_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Feedback
{
  uint32_t current_waypoint;
} nav2_msgs__action__FollowWaypoints_Feedback;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Feedback.
typedef struct nav2_msgs__action__FollowWaypoints_Feedback__Sequence
{
  nav2_msgs__action__FollowWaypoints_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowWaypoints_Goal goal;
} nav2_msgs__action__FollowWaypoints_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_SendGoal_Request.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Request__Sequence
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__FollowWaypoints_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_SendGoal_Response.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Response__Sequence
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__FollowWaypoints_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_GetResult_Request.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Request__Sequence
{
  nav2_msgs__action__FollowWaypoints_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__FollowWaypoints_Result result;
} nav2_msgs__action__FollowWaypoints_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_GetResult_Response.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Response__Sequence
{
  nav2_msgs__action__FollowWaypoints_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowWaypoints_Feedback feedback;
} nav2_msgs__action__FollowWaypoints_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_FeedbackMessage.
typedef struct nav2_msgs__action__FollowWaypoints_FeedbackMessage__Sequence
{
  nav2_msgs__action__FollowWaypoints_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_
