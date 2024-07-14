// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/msg/detail/sensor_data__struct.hpp"
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

void SensorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::msg::SensorData(_init);
}

void SensorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::msg::SensorData *>(message_memory);
  typed_message->~SensorData();
}

size_t size_function__SensorData__left_compressed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__left_compressed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__left_compressed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__left_compressed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__left_compressed(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__left_compressed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__left_compressed(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__left_compressed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__right_compressed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__right_compressed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__right_compressed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__right_compressed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__right_compressed(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__right_compressed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__right_compressed(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__right_compressed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__left_camera_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__left_camera_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__left_camera_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__left_camera_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::CameraInfo *>(
    get_const_function__SensorData__left_camera_info(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::CameraInfo *>(untyped_value);
  value = item;
}

void assign_function__SensorData__left_camera_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::CameraInfo *>(
    get_function__SensorData__left_camera_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::CameraInfo *>(untyped_value);
  item = value;
}

void resize_function__SensorData__left_camera_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__right_camera_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__right_camera_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__right_camera_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__right_camera_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::CameraInfo *>(
    get_const_function__SensorData__right_camera_info(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::CameraInfo *>(untyped_value);
  value = item;
}

void assign_function__SensorData__right_camera_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::CameraInfo *>(
    get_function__SensorData__right_camera_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::CameraInfo *>(untyped_value);
  item = value;
}

void resize_function__SensorData__right_camera_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::CameraInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__local_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__local_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__local_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__local_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Transform *>(
    get_const_function__SensorData__local_transform(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Transform *>(untyped_value);
  value = item;
}

void assign_function__SensorData__local_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Transform *>(
    get_function__SensorData__local_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Transform *>(untyped_value);
  item = value;
}

void resize_function__SensorData__local_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__laser_scan_compressed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__laser_scan_compressed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__laser_scan_compressed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__laser_scan_compressed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__laser_scan_compressed(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__laser_scan_compressed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__laser_scan_compressed(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__laser_scan_compressed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__user_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__user_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__user_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__user_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__user_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__user_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__user_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__user_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__grid_ground(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__grid_ground(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__grid_ground(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__grid_ground(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__grid_ground(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__grid_ground(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__grid_ground(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__grid_ground(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__grid_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__grid_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__grid_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__grid_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__grid_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__grid_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__grid_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__grid_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__grid_empty_cells(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__grid_empty_cells(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__grid_empty_cells(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__grid_empty_cells(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__grid_empty_cells(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__grid_empty_cells(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__grid_empty_cells(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__grid_empty_cells(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__key_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__key_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__key_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::KeyPoint *>(
    get_const_function__SensorData__key_points(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::KeyPoint *>(untyped_value);
  value = item;
}

void assign_function__SensorData__key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::KeyPoint *>(
    get_function__SensorData__key_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::KeyPoint *>(untyped_value);
  item = value;
}

void resize_function__SensorData__key_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::KeyPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::Point3f *>(
    get_const_function__SensorData__points(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::Point3f *>(untyped_value);
  value = item;
}

void assign_function__SensorData__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::Point3f *>(
    get_function__SensorData__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::Point3f *>(untyped_value);
  item = value;
}

void resize_function__SensorData__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::Point3f> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__descriptors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__descriptors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__descriptors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorData__descriptors(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorData__descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorData__descriptors(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SensorData__descriptors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__global_descriptors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::GlobalDescriptor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__global_descriptors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::GlobalDescriptor> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__global_descriptors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::GlobalDescriptor> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__global_descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::GlobalDescriptor *>(
    get_const_function__SensorData__global_descriptors(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::GlobalDescriptor *>(untyped_value);
  value = item;
}

void assign_function__SensorData__global_descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::GlobalDescriptor *>(
    get_function__SensorData__global_descriptors(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::GlobalDescriptor *>(untyped_value);
  item = value;
}

void resize_function__SensorData__global_descriptors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::GlobalDescriptor> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__env_sensors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::EnvSensor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__env_sensors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::EnvSensor> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__env_sensors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::EnvSensor> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__env_sensors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::EnvSensor *>(
    get_const_function__SensorData__env_sensors(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::EnvSensor *>(untyped_value);
  value = item;
}

void assign_function__SensorData__env_sensors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::EnvSensor *>(
    get_function__SensorData__env_sensors(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::EnvSensor *>(untyped_value);
  item = value;
}

void resize_function__SensorData__env_sensors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::EnvSensor> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorData__landmarks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__landmarks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__landmarks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__landmarks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::LandmarkDetection *>(
    get_const_function__SensorData__landmarks(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::LandmarkDetection *>(untyped_value);
  value = item;
}

void assign_function__SensorData__landmarks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::LandmarkDetection *>(
    get_function__SensorData__landmarks(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::LandmarkDetection *>(untyped_value);
  item = value;
}

void resize_function__SensorData__landmarks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorData_message_member_array[30] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_compressed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, left_compressed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__left_compressed,  // size() function pointer
    get_const_function__SensorData__left_compressed,  // get_const(index) function pointer
    get_function__SensorData__left_compressed,  // get(index) function pointer
    fetch_function__SensorData__left_compressed,  // fetch(index, &value) function pointer
    assign_function__SensorData__left_compressed,  // assign(index, value) function pointer
    resize_function__SensorData__left_compressed  // resize(index) function pointer
  },
  {
    "right_compressed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, right_compressed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__right_compressed,  // size() function pointer
    get_const_function__SensorData__right_compressed,  // get_const(index) function pointer
    get_function__SensorData__right_compressed,  // get(index) function pointer
    fetch_function__SensorData__right_compressed,  // fetch(index, &value) function pointer
    assign_function__SensorData__right_compressed,  // assign(index, value) function pointer
    resize_function__SensorData__right_compressed  // resize(index) function pointer
  },
  {
    "left_camera_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::CameraInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, left_camera_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__left_camera_info,  // size() function pointer
    get_const_function__SensorData__left_camera_info,  // get_const(index) function pointer
    get_function__SensorData__left_camera_info,  // get(index) function pointer
    fetch_function__SensorData__left_camera_info,  // fetch(index, &value) function pointer
    assign_function__SensorData__left_camera_info,  // assign(index, value) function pointer
    resize_function__SensorData__left_camera_info  // resize(index) function pointer
  },
  {
    "right_camera_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::CameraInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, right_camera_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__right_camera_info,  // size() function pointer
    get_const_function__SensorData__right_camera_info,  // get_const(index) function pointer
    get_function__SensorData__right_camera_info,  // get(index) function pointer
    fetch_function__SensorData__right_camera_info,  // fetch(index, &value) function pointer
    assign_function__SensorData__right_camera_info,  // assign(index, value) function pointer
    resize_function__SensorData__right_camera_info  // resize(index) function pointer
  },
  {
    "local_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, local_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__local_transform,  // size() function pointer
    get_const_function__SensorData__local_transform,  // get_const(index) function pointer
    get_function__SensorData__local_transform,  // get(index) function pointer
    fetch_function__SensorData__local_transform,  // fetch(index, &value) function pointer
    assign_function__SensorData__local_transform,  // assign(index, value) function pointer
    resize_function__SensorData__local_transform  // resize(index) function pointer
  },
  {
    "laser_scan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laser_scan_compressed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan_compressed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__laser_scan_compressed,  // size() function pointer
    get_const_function__SensorData__laser_scan_compressed,  // get_const(index) function pointer
    get_function__SensorData__laser_scan_compressed,  // get(index) function pointer
    fetch_function__SensorData__laser_scan_compressed,  // fetch(index, &value) function pointer
    assign_function__SensorData__laser_scan_compressed,  // assign(index, value) function pointer
    resize_function__SensorData__laser_scan_compressed  // resize(index) function pointer
  },
  {
    "laser_scan_max_pts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan_max_pts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laser_scan_max_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan_max_range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laser_scan_format",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan_format),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laser_scan_local_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, laser_scan_local_transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "user_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, user_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__user_data,  // size() function pointer
    get_const_function__SensorData__user_data,  // get_const(index) function pointer
    get_function__SensorData__user_data,  // get(index) function pointer
    fetch_function__SensorData__user_data,  // fetch(index, &value) function pointer
    assign_function__SensorData__user_data,  // assign(index, value) function pointer
    resize_function__SensorData__user_data  // resize(index) function pointer
  },
  {
    "grid_ground",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, grid_ground),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__grid_ground,  // size() function pointer
    get_const_function__SensorData__grid_ground,  // get_const(index) function pointer
    get_function__SensorData__grid_ground,  // get(index) function pointer
    fetch_function__SensorData__grid_ground,  // fetch(index, &value) function pointer
    assign_function__SensorData__grid_ground,  // assign(index, value) function pointer
    resize_function__SensorData__grid_ground  // resize(index) function pointer
  },
  {
    "grid_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, grid_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__grid_obstacles,  // size() function pointer
    get_const_function__SensorData__grid_obstacles,  // get_const(index) function pointer
    get_function__SensorData__grid_obstacles,  // get(index) function pointer
    fetch_function__SensorData__grid_obstacles,  // fetch(index, &value) function pointer
    assign_function__SensorData__grid_obstacles,  // assign(index, value) function pointer
    resize_function__SensorData__grid_obstacles  // resize(index) function pointer
  },
  {
    "grid_empty_cells",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, grid_empty_cells),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__grid_empty_cells,  // size() function pointer
    get_const_function__SensorData__grid_empty_cells,  // get_const(index) function pointer
    get_function__SensorData__grid_empty_cells,  // get(index) function pointer
    fetch_function__SensorData__grid_empty_cells,  // fetch(index, &value) function pointer
    assign_function__SensorData__grid_empty_cells,  // assign(index, value) function pointer
    resize_function__SensorData__grid_empty_cells  // resize(index) function pointer
  },
  {
    "grid_cell_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, grid_cell_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "grid_view_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Point3f>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, grid_view_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::KeyPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, key_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__key_points,  // size() function pointer
    get_const_function__SensorData__key_points,  // get_const(index) function pointer
    get_function__SensorData__key_points,  // get(index) function pointer
    fetch_function__SensorData__key_points,  // fetch(index, &value) function pointer
    assign_function__SensorData__key_points,  // assign(index, value) function pointer
    resize_function__SensorData__key_points  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Point3f>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__points,  // size() function pointer
    get_const_function__SensorData__points,  // get_const(index) function pointer
    get_function__SensorData__points,  // get(index) function pointer
    fetch_function__SensorData__points,  // fetch(index, &value) function pointer
    assign_function__SensorData__points,  // assign(index, value) function pointer
    resize_function__SensorData__points  // resize(index) function pointer
  },
  {
    "descriptors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, descriptors),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__descriptors,  // size() function pointer
    get_const_function__SensorData__descriptors,  // get_const(index) function pointer
    get_function__SensorData__descriptors,  // get(index) function pointer
    fetch_function__SensorData__descriptors,  // fetch(index, &value) function pointer
    assign_function__SensorData__descriptors,  // assign(index, value) function pointer
    resize_function__SensorData__descriptors  // resize(index) function pointer
  },
  {
    "global_descriptors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::GlobalDescriptor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, global_descriptors),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__global_descriptors,  // size() function pointer
    get_const_function__SensorData__global_descriptors,  // get_const(index) function pointer
    get_function__SensorData__global_descriptors,  // get(index) function pointer
    fetch_function__SensorData__global_descriptors,  // fetch(index, &value) function pointer
    assign_function__SensorData__global_descriptors,  // assign(index, value) function pointer
    resize_function__SensorData__global_descriptors  // resize(index) function pointer
  },
  {
    "env_sensors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::EnvSensor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, env_sensors),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__env_sensors,  // size() function pointer
    get_const_function__SensorData__env_sensors,  // get_const(index) function pointer
    get_function__SensorData__env_sensors,  // get(index) function pointer
    fetch_function__SensorData__env_sensors,  // fetch(index, &value) function pointer
    assign_function__SensorData__env_sensors,  // assign(index, value) function pointer
    resize_function__SensorData__env_sensors  // resize(index) function pointer
  },
  {
    "imu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Imu>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, imu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_local_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, imu_local_transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::LandmarkDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, landmarks),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__landmarks,  // size() function pointer
    get_const_function__SensorData__landmarks,  // get_const(index) function pointer
    get_function__SensorData__landmarks,  // get(index) function pointer
    fetch_function__SensorData__landmarks,  // fetch(index, &value) function pointer
    assign_function__SensorData__landmarks,  // assign(index, value) function pointer
    resize_function__SensorData__landmarks  // resize(index) function pointer
  },
  {
    "ground_truth_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, ground_truth_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::GPS>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::SensorData, gps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorData_message_members = {
  "rtabmap_msgs::msg",  // message namespace
  "SensorData",  // message name
  30,  // number of fields
  sizeof(rtabmap_msgs::msg::SensorData),
  SensorData_message_member_array,  // message members
  SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorData_message_members,
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
get_message_type_support_handle<rtabmap_msgs::msg::SensorData>()
{
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, msg, SensorData)() {
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
