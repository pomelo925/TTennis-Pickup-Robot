// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__STRUCT_HPP_
#define DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__STRUCT_HPP_

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
// Member 'twists'
#include "dwb_msgs/msg/detail/trajectory_score__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__msg__LocalPlanEvaluation __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__msg__LocalPlanEvaluation __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalPlanEvaluation_
{
  using Type = LocalPlanEvaluation_<ContainerAllocator>;

  explicit LocalPlanEvaluation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_index = 0;
      this->worst_index = 0;
    }
  }

  explicit LocalPlanEvaluation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_index = 0;
      this->worst_index = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _twists_type =
    std::vector<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>>;
  _twists_type twists;
  using _best_index_type =
    uint16_t;
  _best_index_type best_index;
  using _worst_index_type =
    uint16_t;
  _worst_index_type worst_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__twists(
    const std::vector<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>> & _arg)
  {
    this->twists = _arg;
    return *this;
  }
  Type & set__best_index(
    const uint16_t & _arg)
  {
    this->best_index = _arg;
    return *this;
  }
  Type & set__worst_index(
    const uint16_t & _arg)
  {
    this->worst_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__msg__LocalPlanEvaluation
    std::shared_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__msg__LocalPlanEvaluation
    std::shared_ptr<dwb_msgs::msg::LocalPlanEvaluation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalPlanEvaluation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->twists != other.twists) {
      return false;
    }
    if (this->best_index != other.best_index) {
      return false;
    }
    if (this->worst_index != other.worst_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalPlanEvaluation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalPlanEvaluation_

// alias to use template instance with default allocator
using LocalPlanEvaluation =
  dwb_msgs::msg::LocalPlanEvaluation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__STRUCT_HPP_
