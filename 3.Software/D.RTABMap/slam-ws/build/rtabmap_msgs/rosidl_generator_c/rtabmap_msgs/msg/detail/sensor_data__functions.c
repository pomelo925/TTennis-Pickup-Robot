// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `left`
// Member `right`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `left_compressed`
// Member `right_compressed`
// Member `laser_scan_compressed`
// Member `user_data`
// Member `grid_ground`
// Member `grid_obstacles`
// Member `grid_empty_cells`
// Member `descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `left_camera_info`
// Member `right_camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
// Member `imu_local_transform`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `laser_scan`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `grid_view_point`
// Member `points`
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
// Member `key_points`
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/detail/env_sensor__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"
// Member `landmarks`
#include "rtabmap_msgs/msg/detail/landmark_detection__functions.h"
// Member `ground_truth_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `gps`
#include "rtabmap_msgs/msg/detail/gps__functions.h"

bool
rtabmap_msgs__msg__SensorData__init(rtabmap_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // left
  if (!sensor_msgs__msg__Image__init(&msg->left)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // right
  if (!sensor_msgs__msg__Image__init(&msg->right)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // left_compressed
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->left_compressed, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // right_compressed
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->right_compressed, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // left_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__init(&msg->left_camera_info, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // right_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__init(&msg->right_camera_info, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->local_transform, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // laser_scan
  if (!sensor_msgs__msg__PointCloud2__init(&msg->laser_scan)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // laser_scan_compressed
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->laser_scan_compressed, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__init(&msg->laser_scan_local_transform)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->user_data, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_ground, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_obstacles, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_empty_cells, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // grid_cell_size
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__init(&msg->grid_view_point)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // key_points
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&msg->key_points, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // points
  if (!rtabmap_msgs__msg__Point3f__Sequence__init(&msg->points, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->descriptors, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(&msg->global_descriptors, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__init(&msg->env_sensors, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // imu_local_transform
  if (!geometry_msgs__msg__Transform__init(&msg->imu_local_transform)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // landmarks
  if (!rtabmap_msgs__msg__LandmarkDetection__Sequence__init(&msg->landmarks, 0)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__init(&msg->ground_truth_pose)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__init(&msg->gps)) {
    rtabmap_msgs__msg__SensorData__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__SensorData__fini(rtabmap_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left
  sensor_msgs__msg__Image__fini(&msg->left);
  // right
  sensor_msgs__msg__Image__fini(&msg->right);
  // left_compressed
  rosidl_runtime_c__uint8__Sequence__fini(&msg->left_compressed);
  // right_compressed
  rosidl_runtime_c__uint8__Sequence__fini(&msg->right_compressed);
  // left_camera_info
  sensor_msgs__msg__CameraInfo__Sequence__fini(&msg->left_camera_info);
  // right_camera_info
  sensor_msgs__msg__CameraInfo__Sequence__fini(&msg->right_camera_info);
  // local_transform
  geometry_msgs__msg__Transform__Sequence__fini(&msg->local_transform);
  // laser_scan
  sensor_msgs__msg__PointCloud2__fini(&msg->laser_scan);
  // laser_scan_compressed
  rosidl_runtime_c__uint8__Sequence__fini(&msg->laser_scan_compressed);
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  geometry_msgs__msg__Transform__fini(&msg->laser_scan_local_transform);
  // user_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->user_data);
  // grid_ground
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_ground);
  // grid_obstacles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_obstacles);
  // grid_empty_cells
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_empty_cells);
  // grid_cell_size
  // grid_view_point
  rtabmap_msgs__msg__Point3f__fini(&msg->grid_view_point);
  // key_points
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(&msg->key_points);
  // points
  rtabmap_msgs__msg__Point3f__Sequence__fini(&msg->points);
  // descriptors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->descriptors);
  // global_descriptors
  rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(&msg->global_descriptors);
  // env_sensors
  rtabmap_msgs__msg__EnvSensor__Sequence__fini(&msg->env_sensors);
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
  // imu_local_transform
  geometry_msgs__msg__Transform__fini(&msg->imu_local_transform);
  // landmarks
  rtabmap_msgs__msg__LandmarkDetection__Sequence__fini(&msg->landmarks);
  // ground_truth_pose
  geometry_msgs__msg__Pose__fini(&msg->ground_truth_pose);
  // gps
  rtabmap_msgs__msg__GPS__fini(&msg->gps);
}

bool
rtabmap_msgs__msg__SensorData__are_equal(const rtabmap_msgs__msg__SensorData * lhs, const rtabmap_msgs__msg__SensorData * rhs)
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
  // left
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  // right
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  // left_compressed
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->left_compressed), &(rhs->left_compressed)))
  {
    return false;
  }
  // right_compressed
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->right_compressed), &(rhs->right_compressed)))
  {
    return false;
  }
  // left_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__are_equal(
      &(lhs->left_camera_info), &(rhs->left_camera_info)))
  {
    return false;
  }
  // right_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__are_equal(
      &(lhs->right_camera_info), &(rhs->right_camera_info)))
  {
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__are_equal(
      &(lhs->local_transform), &(rhs->local_transform)))
  {
    return false;
  }
  // laser_scan
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->laser_scan), &(rhs->laser_scan)))
  {
    return false;
  }
  // laser_scan_compressed
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->laser_scan_compressed), &(rhs->laser_scan_compressed)))
  {
    return false;
  }
  // laser_scan_max_pts
  if (lhs->laser_scan_max_pts != rhs->laser_scan_max_pts) {
    return false;
  }
  // laser_scan_max_range
  if (lhs->laser_scan_max_range != rhs->laser_scan_max_range) {
    return false;
  }
  // laser_scan_format
  if (lhs->laser_scan_format != rhs->laser_scan_format) {
    return false;
  }
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->laser_scan_local_transform), &(rhs->laser_scan_local_transform)))
  {
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->user_data), &(rhs->user_data)))
  {
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_ground), &(rhs->grid_ground)))
  {
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_obstacles), &(rhs->grid_obstacles)))
  {
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_empty_cells), &(rhs->grid_empty_cells)))
  {
    return false;
  }
  // grid_cell_size
  if (lhs->grid_cell_size != rhs->grid_cell_size) {
    return false;
  }
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__are_equal(
      &(lhs->grid_view_point), &(rhs->grid_view_point)))
  {
    return false;
  }
  // key_points
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__are_equal(
      &(lhs->key_points), &(rhs->key_points)))
  {
    return false;
  }
  // points
  if (!rtabmap_msgs__msg__Point3f__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->descriptors), &(rhs->descriptors)))
  {
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__are_equal(
      &(lhs->global_descriptors), &(rhs->global_descriptors)))
  {
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__are_equal(
      &(lhs->env_sensors), &(rhs->env_sensors)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu), &(rhs->imu)))
  {
    return false;
  }
  // imu_local_transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->imu_local_transform), &(rhs->imu_local_transform)))
  {
    return false;
  }
  // landmarks
  if (!rtabmap_msgs__msg__LandmarkDetection__Sequence__are_equal(
      &(lhs->landmarks), &(rhs->landmarks)))
  {
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->ground_truth_pose), &(rhs->ground_truth_pose)))
  {
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__are_equal(
      &(lhs->gps), &(rhs->gps)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__SensorData__copy(
  const rtabmap_msgs__msg__SensorData * input,
  rtabmap_msgs__msg__SensorData * output)
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
  // left
  if (!sensor_msgs__msg__Image__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  // right
  if (!sensor_msgs__msg__Image__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  // left_compressed
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->left_compressed), &(output->left_compressed)))
  {
    return false;
  }
  // right_compressed
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->right_compressed), &(output->right_compressed)))
  {
    return false;
  }
  // left_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__copy(
      &(input->left_camera_info), &(output->left_camera_info)))
  {
    return false;
  }
  // right_camera_info
  if (!sensor_msgs__msg__CameraInfo__Sequence__copy(
      &(input->right_camera_info), &(output->right_camera_info)))
  {
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__copy(
      &(input->local_transform), &(output->local_transform)))
  {
    return false;
  }
  // laser_scan
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->laser_scan), &(output->laser_scan)))
  {
    return false;
  }
  // laser_scan_compressed
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->laser_scan_compressed), &(output->laser_scan_compressed)))
  {
    return false;
  }
  // laser_scan_max_pts
  output->laser_scan_max_pts = input->laser_scan_max_pts;
  // laser_scan_max_range
  output->laser_scan_max_range = input->laser_scan_max_range;
  // laser_scan_format
  output->laser_scan_format = input->laser_scan_format;
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->laser_scan_local_transform), &(output->laser_scan_local_transform)))
  {
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->user_data), &(output->user_data)))
  {
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_ground), &(output->grid_ground)))
  {
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_obstacles), &(output->grid_obstacles)))
  {
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_empty_cells), &(output->grid_empty_cells)))
  {
    return false;
  }
  // grid_cell_size
  output->grid_cell_size = input->grid_cell_size;
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__copy(
      &(input->grid_view_point), &(output->grid_view_point)))
  {
    return false;
  }
  // key_points
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__copy(
      &(input->key_points), &(output->key_points)))
  {
    return false;
  }
  // points
  if (!rtabmap_msgs__msg__Point3f__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->descriptors), &(output->descriptors)))
  {
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__copy(
      &(input->global_descriptors), &(output->global_descriptors)))
  {
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__copy(
      &(input->env_sensors), &(output->env_sensors)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu), &(output->imu)))
  {
    return false;
  }
  // imu_local_transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->imu_local_transform), &(output->imu_local_transform)))
  {
    return false;
  }
  // landmarks
  if (!rtabmap_msgs__msg__LandmarkDetection__Sequence__copy(
      &(input->landmarks), &(output->landmarks)))
  {
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->ground_truth_pose), &(output->ground_truth_pose)))
  {
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__copy(
      &(input->gps), &(output->gps)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__SensorData *
rtabmap_msgs__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__SensorData * msg = (rtabmap_msgs__msg__SensorData *)allocator.allocate(sizeof(rtabmap_msgs__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__SensorData));
  bool success = rtabmap_msgs__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__SensorData__destroy(rtabmap_msgs__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__SensorData__Sequence__init(rtabmap_msgs__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__SensorData * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__SensorData *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__SensorData__fini(&data[i - 1]);
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
rtabmap_msgs__msg__SensorData__Sequence__fini(rtabmap_msgs__msg__SensorData__Sequence * array)
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
      rtabmap_msgs__msg__SensorData__fini(&array->data[i]);
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

rtabmap_msgs__msg__SensorData__Sequence *
rtabmap_msgs__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__SensorData__Sequence * array = (rtabmap_msgs__msg__SensorData__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__SensorData__Sequence__destroy(rtabmap_msgs__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__SensorData__Sequence__are_equal(const rtabmap_msgs__msg__SensorData__Sequence * lhs, const rtabmap_msgs__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__SensorData__Sequence__copy(
  const rtabmap_msgs__msg__SensorData__Sequence * input,
  rtabmap_msgs__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__SensorData * data =
      (rtabmap_msgs__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
