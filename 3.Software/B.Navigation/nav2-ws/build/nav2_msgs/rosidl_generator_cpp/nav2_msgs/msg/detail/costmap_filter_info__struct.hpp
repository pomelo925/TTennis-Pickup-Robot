// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CostmapFilterInfo.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CostmapFilterInfo __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CostmapFilterInfo __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CostmapFilterInfo_
{
  using Type = CostmapFilterInfo_<ContainerAllocator>;

  explicit CostmapFilterInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->filter_mask_topic = "";
      this->base = 0.0f;
      this->multiplier = 0.0f;
    }
  }

  explicit CostmapFilterInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    filter_mask_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->filter_mask_topic = "";
      this->base = 0.0f;
      this->multiplier = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    uint8_t;
  _type_type type;
  using _filter_mask_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filter_mask_topic_type filter_mask_topic;
  using _base_type =
    float;
  _base_type base;
  using _multiplier_type =
    float;
  _multiplier_type multiplier;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__filter_mask_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filter_mask_topic = _arg;
    return *this;
  }
  Type & set__base(
    const float & _arg)
  {
    this->base = _arg;
    return *this;
  }
  Type & set__multiplier(
    const float & _arg)
  {
    this->multiplier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CostmapFilterInfo
    std::shared_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CostmapFilterInfo
    std::shared_ptr<nav2_msgs::msg::CostmapFilterInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CostmapFilterInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->filter_mask_topic != other.filter_mask_topic) {
      return false;
    }
    if (this->base != other.base) {
      return false;
    }
    if (this->multiplier != other.multiplier) {
      return false;
    }
    return true;
  }
  bool operator!=(const CostmapFilterInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CostmapFilterInfo_

// alias to use template instance with default allocator
using CostmapFilterInfo =
  nav2_msgs::msg::CostmapFilterInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__STRUCT_HPP_
