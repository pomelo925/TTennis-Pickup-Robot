// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/AddLink.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'link'
#include "rtabmap_msgs/msg/detail/link__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__AddLink_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__AddLink_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddLink_Request_
{
  using Type = AddLink_Request_<ContainerAllocator>;

  explicit AddLink_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link(_init)
  {
    (void)_init;
  }

  explicit AddLink_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _link_type =
    rtabmap_msgs::msg::Link_<ContainerAllocator>;
  _link_type link;

  // setters for named parameter idiom
  Type & set__link(
    const rtabmap_msgs::msg::Link_<ContainerAllocator> & _arg)
  {
    this->link = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__AddLink_Request
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__AddLink_Request
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddLink_Request_ & other) const
  {
    if (this->link != other.link) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddLink_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddLink_Request_

// alias to use template instance with default allocator
using AddLink_Request =
  rtabmap_msgs::srv::AddLink_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__AddLink_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__AddLink_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddLink_Response_
{
  using Type = AddLink_Response_<ContainerAllocator>;

  explicit AddLink_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AddLink_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__AddLink_Response
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__AddLink_Response
    std::shared_ptr<rtabmap_msgs::srv::AddLink_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddLink_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddLink_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddLink_Response_

// alias to use template instance with default allocator
using AddLink_Response =
  rtabmap_msgs::srv::AddLink_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct AddLink
{
  using Request = rtabmap_msgs::srv::AddLink_Request;
  using Response = rtabmap_msgs::srv::AddLink_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__STRUCT_HPP_
