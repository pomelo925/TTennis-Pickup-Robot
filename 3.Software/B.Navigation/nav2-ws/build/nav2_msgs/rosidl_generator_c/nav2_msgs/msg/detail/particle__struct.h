// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Particle in the package nav2_msgs.
/**
  * This represents an individual particle with weight produced by a particle filter
 */
typedef struct nav2_msgs__msg__Particle
{
  geometry_msgs__msg__Pose pose;
  double weight;
} nav2_msgs__msg__Particle;

// Struct for a sequence of nav2_msgs__msg__Particle.
typedef struct nav2_msgs__msg__Particle__Sequence
{
  nav2_msgs__msg__Particle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__Particle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_
