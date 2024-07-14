// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pt'
#include "rtabmap_msgs/msg/detail/point2f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__KeyPoint __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__KeyPoint __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint_
{
  using Type = KeyPoint_<ContainerAllocator>;

  explicit KeyPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pt(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0.0f;
      this->angle = 0.0f;
      this->response = 0.0f;
      this->octave = 0l;
      this->class_id = 0l;
    }
  }

  explicit KeyPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pt(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0.0f;
      this->angle = 0.0f;
      this->response = 0.0f;
      this->octave = 0l;
      this->class_id = 0l;
    }
  }

  // field types and members
  using _pt_type =
    rtabmap_msgs::msg::Point2f_<ContainerAllocator>;
  _pt_type pt;
  using _size_type =
    float;
  _size_type size;
  using _angle_type =
    float;
  _angle_type angle;
  using _response_type =
    float;
  _response_type response;
  using _octave_type =
    int32_t;
  _octave_type octave;
  using _class_id_type =
    int32_t;
  _class_id_type class_id;

  // setters for named parameter idiom
  Type & set__pt(
    const rtabmap_msgs::msg::Point2f_<ContainerAllocator> & _arg)
  {
    this->pt = _arg;
    return *this;
  }
  Type & set__size(
    const float & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__response(
    const float & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__octave(
    const int32_t & _arg)
  {
    this->octave = _arg;
    return *this;
  }
  Type & set__class_id(
    const int32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__KeyPoint
    std::shared_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__KeyPoint
    std::shared_ptr<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint_ & other) const
  {
    if (this->pt != other.pt) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    if (this->octave != other.octave) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint_

// alias to use template instance with default allocator
using KeyPoint =
  rtabmap_msgs::msg::KeyPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_HPP_
