// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/ParticleCloud.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_H_

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
// Member 'particles'
#include "nav2_msgs/msg/detail/particle__struct.h"

/// Struct defined in msg/ParticleCloud in the package nav2_msgs.
/**
  * This represents a particle cloud containing particle poses and weights
 */
typedef struct nav2_msgs__msg__ParticleCloud
{
  std_msgs__msg__Header header;
  /// Array of particles in the cloud
  nav2_msgs__msg__Particle__Sequence particles;
} nav2_msgs__msg__ParticleCloud;

// Struct for a sequence of nav2_msgs__msg__ParticleCloud.
typedef struct nav2_msgs__msg__ParticleCloud__Sequence
{
  nav2_msgs__msg__ParticleCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__ParticleCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_H_
