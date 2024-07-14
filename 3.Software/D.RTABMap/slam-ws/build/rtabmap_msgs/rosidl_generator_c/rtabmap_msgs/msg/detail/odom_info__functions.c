// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/odom_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `local_bundle_ids`
// Member `words_keys`
// Member `word_matches`
// Member `word_inliers`
// Member `local_map_keys`
// Member `corner_inliers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_bundle_models`
#include "rtabmap_msgs/msg/detail/camera_models__functions.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `words_values`
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
// Member `local_map_values`
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_msgs/msg/detail/point2f__functions.h"

bool
rtabmap_msgs__msg__OdomInfo__init(rtabmap_msgs__msg__OdomInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // lost
  // matches
  // inliers
  // icp_inliers_ratio
  // icp_rotation
  // icp_translation
  // icp_structural_complexity
  // icp_structural_distribution
  // icp_correspondences
  // covariance
  // features
  // local_map_size
  // local_scan_map_size
  // local_key_frames
  // local_bundle_outliers
  // local_bundle_constraints
  // local_bundle_time
  // key_frame_added
  // time_estimation
  // time_particle_filtering
  // stamp
  // interval
  // distance_travelled
  // memory_usage
  // gravity_roll_error
  // gravity_pitch_error
  // local_bundle_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_bundle_ids, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_bundle_models
  if (!rtabmap_msgs__msg__CameraModels__Sequence__init(&msg->local_bundle_models, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_bundle_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->local_bundle_poses, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform_filtered
  if (!geometry_msgs__msg__Transform__init(&msg->transform_filtered)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // transform_ground_truth
  if (!geometry_msgs__msg__Transform__init(&msg->transform_ground_truth)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // guess
  if (!geometry_msgs__msg__Transform__init(&msg->guess)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // type
  // words_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->words_keys, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // words_values
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&msg->words_values, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // word_matches
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_matches, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // word_inliers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_inliers, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_map_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_map_keys, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_map_values
  if (!rtabmap_msgs__msg__Point3f__Sequence__init(&msg->local_map_values, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // local_scan_map
  if (!sensor_msgs__msg__PointCloud2__init(&msg->local_scan_map)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // ref_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__init(&msg->ref_corners, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // new_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__init(&msg->new_corners, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // corner_inliers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->corner_inliers, 0)) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__OdomInfo__fini(rtabmap_msgs__msg__OdomInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lost
  // matches
  // inliers
  // icp_inliers_ratio
  // icp_rotation
  // icp_translation
  // icp_structural_complexity
  // icp_structural_distribution
  // icp_correspondences
  // covariance
  // features
  // local_map_size
  // local_scan_map_size
  // local_key_frames
  // local_bundle_outliers
  // local_bundle_constraints
  // local_bundle_time
  // key_frame_added
  // time_estimation
  // time_particle_filtering
  // stamp
  // interval
  // distance_travelled
  // memory_usage
  // gravity_roll_error
  // gravity_pitch_error
  // local_bundle_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_bundle_ids);
  // local_bundle_models
  rtabmap_msgs__msg__CameraModels__Sequence__fini(&msg->local_bundle_models);
  // local_bundle_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->local_bundle_poses);
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // transform_filtered
  geometry_msgs__msg__Transform__fini(&msg->transform_filtered);
  // transform_ground_truth
  geometry_msgs__msg__Transform__fini(&msg->transform_ground_truth);
  // guess
  geometry_msgs__msg__Transform__fini(&msg->guess);
  // type
  // words_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->words_keys);
  // words_values
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(&msg->words_values);
  // word_matches
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_matches);
  // word_inliers
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_inliers);
  // local_map_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_map_keys);
  // local_map_values
  rtabmap_msgs__msg__Point3f__Sequence__fini(&msg->local_map_values);
  // local_scan_map
  sensor_msgs__msg__PointCloud2__fini(&msg->local_scan_map);
  // ref_corners
  rtabmap_msgs__msg__Point2f__Sequence__fini(&msg->ref_corners);
  // new_corners
  rtabmap_msgs__msg__Point2f__Sequence__fini(&msg->new_corners);
  // corner_inliers
  rosidl_runtime_c__int32__Sequence__fini(&msg->corner_inliers);
}

bool
rtabmap_msgs__msg__OdomInfo__are_equal(const rtabmap_msgs__msg__OdomInfo * lhs, const rtabmap_msgs__msg__OdomInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // lost
  if (lhs->lost != rhs->lost) {
    return false;
  }
  // matches
  if (lhs->matches != rhs->matches) {
    return false;
  }
  // inliers
  if (lhs->inliers != rhs->inliers) {
    return false;
  }
  // icp_inliers_ratio
  if (lhs->icp_inliers_ratio != rhs->icp_inliers_ratio) {
    return false;
  }
  // icp_rotation
  if (lhs->icp_rotation != rhs->icp_rotation) {
    return false;
  }
  // icp_translation
  if (lhs->icp_translation != rhs->icp_translation) {
    return false;
  }
  // icp_structural_complexity
  if (lhs->icp_structural_complexity != rhs->icp_structural_complexity) {
    return false;
  }
  // icp_structural_distribution
  if (lhs->icp_structural_distribution != rhs->icp_structural_distribution) {
    return false;
  }
  // icp_correspondences
  if (lhs->icp_correspondences != rhs->icp_correspondences) {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  // features
  if (lhs->features != rhs->features) {
    return false;
  }
  // local_map_size
  if (lhs->local_map_size != rhs->local_map_size) {
    return false;
  }
  // local_scan_map_size
  if (lhs->local_scan_map_size != rhs->local_scan_map_size) {
    return false;
  }
  // local_key_frames
  if (lhs->local_key_frames != rhs->local_key_frames) {
    return false;
  }
  // local_bundle_outliers
  if (lhs->local_bundle_outliers != rhs->local_bundle_outliers) {
    return false;
  }
  // local_bundle_constraints
  if (lhs->local_bundle_constraints != rhs->local_bundle_constraints) {
    return false;
  }
  // local_bundle_time
  if (lhs->local_bundle_time != rhs->local_bundle_time) {
    return false;
  }
  // key_frame_added
  if (lhs->key_frame_added != rhs->key_frame_added) {
    return false;
  }
  // time_estimation
  if (lhs->time_estimation != rhs->time_estimation) {
    return false;
  }
  // time_particle_filtering
  if (lhs->time_particle_filtering != rhs->time_particle_filtering) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // interval
  if (lhs->interval != rhs->interval) {
    return false;
  }
  // distance_travelled
  if (lhs->distance_travelled != rhs->distance_travelled) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // gravity_roll_error
  if (lhs->gravity_roll_error != rhs->gravity_roll_error) {
    return false;
  }
  // gravity_pitch_error
  if (lhs->gravity_pitch_error != rhs->gravity_pitch_error) {
    return false;
  }
  // local_bundle_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->local_bundle_ids), &(rhs->local_bundle_ids)))
  {
    return false;
  }
  // local_bundle_models
  if (!rtabmap_msgs__msg__CameraModels__Sequence__are_equal(
      &(lhs->local_bundle_models), &(rhs->local_bundle_models)))
  {
    return false;
  }
  // local_bundle_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->local_bundle_poses), &(rhs->local_bundle_poses)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // transform_filtered
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform_filtered), &(rhs->transform_filtered)))
  {
    return false;
  }
  // transform_ground_truth
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform_ground_truth), &(rhs->transform_ground_truth)))
  {
    return false;
  }
  // guess
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->guess), &(rhs->guess)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // words_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->words_keys), &(rhs->words_keys)))
  {
    return false;
  }
  // words_values
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__are_equal(
      &(lhs->words_values), &(rhs->words_values)))
  {
    return false;
  }
  // word_matches
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_matches), &(rhs->word_matches)))
  {
    return false;
  }
  // word_inliers
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_inliers), &(rhs->word_inliers)))
  {
    return false;
  }
  // local_map_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->local_map_keys), &(rhs->local_map_keys)))
  {
    return false;
  }
  // local_map_values
  if (!rtabmap_msgs__msg__Point3f__Sequence__are_equal(
      &(lhs->local_map_values), &(rhs->local_map_values)))
  {
    return false;
  }
  // local_scan_map
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->local_scan_map), &(rhs->local_scan_map)))
  {
    return false;
  }
  // ref_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__are_equal(
      &(lhs->ref_corners), &(rhs->ref_corners)))
  {
    return false;
  }
  // new_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__are_equal(
      &(lhs->new_corners), &(rhs->new_corners)))
  {
    return false;
  }
  // corner_inliers
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->corner_inliers), &(rhs->corner_inliers)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__OdomInfo__copy(
  const rtabmap_msgs__msg__OdomInfo * input,
  rtabmap_msgs__msg__OdomInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // lost
  output->lost = input->lost;
  // matches
  output->matches = input->matches;
  // inliers
  output->inliers = input->inliers;
  // icp_inliers_ratio
  output->icp_inliers_ratio = input->icp_inliers_ratio;
  // icp_rotation
  output->icp_rotation = input->icp_rotation;
  // icp_translation
  output->icp_translation = input->icp_translation;
  // icp_structural_complexity
  output->icp_structural_complexity = input->icp_structural_complexity;
  // icp_structural_distribution
  output->icp_structural_distribution = input->icp_structural_distribution;
  // icp_correspondences
  output->icp_correspondences = input->icp_correspondences;
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  // features
  output->features = input->features;
  // local_map_size
  output->local_map_size = input->local_map_size;
  // local_scan_map_size
  output->local_scan_map_size = input->local_scan_map_size;
  // local_key_frames
  output->local_key_frames = input->local_key_frames;
  // local_bundle_outliers
  output->local_bundle_outliers = input->local_bundle_outliers;
  // local_bundle_constraints
  output->local_bundle_constraints = input->local_bundle_constraints;
  // local_bundle_time
  output->local_bundle_time = input->local_bundle_time;
  // key_frame_added
  output->key_frame_added = input->key_frame_added;
  // time_estimation
  output->time_estimation = input->time_estimation;
  // time_particle_filtering
  output->time_particle_filtering = input->time_particle_filtering;
  // stamp
  output->stamp = input->stamp;
  // interval
  output->interval = input->interval;
  // distance_travelled
  output->distance_travelled = input->distance_travelled;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // gravity_roll_error
  output->gravity_roll_error = input->gravity_roll_error;
  // gravity_pitch_error
  output->gravity_pitch_error = input->gravity_pitch_error;
  // local_bundle_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->local_bundle_ids), &(output->local_bundle_ids)))
  {
    return false;
  }
  // local_bundle_models
  if (!rtabmap_msgs__msg__CameraModels__Sequence__copy(
      &(input->local_bundle_models), &(output->local_bundle_models)))
  {
    return false;
  }
  // local_bundle_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->local_bundle_poses), &(output->local_bundle_poses)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // transform_filtered
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform_filtered), &(output->transform_filtered)))
  {
    return false;
  }
  // transform_ground_truth
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform_ground_truth), &(output->transform_ground_truth)))
  {
    return false;
  }
  // guess
  if (!geometry_msgs__msg__Transform__copy(
      &(input->guess), &(output->guess)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // words_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->words_keys), &(output->words_keys)))
  {
    return false;
  }
  // words_values
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__copy(
      &(input->words_values), &(output->words_values)))
  {
    return false;
  }
  // word_matches
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_matches), &(output->word_matches)))
  {
    return false;
  }
  // word_inliers
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_inliers), &(output->word_inliers)))
  {
    return false;
  }
  // local_map_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->local_map_keys), &(output->local_map_keys)))
  {
    return false;
  }
  // local_map_values
  if (!rtabmap_msgs__msg__Point3f__Sequence__copy(
      &(input->local_map_values), &(output->local_map_values)))
  {
    return false;
  }
  // local_scan_map
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->local_scan_map), &(output->local_scan_map)))
  {
    return false;
  }
  // ref_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__copy(
      &(input->ref_corners), &(output->ref_corners)))
  {
    return false;
  }
  // new_corners
  if (!rtabmap_msgs__msg__Point2f__Sequence__copy(
      &(input->new_corners), &(output->new_corners)))
  {
    return false;
  }
  // corner_inliers
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->corner_inliers), &(output->corner_inliers)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__OdomInfo *
rtabmap_msgs__msg__OdomInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__OdomInfo * msg = (rtabmap_msgs__msg__OdomInfo *)allocator.allocate(sizeof(rtabmap_msgs__msg__OdomInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__OdomInfo));
  bool success = rtabmap_msgs__msg__OdomInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__OdomInfo__destroy(rtabmap_msgs__msg__OdomInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__OdomInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__OdomInfo__Sequence__init(rtabmap_msgs__msg__OdomInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__OdomInfo * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__OdomInfo *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__OdomInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__OdomInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__OdomInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rtabmap_msgs__msg__OdomInfo__Sequence__fini(rtabmap_msgs__msg__OdomInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_msgs__msg__OdomInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rtabmap_msgs__msg__OdomInfo__Sequence *
rtabmap_msgs__msg__OdomInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__OdomInfo__Sequence * array = (rtabmap_msgs__msg__OdomInfo__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__OdomInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__OdomInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__OdomInfo__Sequence__destroy(rtabmap_msgs__msg__OdomInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__OdomInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__OdomInfo__Sequence__are_equal(const rtabmap_msgs__msg__OdomInfo__Sequence * lhs, const rtabmap_msgs__msg__OdomInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__OdomInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__OdomInfo__Sequence__copy(
  const rtabmap_msgs__msg__OdomInfo__Sequence * input,
  rtabmap_msgs__msg__OdomInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__OdomInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__OdomInfo * data =
      (rtabmap_msgs__msg__OdomInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__OdomInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__OdomInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__OdomInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
