// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/odom_info__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/odom_info__functions.h"
#include "rtabmap_msgs/msg/detail/odom_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `local_bundle_ids`
// Member `words_keys`
// Member `word_matches`
// Member `word_inliers`
// Member `local_map_keys`
// Member `corner_inliers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_bundle_models`
#include "rtabmap_msgs/msg/camera_models.h"
// Member `local_bundle_models`
#include "rtabmap_msgs/msg/detail/camera_models__rosidl_typesupport_introspection_c.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/pose.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `words_values`
#include "rtabmap_msgs/msg/key_point.h"
// Member `words_values`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `local_map_values`
#include "rtabmap_msgs/msg/point3f.h"
// Member `local_map_values`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_msgs/msg/point2f.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_msgs/msg/detail/point2f__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__OdomInfo__init(message_memory);
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__OdomInfo__fini(message_memory);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_models(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__CameraModels__Sequence * member =
    (const rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_models(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__CameraModels__Sequence * member =
    (const rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_models(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__CameraModels__Sequence * member =
    (rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__CameraModels * item =
    ((const rtabmap_msgs__msg__CameraModels *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_models(untyped_member, index));
  rtabmap_msgs__msg__CameraModels * value =
    (rtabmap_msgs__msg__CameraModels *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__CameraModels * item =
    ((rtabmap_msgs__msg__CameraModels *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_models(untyped_member, index));
  const rtabmap_msgs__msg__CameraModels * value =
    (const rtabmap_msgs__msg__CameraModels *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_models(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__CameraModels__Sequence * member =
    (rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  rtabmap_msgs__msg__CameraModels__Sequence__fini(member);
  return rtabmap_msgs__msg__CameraModels__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__words_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__words_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__words_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__words_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__words_values(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_values(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_values(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__words_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__KeyPoint * item =
    ((const rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_values(untyped_member, index));
  rtabmap_msgs__msg__KeyPoint * value =
    (rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__words_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__KeyPoint * item =
    ((rtabmap_msgs__msg__KeyPoint *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_values(untyped_member, index));
  const rtabmap_msgs__msg__KeyPoint * value =
    (const rtabmap_msgs__msg__KeyPoint *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__words_values(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__word_matches(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_matches(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_matches(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__word_matches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_matches(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__word_matches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_matches(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__word_matches(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__word_inliers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_inliers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_inliers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__word_inliers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_inliers(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__word_inliers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_inliers(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__word_inliers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_map_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_map_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_map_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_map_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_map_values(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_values(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_values(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_map_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Point3f * item =
    ((const rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_values(untyped_member, index));
  rtabmap_msgs__msg__Point3f * value =
    (rtabmap_msgs__msg__Point3f *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_map_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Point3f * item =
    ((rtabmap_msgs__msg__Point3f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_values(untyped_member, index));
  const rtabmap_msgs__msg__Point3f * value =
    (const rtabmap_msgs__msg__Point3f *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_map_values(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__ref_corners(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__ref_corners(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__ref_corners(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__ref_corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Point2f * item =
    ((const rtabmap_msgs__msg__Point2f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__ref_corners(untyped_member, index));
  rtabmap_msgs__msg__Point2f * value =
    (rtabmap_msgs__msg__Point2f *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__ref_corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Point2f * item =
    ((rtabmap_msgs__msg__Point2f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__ref_corners(untyped_member, index));
  const rtabmap_msgs__msg__Point2f * value =
    (const rtabmap_msgs__msg__Point2f *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__ref_corners(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point2f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point2f__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__new_corners(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__new_corners(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__new_corners(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__new_corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtabmap_msgs__msg__Point2f * item =
    ((const rtabmap_msgs__msg__Point2f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__new_corners(untyped_member, index));
  rtabmap_msgs__msg__Point2f * value =
    (rtabmap_msgs__msg__Point2f *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__new_corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtabmap_msgs__msg__Point2f * item =
    ((rtabmap_msgs__msg__Point2f *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__new_corners(untyped_member, index));
  const rtabmap_msgs__msg__Point2f * value =
    (const rtabmap_msgs__msg__Point2f *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__new_corners(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point2f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point2f__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__corner_inliers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__corner_inliers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__corner_inliers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__corner_inliers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__corner_inliers(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__corner_inliers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__corner_inliers(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__corner_inliers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[45] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, inliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_inliers_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_inliers_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_structural_complexity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_structural_complexity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_structural_distribution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_structural_distribution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_correspondences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_correspondences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, covariance),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__covariance,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__covariance,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__covariance,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__covariance,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, features),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_map_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_scan_map_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_scan_map_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_key_frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_key_frames),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_outliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_outliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_frame_added",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, key_frame_added),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_estimation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, time_estimation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_particle_filtering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, time_particle_filtering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_travelled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, distance_travelled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "memory_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, memory_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_roll_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, gravity_roll_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_pitch_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, gravity_pitch_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_ids),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_ids,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_ids,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_ids,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_ids,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_ids,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_ids  // resize(index) function pointer
  },
  {
    "local_bundle_models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_models),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_models,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_models,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_models,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_models,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_models,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_models  // resize(index) function pointer
  },
  {
    "local_bundle_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_poses),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_bundle_poses,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_bundle_poses,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_bundle_poses,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_bundle_poses,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_bundle_poses,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_bundle_poses  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform_filtered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform_ground_truth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform_ground_truth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, guess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "words_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, words_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__words_keys,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_keys,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__words_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__words_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__words_keys  // resize(index) function pointer
  },
  {
    "words_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, words_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__words_values,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__words_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__words_values,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__words_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__words_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__words_values  // resize(index) function pointer
  },
  {
    "word_matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, word_matches),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__word_matches,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_matches,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_matches,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__word_matches,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__word_matches,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__word_matches  // resize(index) function pointer
  },
  {
    "word_inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, word_inliers),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__word_inliers,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__word_inliers,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__word_inliers,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__word_inliers,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__word_inliers,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__word_inliers  // resize(index) function pointer
  },
  {
    "local_map_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_map_keys,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_keys,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_map_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_map_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_map_keys  // resize(index) function pointer
  },
  {
    "local_map_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__local_map_values,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__local_map_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__local_map_values,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__local_map_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__local_map_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__local_map_values  // resize(index) function pointer
  },
  {
    "local_scan_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_scan_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, ref_corners),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__ref_corners,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__ref_corners,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__ref_corners,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__ref_corners,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__ref_corners,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__ref_corners  // resize(index) function pointer
  },
  {
    "new_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, new_corners),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__new_corners,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__new_corners,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__new_corners,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__new_corners,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__new_corners,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__new_corners  // resize(index) function pointer
  },
  {
    "corner_inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, corner_inliers),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__size_function__OdomInfo__corner_inliers,  // size() function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_const_function__OdomInfo__corner_inliers,  // get_const(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__get_function__OdomInfo__corner_inliers,  // get(index) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__fetch_function__OdomInfo__corner_inliers,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__assign_function__OdomInfo__corner_inliers,  // assign(index, value) function pointer
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__resize_function__OdomInfo__corner_inliers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "OdomInfo",  // message name
  45,  // number of fields
  sizeof(rtabmap_msgs__msg__OdomInfo),
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array,  // message members
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, OdomInfo)() {
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, CameraModels)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[32].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[33].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[36].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[40].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[41].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[42].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point2f)();
  rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[43].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point2f)();
  if (!rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
