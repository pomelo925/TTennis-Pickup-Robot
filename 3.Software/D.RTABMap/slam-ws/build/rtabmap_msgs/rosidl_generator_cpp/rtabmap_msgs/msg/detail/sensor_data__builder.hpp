// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorData_gps
{
public:
  explicit Init_SensorData_gps(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::SensorData gps(::rtabmap_msgs::msg::SensorData::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_ground_truth_pose
{
public:
  explicit Init_SensorData_ground_truth_pose(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_gps ground_truth_pose(::rtabmap_msgs::msg::SensorData::_ground_truth_pose_type arg)
  {
    msg_.ground_truth_pose = std::move(arg);
    return Init_SensorData_gps(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_landmarks
{
public:
  explicit Init_SensorData_landmarks(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_ground_truth_pose landmarks(::rtabmap_msgs::msg::SensorData::_landmarks_type arg)
  {
    msg_.landmarks = std::move(arg);
    return Init_SensorData_ground_truth_pose(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_imu_local_transform
{
public:
  explicit Init_SensorData_imu_local_transform(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_landmarks imu_local_transform(::rtabmap_msgs::msg::SensorData::_imu_local_transform_type arg)
  {
    msg_.imu_local_transform = std::move(arg);
    return Init_SensorData_landmarks(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_imu
{
public:
  explicit Init_SensorData_imu(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_imu_local_transform imu(::rtabmap_msgs::msg::SensorData::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_SensorData_imu_local_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_env_sensors
{
public:
  explicit Init_SensorData_env_sensors(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_imu env_sensors(::rtabmap_msgs::msg::SensorData::_env_sensors_type arg)
  {
    msg_.env_sensors = std::move(arg);
    return Init_SensorData_imu(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_global_descriptors
{
public:
  explicit Init_SensorData_global_descriptors(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_env_sensors global_descriptors(::rtabmap_msgs::msg::SensorData::_global_descriptors_type arg)
  {
    msg_.global_descriptors = std::move(arg);
    return Init_SensorData_env_sensors(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_descriptors
{
public:
  explicit Init_SensorData_descriptors(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_global_descriptors descriptors(::rtabmap_msgs::msg::SensorData::_descriptors_type arg)
  {
    msg_.descriptors = std::move(arg);
    return Init_SensorData_global_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_points
{
public:
  explicit Init_SensorData_points(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_descriptors points(::rtabmap_msgs::msg::SensorData::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_SensorData_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_key_points
{
public:
  explicit Init_SensorData_key_points(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_points key_points(::rtabmap_msgs::msg::SensorData::_key_points_type arg)
  {
    msg_.key_points = std::move(arg);
    return Init_SensorData_points(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_grid_view_point
{
public:
  explicit Init_SensorData_grid_view_point(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_key_points grid_view_point(::rtabmap_msgs::msg::SensorData::_grid_view_point_type arg)
  {
    msg_.grid_view_point = std::move(arg);
    return Init_SensorData_key_points(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_grid_cell_size
{
public:
  explicit Init_SensorData_grid_cell_size(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_grid_view_point grid_cell_size(::rtabmap_msgs::msg::SensorData::_grid_cell_size_type arg)
  {
    msg_.grid_cell_size = std::move(arg);
    return Init_SensorData_grid_view_point(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_grid_empty_cells
{
public:
  explicit Init_SensorData_grid_empty_cells(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_grid_cell_size grid_empty_cells(::rtabmap_msgs::msg::SensorData::_grid_empty_cells_type arg)
  {
    msg_.grid_empty_cells = std::move(arg);
    return Init_SensorData_grid_cell_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_grid_obstacles
{
public:
  explicit Init_SensorData_grid_obstacles(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_grid_empty_cells grid_obstacles(::rtabmap_msgs::msg::SensorData::_grid_obstacles_type arg)
  {
    msg_.grid_obstacles = std::move(arg);
    return Init_SensorData_grid_empty_cells(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_grid_ground
{
public:
  explicit Init_SensorData_grid_ground(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_grid_obstacles grid_ground(::rtabmap_msgs::msg::SensorData::_grid_ground_type arg)
  {
    msg_.grid_ground = std::move(arg);
    return Init_SensorData_grid_obstacles(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_user_data
{
public:
  explicit Init_SensorData_user_data(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_grid_ground user_data(::rtabmap_msgs::msg::SensorData::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return Init_SensorData_grid_ground(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan_local_transform
{
public:
  explicit Init_SensorData_laser_scan_local_transform(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_user_data laser_scan_local_transform(::rtabmap_msgs::msg::SensorData::_laser_scan_local_transform_type arg)
  {
    msg_.laser_scan_local_transform = std::move(arg);
    return Init_SensorData_user_data(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan_format
{
public:
  explicit Init_SensorData_laser_scan_format(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan_local_transform laser_scan_format(::rtabmap_msgs::msg::SensorData::_laser_scan_format_type arg)
  {
    msg_.laser_scan_format = std::move(arg);
    return Init_SensorData_laser_scan_local_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan_max_range
{
public:
  explicit Init_SensorData_laser_scan_max_range(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan_format laser_scan_max_range(::rtabmap_msgs::msg::SensorData::_laser_scan_max_range_type arg)
  {
    msg_.laser_scan_max_range = std::move(arg);
    return Init_SensorData_laser_scan_format(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan_max_pts
{
public:
  explicit Init_SensorData_laser_scan_max_pts(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan_max_range laser_scan_max_pts(::rtabmap_msgs::msg::SensorData::_laser_scan_max_pts_type arg)
  {
    msg_.laser_scan_max_pts = std::move(arg);
    return Init_SensorData_laser_scan_max_range(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan_compressed
{
public:
  explicit Init_SensorData_laser_scan_compressed(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan_max_pts laser_scan_compressed(::rtabmap_msgs::msg::SensorData::_laser_scan_compressed_type arg)
  {
    msg_.laser_scan_compressed = std::move(arg);
    return Init_SensorData_laser_scan_max_pts(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_laser_scan
{
public:
  explicit Init_SensorData_laser_scan(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan_compressed laser_scan(::rtabmap_msgs::msg::SensorData::_laser_scan_type arg)
  {
    msg_.laser_scan = std::move(arg);
    return Init_SensorData_laser_scan_compressed(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_local_transform
{
public:
  explicit Init_SensorData_local_transform(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_laser_scan local_transform(::rtabmap_msgs::msg::SensorData::_local_transform_type arg)
  {
    msg_.local_transform = std::move(arg);
    return Init_SensorData_laser_scan(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_right_camera_info
{
public:
  explicit Init_SensorData_right_camera_info(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_local_transform right_camera_info(::rtabmap_msgs::msg::SensorData::_right_camera_info_type arg)
  {
    msg_.right_camera_info = std::move(arg);
    return Init_SensorData_local_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_left_camera_info
{
public:
  explicit Init_SensorData_left_camera_info(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_right_camera_info left_camera_info(::rtabmap_msgs::msg::SensorData::_left_camera_info_type arg)
  {
    msg_.left_camera_info = std::move(arg);
    return Init_SensorData_right_camera_info(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_right_compressed
{
public:
  explicit Init_SensorData_right_compressed(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_left_camera_info right_compressed(::rtabmap_msgs::msg::SensorData::_right_compressed_type arg)
  {
    msg_.right_compressed = std::move(arg);
    return Init_SensorData_left_camera_info(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_left_compressed
{
public:
  explicit Init_SensorData_left_compressed(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_right_compressed left_compressed(::rtabmap_msgs::msg::SensorData::_left_compressed_type arg)
  {
    msg_.left_compressed = std::move(arg);
    return Init_SensorData_right_compressed(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_right
{
public:
  explicit Init_SensorData_right(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_left_compressed right(::rtabmap_msgs::msg::SensorData::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_SensorData_left_compressed(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_left
{
public:
  explicit Init_SensorData_left(::rtabmap_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_right left(::rtabmap_msgs::msg::SensorData::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_SensorData_right(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

class Init_SensorData_header
{
public:
  Init_SensorData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_left header(::rtabmap_msgs::msg::SensorData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorData_left(msg_);
  }

private:
  ::rtabmap_msgs::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::SensorData>()
{
  return rtabmap_msgs::msg::builder::Init_SensorData_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
