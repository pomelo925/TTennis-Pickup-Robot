// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
// Member 'scores'
#include "dwb_msgs/msg/detail/critic_score__struct.h"

/// Struct defined in msg/TrajectoryScore in the package dwb_msgs.
/**
  * Complete scoring for a given twist.
 */
typedef struct dwb_msgs__msg__TrajectoryScore
{
  /// The trajectory being scored
  dwb_msgs__msg__Trajectory2D traj;
  /// The Scores for each of the critics employed
  dwb_msgs__msg__CriticScore__Sequence scores;
  /// Convenience member that totals the critic scores
  float total;
} dwb_msgs__msg__TrajectoryScore;

// Struct for a sequence of dwb_msgs__msg__TrajectoryScore.
typedef struct dwb_msgs__msg__TrajectoryScore__Sequence
{
  dwb_msgs__msg__TrajectoryScore * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__msg__TrajectoryScore__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_
