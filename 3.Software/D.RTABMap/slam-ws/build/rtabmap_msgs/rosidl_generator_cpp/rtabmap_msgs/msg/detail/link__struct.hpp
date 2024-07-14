// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__Link __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__Link __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Link_
{
  using Type = Link_<ContainerAllocator>;

  explicit Link_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_id = 0l;
      this->to_id = 0l;
      this->type = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->information.begin(), this->information.end(), 0.0);
    }
  }

  explicit Link_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_alloc, _init),
    information(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_id = 0l;
      this->to_id = 0l;
      this->type = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->information.begin(), this->information.end(), 0.0);
    }
  }

  // field types and members
  using _from_id_type =
    int32_t;
  _from_id_type from_id;
  using _to_id_type =
    int32_t;
  _to_id_type to_id;
  using _type_type =
    int32_t;
  _type_type type;
  using _transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_type transform;
  using _information_type =
    std::array<double, 36>;
  _information_type information;

  // setters for named parameter idiom
  Type & set__from_id(
    const int32_t & _arg)
  {
    this->from_id = _arg;
    return *this;
  }
  Type & set__to_id(
    const int32_t & _arg)
  {
    this->to_id = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__information(
    const std::array<double, 36> & _arg)
  {
    this->information = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::Link_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::Link_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Link_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Link_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__Link
    std::shared_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__Link
    std::shared_ptr<rtabmap_msgs::msg::Link_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Link_ & other) const
  {
    if (this->from_id != other.from_id) {
      return false;
    }
    if (this->to_id != other.to_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->information != other.information) {
      return false;
    }
    return true;
  }
  bool operator!=(const Link_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Link_

// alias to use template instance with default allocator
using Link =
  rtabmap_msgs::msg::Link_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
