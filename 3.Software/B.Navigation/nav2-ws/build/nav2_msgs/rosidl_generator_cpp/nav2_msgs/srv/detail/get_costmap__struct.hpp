// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'specs'
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__GetCostmap_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__GetCostmap_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCostmap_Request_
{
  using Type = GetCostmap_Request_<ContainerAllocator>;

  explicit GetCostmap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : specs(_init)
  {
    (void)_init;
  }

  explicit GetCostmap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : specs(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _specs_type =
    nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>;
  _specs_type specs;

  // setters for named parameter idiom
  Type & set__specs(
    const nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> & _arg)
  {
    this->specs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__GetCostmap_Request
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__GetCostmap_Request
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCostmap_Request_ & other) const
  {
    if (this->specs != other.specs) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCostmap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCostmap_Request_

// alias to use template instance with default allocator
using GetCostmap_Request =
  nav2_msgs::srv::GetCostmap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'map'
#include "nav2_msgs/msg/detail/costmap__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__GetCostmap_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__GetCostmap_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCostmap_Response_
{
  using Type = GetCostmap_Response_<ContainerAllocator>;

  explicit GetCostmap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_init)
  {
    (void)_init;
  }

  explicit GetCostmap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _map_type =
    nav2_msgs::msg::Costmap_<ContainerAllocator>;
  _map_type map;

  // setters for named parameter idiom
  Type & set__map(
    const nav2_msgs::msg::Costmap_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__GetCostmap_Response
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__GetCostmap_Response
    std::shared_ptr<nav2_msgs::srv::GetCostmap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCostmap_Response_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCostmap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCostmap_Response_

// alias to use template instance with default allocator
using GetCostmap_Response =
  nav2_msgs::srv::GetCostmap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct GetCostmap
{
  using Request = nav2_msgs::srv::GetCostmap_Request;
  using Response = nav2_msgs::srv::GetCostmap_Response;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_HPP_
