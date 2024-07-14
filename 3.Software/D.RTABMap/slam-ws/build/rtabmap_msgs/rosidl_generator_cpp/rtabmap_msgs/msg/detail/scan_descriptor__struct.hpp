// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_HPP_

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
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"
// Member 'scan_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__ScanDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__ScanDescriptor __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanDescriptor_
{
  using Type = ScanDescriptor_<ContainerAllocator>;

  explicit ScanDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    scan(_init),
    scan_cloud(_init),
    global_descriptor(_init)
  {
    (void)_init;
  }

  explicit ScanDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    scan(_alloc, _init),
    scan_cloud(_alloc, _init),
    global_descriptor(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _scan_type =
    sensor_msgs::msg::LaserScan_<ContainerAllocator>;
  _scan_type scan;
  using _scan_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _scan_cloud_type scan_cloud;
  using _global_descriptor_type =
    rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>;
  _global_descriptor_type global_descriptor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__scan(
    const sensor_msgs::msg::LaserScan_<ContainerAllocator> & _arg)
  {
    this->scan = _arg;
    return *this;
  }
  Type & set__scan_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->scan_cloud = _arg;
    return *this;
  }
  Type & set__global_descriptor(
    const rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator> & _arg)
  {
    this->global_descriptor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__ScanDescriptor
    std::shared_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__ScanDescriptor
    std::shared_ptr<rtabmap_msgs::msg::ScanDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanDescriptor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->scan != other.scan) {
      return false;
    }
    if (this->scan_cloud != other.scan_cloud) {
      return false;
    }
    if (this->global_descriptor != other.global_descriptor) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanDescriptor_

// alias to use template instance with default allocator
using ScanDescriptor =
  rtabmap_msgs::msg::ScanDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_HPP_
