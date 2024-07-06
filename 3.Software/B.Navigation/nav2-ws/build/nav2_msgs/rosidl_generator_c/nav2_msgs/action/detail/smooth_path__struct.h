// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/SmoothPath.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'smoother_id'
#include "rosidl_runtime_c/string.h"
// Member 'max_smoothing_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Goal
{
  nav_msgs__msg__Path path;
  rosidl_runtime_c__String smoother_id;
  builtin_interfaces__msg__Duration max_smoothing_duration;
  bool check_for_collisions;
} nav2_msgs__action__SmoothPath_Goal;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Goal.
typedef struct nav2_msgs__action__SmoothPath_Goal__Sequence
{
  nav2_msgs__action__SmoothPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
// already included above
// #include "nav_msgs/msg/detail/path__struct.h"
// Member 'smoothing_duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Result
{
  nav_msgs__msg__Path path;
  builtin_interfaces__msg__Duration smoothing_duration;
  bool was_completed;
} nav2_msgs__action__SmoothPath_Result;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Result.
typedef struct nav2_msgs__action__SmoothPath_Result__Sequence
{
  nav2_msgs__action__SmoothPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__SmoothPath_Feedback;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Feedback.
typedef struct nav2_msgs__action__SmoothPath_Feedback__Sequence
{
  nav2_msgs__action__SmoothPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__SmoothPath_Goal goal;
} nav2_msgs__action__SmoothPath_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__SmoothPath_SendGoal_Request.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Request__Sequence
{
  nav2_msgs__action__SmoothPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__SmoothPath_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__SmoothPath_SendGoal_Response.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Response__Sequence
{
  nav2_msgs__action__SmoothPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__SmoothPath_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__SmoothPath_GetResult_Request.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Request__Sequence
{
  nav2_msgs__action__SmoothPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__SmoothPath_Result result;
} nav2_msgs__action__SmoothPath_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__SmoothPath_GetResult_Response.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Response__Sequence
{
  nav2_msgs__action__SmoothPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__SmoothPath_Feedback feedback;
} nav2_msgs__action__SmoothPath_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__SmoothPath_FeedbackMessage.
typedef struct nav2_msgs__action__SmoothPath_FeedbackMessage__Sequence
{
  nav2_msgs__action__SmoothPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_
