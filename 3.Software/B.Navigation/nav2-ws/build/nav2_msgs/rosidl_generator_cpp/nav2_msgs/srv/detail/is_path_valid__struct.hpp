// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsPathValid_Request_
{
  using Type = IsPathValid_Request_<ContainerAllocator>;

  explicit IsPathValid_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    (void)_init;
  }

  explicit IsPathValid_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Request
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Request
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPathValid_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsPathValid_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPathValid_Request_

// alias to use template instance with default allocator
using IsPathValid_Request =
  nav2_msgs::srv::IsPathValid_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsPathValid_Response_
{
  using Type = IsPathValid_Response_<ContainerAllocator>;

  explicit IsPathValid_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
    }
  }

  explicit IsPathValid_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
    }
  }

  // field types and members
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _invalid_pose_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _invalid_pose_indices_type invalid_pose_indices;

  // setters for named parameter idiom
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__invalid_pose_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->invalid_pose_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Response
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Response
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPathValid_Response_ & other) const
  {
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->invalid_pose_indices != other.invalid_pose_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsPathValid_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPathValid_Response_

// alias to use template instance with default allocator
using IsPathValid_Response =
  nav2_msgs::srv::IsPathValid_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct IsPathValid
{
  using Request = nav2_msgs::srv::IsPathValid_Request;
  using Response = nav2_msgs::srv::IsPathValid_Response;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_
