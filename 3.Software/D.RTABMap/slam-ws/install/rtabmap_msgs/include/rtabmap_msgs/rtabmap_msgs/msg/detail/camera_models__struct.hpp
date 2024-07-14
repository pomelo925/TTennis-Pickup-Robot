// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'models'
#include "rtabmap_msgs/msg/detail/camera_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__CameraModels __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__CameraModels __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraModels_
{
  using Type = CameraModels_<ContainerAllocator>;

  explicit CameraModels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CameraModels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _models_type =
    std::vector<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>>;
  _models_type models;

  // setters for named parameter idiom
  Type & set__models(
    const std::vector<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::CameraModel_<ContainerAllocator>>> & _arg)
  {
    this->models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::CameraModels_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::CameraModels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__CameraModels
    std::shared_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__CameraModels
    std::shared_ptr<rtabmap_msgs::msg::CameraModels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraModels_ & other) const
  {
    if (this->models != other.models) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraModels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraModels_

// alias to use template instance with default allocator
using CameraModels =
  rtabmap_msgs::msg::CameraModels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODELS__STRUCT_HPP_
