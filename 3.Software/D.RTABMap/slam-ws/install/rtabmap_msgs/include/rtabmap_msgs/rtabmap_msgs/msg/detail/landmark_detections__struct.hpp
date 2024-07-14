// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_HPP_

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
// Member 'landmarks'
#include "rtabmap_msgs/msg/detail/landmark_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__LandmarkDetections __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__LandmarkDetections __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarkDetections_
{
  using Type = LandmarkDetections_<ContainerAllocator>;

  explicit LandmarkDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LandmarkDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _landmarks_type =
    std::vector<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>>>;
  _landmarks_type landmarks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__landmarks(
    const std::vector<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::LandmarkDetection_<ContainerAllocator>>> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__LandmarkDetections
    std::shared_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__LandmarkDetections
    std::shared_ptr<rtabmap_msgs::msg::LandmarkDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarkDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarkDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarkDetections_

// alias to use template instance with default allocator
using LandmarkDetections =
  rtabmap_msgs::msg::LandmarkDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__LANDMARK_DETECTIONS__STRUCT_HPP_
