// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/msg/detail/odom_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtabmap_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OdomInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::msg::OdomInfo(_init);
}

void OdomInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::msg::OdomInfo *>(message_memory);
  typed_message->~OdomInfo();
}

size_t size_function__OdomInfo__covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * get_const_function__OdomInfo__covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 36> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 36> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OdomInfo__covariance(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OdomInfo__covariance(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__OdomInfo__local_bundle_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__local_bundle_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__local_bundle_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__local_bundle_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__local_bundle_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__local_bundle_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__local_bundle_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__local_bundle_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__local_bundle_models(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::CameraModels> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__local_bundle_models(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::CameraModels> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__local_bundle_models(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::CameraModels> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__local_bundle_models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::CameraModels *>(
    get_const_function__OdomInfo__local_bundle_models(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::CameraModels *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__local_bundle_models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::CameraModels *>(
    get_function__OdomInfo__local_bundle_models(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::CameraModels *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__local_bundle_models(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::CameraModels> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__local_bundle_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__local_bundle_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__local_bundle_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__local_bundle_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__OdomInfo__local_bundle_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__local_bundle_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__OdomInfo__local_bundle_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__local_bundle_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__words_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__words_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__words_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__words_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__words_keys(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__words_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__words_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__words_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__words_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__words_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__words_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__words_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::KeyPoint *>(
    get_const_function__OdomInfo__words_values(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::KeyPoint *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__words_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::KeyPoint *>(
    get_function__OdomInfo__words_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::KeyPoint *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__words_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__word_matches(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__word_matches(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__word_matches(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__word_matches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__word_matches(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__word_matches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__word_matches(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__word_matches(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__word_inliers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__word_inliers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__word_inliers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__word_inliers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__word_inliers(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__word_inliers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__word_inliers(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__word_inliers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__local_map_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__local_map_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__local_map_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__local_map_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__local_map_keys(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__local_map_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__local_map_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__local_map_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__local_map_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__local_map_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__local_map_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__local_map_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::Point3f *>(
    get_const_function__OdomInfo__local_map_values(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::Point3f *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__local_map_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::Point3f *>(
    get_function__OdomInfo__local_map_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::Point3f *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__local_map_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__ref_corners(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__ref_corners(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__ref_corners(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__ref_corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::Point2f *>(
    get_const_function__OdomInfo__ref_corners(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::Point2f *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__ref_corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::Point2f *>(
    get_function__OdomInfo__ref_corners(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::Point2f *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__ref_corners(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__new_corners(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__new_corners(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__new_corners(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__new_corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::Point2f *>(
    get_const_function__OdomInfo__new_corners(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::Point2f *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__new_corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::Point2f *>(
    get_function__OdomInfo__new_corners(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::Point2f *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__new_corners(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::Point2f> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OdomInfo__corner_inliers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OdomInfo__corner_inliers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OdomInfo__corner_inliers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OdomInfo__corner_inliers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__OdomInfo__corner_inliers(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__OdomInfo__corner_inliers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__OdomInfo__corner_inliers(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__OdomInfo__corner_inliers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OdomInfo_message_member_array[45] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, lost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "matches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, matches),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inliers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, inliers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_inliers_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_inliers_ratio),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_translation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_translation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_structural_complexity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_structural_complexity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_structural_distribution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_structural_distribution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "icp_correspondences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, icp_correspondences),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__covariance,  // size() function pointer
    get_const_function__OdomInfo__covariance,  // get_const(index) function pointer
    get_function__OdomInfo__covariance,  // get(index) function pointer
    fetch_function__OdomInfo__covariance,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__covariance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, features),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_map_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_map_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_scan_map_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_scan_map_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_key_frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_key_frames),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_bundle_outliers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_outliers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_bundle_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_constraints),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_bundle_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key_frame_added",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, key_frame_added),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_estimation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, time_estimation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_particle_filtering",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, time_particle_filtering),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "interval",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, interval),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_travelled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, distance_travelled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "memory_usage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, memory_usage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gravity_roll_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, gravity_roll_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gravity_pitch_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, gravity_pitch_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "local_bundle_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__local_bundle_ids,  // size() function pointer
    get_const_function__OdomInfo__local_bundle_ids,  // get_const(index) function pointer
    get_function__OdomInfo__local_bundle_ids,  // get(index) function pointer
    fetch_function__OdomInfo__local_bundle_ids,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__local_bundle_ids,  // assign(index, value) function pointer
    resize_function__OdomInfo__local_bundle_ids  // resize(index) function pointer
  },
  {
    "local_bundle_models",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::CameraModels>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_models),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__local_bundle_models,  // size() function pointer
    get_const_function__OdomInfo__local_bundle_models,  // get_const(index) function pointer
    get_function__OdomInfo__local_bundle_models,  // get(index) function pointer
    fetch_function__OdomInfo__local_bundle_models,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__local_bundle_models,  // assign(index, value) function pointer
    resize_function__OdomInfo__local_bundle_models  // resize(index) function pointer
  },
  {
    "local_bundle_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_bundle_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__local_bundle_poses,  // size() function pointer
    get_const_function__OdomInfo__local_bundle_poses,  // get_const(index) function pointer
    get_function__OdomInfo__local_bundle_poses,  // get(index) function pointer
    fetch_function__OdomInfo__local_bundle_poses,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__local_bundle_poses,  // assign(index, value) function pointer
    resize_function__OdomInfo__local_bundle_poses  // resize(index) function pointer
  },
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transform_filtered",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, transform_filtered),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transform_ground_truth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, transform_ground_truth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "guess",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, guess),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "words_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, words_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__words_keys,  // size() function pointer
    get_const_function__OdomInfo__words_keys,  // get_const(index) function pointer
    get_function__OdomInfo__words_keys,  // get(index) function pointer
    fetch_function__OdomInfo__words_keys,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__words_keys,  // assign(index, value) function pointer
    resize_function__OdomInfo__words_keys  // resize(index) function pointer
  },
  {
    "words_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::KeyPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, words_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__words_values,  // size() function pointer
    get_const_function__OdomInfo__words_values,  // get_const(index) function pointer
    get_function__OdomInfo__words_values,  // get(index) function pointer
    fetch_function__OdomInfo__words_values,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__words_values,  // assign(index, value) function pointer
    resize_function__OdomInfo__words_values  // resize(index) function pointer
  },
  {
    "word_matches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, word_matches),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__word_matches,  // size() function pointer
    get_const_function__OdomInfo__word_matches,  // get_const(index) function pointer
    get_function__OdomInfo__word_matches,  // get(index) function pointer
    fetch_function__OdomInfo__word_matches,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__word_matches,  // assign(index, value) function pointer
    resize_function__OdomInfo__word_matches  // resize(index) function pointer
  },
  {
    "word_inliers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, word_inliers),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__word_inliers,  // size() function pointer
    get_const_function__OdomInfo__word_inliers,  // get_const(index) function pointer
    get_function__OdomInfo__word_inliers,  // get(index) function pointer
    fetch_function__OdomInfo__word_inliers,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__word_inliers,  // assign(index, value) function pointer
    resize_function__OdomInfo__word_inliers  // resize(index) function pointer
  },
  {
    "local_map_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_map_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__local_map_keys,  // size() function pointer
    get_const_function__OdomInfo__local_map_keys,  // get_const(index) function pointer
    get_function__OdomInfo__local_map_keys,  // get(index) function pointer
    fetch_function__OdomInfo__local_map_keys,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__local_map_keys,  // assign(index, value) function pointer
    resize_function__OdomInfo__local_map_keys  // resize(index) function pointer
  },
  {
    "local_map_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Point3f>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_map_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__local_map_values,  // size() function pointer
    get_const_function__OdomInfo__local_map_values,  // get_const(index) function pointer
    get_function__OdomInfo__local_map_values,  // get(index) function pointer
    fetch_function__OdomInfo__local_map_values,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__local_map_values,  // assign(index, value) function pointer
    resize_function__OdomInfo__local_map_values  // resize(index) function pointer
  },
  {
    "local_scan_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, local_scan_map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_corners",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Point2f>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, ref_corners),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__ref_corners,  // size() function pointer
    get_const_function__OdomInfo__ref_corners,  // get_const(index) function pointer
    get_function__OdomInfo__ref_corners,  // get(index) function pointer
    fetch_function__OdomInfo__ref_corners,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__ref_corners,  // assign(index, value) function pointer
    resize_function__OdomInfo__ref_corners  // resize(index) function pointer
  },
  {
    "new_corners",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Point2f>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, new_corners),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__new_corners,  // size() function pointer
    get_const_function__OdomInfo__new_corners,  // get_const(index) function pointer
    get_function__OdomInfo__new_corners,  // get(index) function pointer
    fetch_function__OdomInfo__new_corners,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__new_corners,  // assign(index, value) function pointer
    resize_function__OdomInfo__new_corners  // resize(index) function pointer
  },
  {
    "corner_inliers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::OdomInfo, corner_inliers),  // bytes offset in struct
    nullptr,  // default value
    size_function__OdomInfo__corner_inliers,  // size() function pointer
    get_const_function__OdomInfo__corner_inliers,  // get_const(index) function pointer
    get_function__OdomInfo__corner_inliers,  // get(index) function pointer
    fetch_function__OdomInfo__corner_inliers,  // fetch(index, &value) function pointer
    assign_function__OdomInfo__corner_inliers,  // assign(index, value) function pointer
    resize_function__OdomInfo__corner_inliers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OdomInfo_message_members = {
  "rtabmap_msgs::msg",  // message namespace
  "OdomInfo",  // message name
  45,  // number of fields
  sizeof(rtabmap_msgs::msg::OdomInfo),
  OdomInfo_message_member_array,  // message members
  OdomInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OdomInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OdomInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rtabmap_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_msgs::msg::OdomInfo>()
{
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::OdomInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, msg, OdomInfo)() {
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::OdomInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
