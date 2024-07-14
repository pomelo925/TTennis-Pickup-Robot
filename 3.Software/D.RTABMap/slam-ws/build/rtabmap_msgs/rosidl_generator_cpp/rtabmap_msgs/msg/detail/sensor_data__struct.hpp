// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'left'
// Member 'right'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'left_camera_info'
// Member 'right_camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
// Member 'local_transform'
// Member 'laser_scan_local_transform'
// Member 'imu_local_transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'laser_scan'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'grid_view_point'
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
// Member 'global_descriptors'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.hpp"
// Member 'env_sensors'
#include "rtabmap_msgs/msg/detail/env_sensor__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"
// Member 'landmarks'
#include "rtabmap_msgs/msg/detail/landmark_detection__struct.hpp"
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__SensorData __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    left(_init),
    right(_init),
    laser_scan(_init),
    laser_scan_local_transform(_init),
    grid_view_point(_init),
    imu(_init),
    imu_local_transform(_init),
    ground_truth_pose(_init),
    gps(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_scan_max_pts = 0l;
      this->laser_scan_max_range = 0.0f;
      this->laser_scan_format = 0l;
      this->grid_cell_size = 0.0f;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    left(_alloc, _init),
    right(_alloc, _init),
    laser_scan(_alloc, _init),
    laser_scan_local_transform(_alloc, _init),
    grid_view_point(_alloc, _init),
    imu(_alloc, _init),
    imu_local_transform(_alloc, _init),
    ground_truth_pose(_alloc, _init),
    gps(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_scan_max_pts = 0l;
      this->laser_scan_max_range = 0.0f;
      this->laser_scan_format = 0l;
      this->grid_cell_size = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _left_type left;
  using _right_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _right_type right;
  using _left_compressed_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _left_compressed_type left_compressed;
  using _right_compressed_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _right_compressed_type right_compressed;
  using _left_camera_info_type =
    std::vector<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>;
  _left_camera_info_type left_camera_info;
  using _right_camera_info_type =
    std::vector<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>;
  _right_camera_info_type right_camera_info;
  using _local_transform_type =
    std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Transform_<ContainerAllocator>>>;
  _local_transform_type local_transform;
  using _laser_scan_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _laser_scan_type laser_scan;
  using _laser_scan_compressed_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _laser_scan_compressed_type laser_scan_compressed;
  using _laser_scan_max_pts_type =
    int32_t;
  _laser_scan_max_pts_type laser_scan_max_pts;
  using _laser_scan_max_range_type =
    float;
  _laser_scan_max_range_type laser_scan_max_range;
  using _laser_scan_format_type =
    int32_t;
  _laser_scan_format_type laser_scan_format;
  using _laser_scan_local_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _laser_scan_local_transform_type laser_scan_local_transform;
  using _user_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _user_data_type user_data;
  using _grid_ground_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _grid_ground_type grid_ground;
  using _grid_obstacles_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _grid_obstacles_type grid_obstacles;
  using _grid_empty_cells_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _grid_empty_cells_type grid_empty_cells;
  using _grid_cell_size_type =
    float;
  _grid_cell_size_type grid_cell_size;
  using _grid_view_point_type =
    rtabmap_msgs::msg::Point3f_<ContainerAllocator>;
  _grid_view_point_type grid_view_point;
  using _key_points_type =
    std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>;
  _key_points_type key_points;
  using _points_type =
    std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>>;
  _points_type points;
  using _descriptors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _descriptors_type descriptors;
  using _global_descriptors_type =
    std::vector<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>>>;
  _global_descriptors_type global_descriptors;
  using _env_sensors_type =
    std::vector<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>>>;
  _env_sensors_type env_sensors;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;
  using _imu_local_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _imu_local_transform_type imu_local_transform;
  using _landmarks_type =
    std::vector<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>>>;
  _landmarks_type landmarks;
  using _ground_truth_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _ground_truth_pose_type ground_truth_pose;
  using _gps_type =
    rtabmap_msgs::msg::GPS_<ContainerAllocator>;
  _gps_type gps;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__left_compressed(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->left_compressed = _arg;
    return *this;
  }
  Type & set__right_compressed(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->right_compressed = _arg;
    return *this;
  }
  Type & set__left_camera_info(
    const std::vector<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>> & _arg)
  {
    this->left_camera_info = _arg;
    return *this;
  }
  Type & set__right_camera_info(
    const std::vector<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>> & _arg)
  {
    this->right_camera_info = _arg;
    return *this;
  }
  Type & set__local_transform(
    const std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Transform_<ContainerAllocator>>> & _arg)
  {
    this->local_transform = _arg;
    return *this;
  }
  Type & set__laser_scan(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->laser_scan = _arg;
    return *this;
  }
  Type & set__laser_scan_compressed(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->laser_scan_compressed = _arg;
    return *this;
  }
  Type & set__laser_scan_max_pts(
    const int32_t & _arg)
  {
    this->laser_scan_max_pts = _arg;
    return *this;
  }
  Type & set__laser_scan_max_range(
    const float & _arg)
  {
    this->laser_scan_max_range = _arg;
    return *this;
  }
  Type & set__laser_scan_format(
    const int32_t & _arg)
  {
    this->laser_scan_format = _arg;
    return *this;
  }
  Type & set__laser_scan_local_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->laser_scan_local_transform = _arg;
    return *this;
  }
  Type & set__user_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->user_data = _arg;
    return *this;
  }
  Type & set__grid_ground(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->grid_ground = _arg;
    return *this;
  }
  Type & set__grid_obstacles(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->grid_obstacles = _arg;
    return *this;
  }
  Type & set__grid_empty_cells(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->grid_empty_cells = _arg;
    return *this;
  }
  Type & set__grid_cell_size(
    const float & _arg)
  {
    this->grid_cell_size = _arg;
    return *this;
  }
  Type & set__grid_view_point(
    const rtabmap_msgs::msg::Point3f_<ContainerAllocator> & _arg)
  {
    this->grid_view_point = _arg;
    return *this;
  }
  Type & set__key_points(
    const std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->key_points = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__descriptors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->descriptors = _arg;
    return *this;
  }
  Type & set__global_descriptors(
    const std::vector<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>>> & _arg)
  {
    this->global_descriptors = _arg;
    return *this;
  }
  Type & set__env_sensors(
    const std::vector<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>>> & _arg)
  {
    this->env_sensors = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__imu_local_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->imu_local_transform = _arg;
    return *this;
  }
  Type & set__landmarks(
    const std::vector<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>>> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }
  Type & set__ground_truth_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->ground_truth_pose = _arg;
    return *this;
  }
  Type & set__gps(
    const rtabmap_msgs::msg::GPS_<ContainerAllocator> & _arg)
  {
    this->gps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__SensorData
    std::shared_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__SensorData
    std::shared_ptr<rtabmap_msgs::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->left_compressed != other.left_compressed) {
      return false;
    }
    if (this->right_compressed != other.right_compressed) {
      return false;
    }
    if (this->left_camera_info != other.left_camera_info) {
      return false;
    }
    if (this->right_camera_info != other.right_camera_info) {
      return false;
    }
    if (this->local_transform != other.local_transform) {
      return false;
    }
    if (this->laser_scan != other.laser_scan) {
      return false;
    }
    if (this->laser_scan_compressed != other.laser_scan_compressed) {
      return false;
    }
    if (this->laser_scan_max_pts != other.laser_scan_max_pts) {
      return false;
    }
    if (this->laser_scan_max_range != other.laser_scan_max_range) {
      return false;
    }
    if (this->laser_scan_format != other.laser_scan_format) {
      return false;
    }
    if (this->laser_scan_local_transform != other.laser_scan_local_transform) {
      return false;
    }
    if (this->user_data != other.user_data) {
      return false;
    }
    if (this->grid_ground != other.grid_ground) {
      return false;
    }
    if (this->grid_obstacles != other.grid_obstacles) {
      return false;
    }
    if (this->grid_empty_cells != other.grid_empty_cells) {
      return false;
    }
    if (this->grid_cell_size != other.grid_cell_size) {
      return false;
    }
    if (this->grid_view_point != other.grid_view_point) {
      return false;
    }
    if (this->key_points != other.key_points) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->descriptors != other.descriptors) {
      return false;
    }
    if (this->global_descriptors != other.global_descriptors) {
      return false;
    }
    if (this->env_sensors != other.env_sensors) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->imu_local_transform != other.imu_local_transform) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    if (this->ground_truth_pose != other.ground_truth_pose) {
      return false;
    }
    if (this->gps != other.gps) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  rtabmap_msgs::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
