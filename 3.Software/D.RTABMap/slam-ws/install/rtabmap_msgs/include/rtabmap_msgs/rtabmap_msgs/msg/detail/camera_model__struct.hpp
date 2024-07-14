// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
// Member 'local_transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__CameraModel __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__CameraModel __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraModel_
{
  using Type = CameraModel_<ContainerAllocator>;

  explicit CameraModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_info(_init),
    local_transform(_init)
  {
    (void)_init;
  }

  explicit CameraModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_info(_alloc, _init),
    local_transform(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _camera_info_type camera_info;
  using _local_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _local_transform_type local_transform;

  // setters for named parameter idiom
  Type & set__camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->camera_info = _arg;
    return *this;
  }
  Type & set__local_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->local_transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::CameraModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::CameraModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__CameraModel
    std::shared_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__CameraModel
    std::shared_ptr<rtabmap_msgs::msg::CameraModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraModel_ & other) const
  {
    if (this->camera_info != other.camera_info) {
      return false;
    }
    if (this->local_transform != other.local_transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraModel_

// alias to use template instance with default allocator
using CameraModel =
  rtabmap_msgs::msg::CameraModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__STRUCT_HPP_
