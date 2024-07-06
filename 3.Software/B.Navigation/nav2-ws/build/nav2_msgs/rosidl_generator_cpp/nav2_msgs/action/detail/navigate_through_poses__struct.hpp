// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:action/NavigateThroughPoses.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_HPP_
#define NAV2_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Goal __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Goal __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_Goal_
{
  using Type = NavigateThroughPoses_Goal_<ContainerAllocator>;

  explicit NavigateThroughPoses_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  explicit NavigateThroughPoses_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_tree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _poses_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _poses_type poses;
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Goal
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Goal
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_Goal_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_Goal_

// alias to use template instance with default allocator
using NavigateThroughPoses_Goal =
  nav2_msgs::action::NavigateThroughPoses_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Result __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Result __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_Result_
{
  using Type = NavigateThroughPoses_Result_<ContainerAllocator>;

  explicit NavigateThroughPoses_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit NavigateThroughPoses_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Result
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Result
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_Result_

// alias to use template instance with default allocator
using NavigateThroughPoses_Result =
  nav2_msgs::action::NavigateThroughPoses_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Feedback __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_Feedback_
{
  using Type = NavigateThroughPoses_Feedback_<ContainerAllocator>;

  explicit NavigateThroughPoses_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    navigation_time(_init),
    estimated_time_remaining(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
      this->number_of_poses_remaining = 0;
    }
  }

  explicit NavigateThroughPoses_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    navigation_time(_alloc, _init),
    estimated_time_remaining(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
      this->number_of_poses_remaining = 0;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _navigation_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _navigation_time_type navigation_time;
  using _estimated_time_remaining_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _estimated_time_remaining_type estimated_time_remaining;
  using _number_of_recoveries_type =
    int16_t;
  _number_of_recoveries_type number_of_recoveries;
  using _distance_remaining_type =
    float;
  _distance_remaining_type distance_remaining;
  using _number_of_poses_remaining_type =
    int16_t;
  _number_of_poses_remaining_type number_of_poses_remaining;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__number_of_recoveries(
    const int16_t & _arg)
  {
    this->number_of_recoveries = _arg;
    return *this;
  }
  Type & set__distance_remaining(
    const float & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }
  Type & set__number_of_poses_remaining(
    const int16_t & _arg)
  {
    this->number_of_poses_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Feedback
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_Feedback
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->number_of_recoveries != other.number_of_recoveries) {
      return false;
    }
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    if (this->number_of_poses_remaining != other.number_of_poses_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_Feedback_

// alias to use template instance with default allocator
using NavigateThroughPoses_Feedback =
  nav2_msgs::action::NavigateThroughPoses_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "nav2_msgs/action/detail/navigate_through_poses__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_SendGoal_Request_
{
  using Type = NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateThroughPoses_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateThroughPoses_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const nav2_msgs::action::NavigateThroughPoses_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Request
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Request
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateThroughPoses_SendGoal_Request =
  nav2_msgs::action::NavigateThroughPoses_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_SendGoal_Response_
{
  using Type = NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateThroughPoses_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateThroughPoses_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Response
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_SendGoal_Response
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateThroughPoses_SendGoal_Response =
  nav2_msgs::action::NavigateThroughPoses_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace action
{

struct NavigateThroughPoses_SendGoal
{
  using Request = nav2_msgs::action::NavigateThroughPoses_SendGoal_Request;
  using Response = nav2_msgs::action::NavigateThroughPoses_SendGoal_Response;
};

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_GetResult_Request_
{
  using Type = NavigateThroughPoses_GetResult_Request_<ContainerAllocator>;

  explicit NavigateThroughPoses_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateThroughPoses_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Request
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Request
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_GetResult_Request_

// alias to use template instance with default allocator
using NavigateThroughPoses_GetResult_Request =
  nav2_msgs::action::NavigateThroughPoses_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/navigate_through_poses__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_GetResult_Response_
{
  using Type = NavigateThroughPoses_GetResult_Response_<ContainerAllocator>;

  explicit NavigateThroughPoses_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateThroughPoses_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const nav2_msgs::action::NavigateThroughPoses_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Response
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_GetResult_Response
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_GetResult_Response_

// alias to use template instance with default allocator
using NavigateThroughPoses_GetResult_Response =
  nav2_msgs::action::NavigateThroughPoses_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace action
{

struct NavigateThroughPoses_GetResult
{
  using Request = nav2_msgs::action::NavigateThroughPoses_GetResult_Request;
  using Response = nav2_msgs::action::NavigateThroughPoses_GetResult_Response;
};

}  // namespace action

}  // namespace nav2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/navigate_through_poses__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__action__NavigateThroughPoses_FeedbackMessage __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateThroughPoses_FeedbackMessage_
{
  using Type = NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateThroughPoses_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateThroughPoses_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const nav2_msgs::action::NavigateThroughPoses_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_FeedbackMessage
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__action__NavigateThroughPoses_FeedbackMessage
    std::shared_ptr<nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateThroughPoses_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateThroughPoses_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateThroughPoses_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateThroughPoses_FeedbackMessage =
  nav2_msgs::action::NavigateThroughPoses_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nav2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace nav2_msgs
{

namespace action
{

struct NavigateThroughPoses
{
  /// The goal message defined in the action definition.
  using Goal = nav2_msgs::action::NavigateThroughPoses_Goal;
  /// The result message defined in the action definition.
  using Result = nav2_msgs::action::NavigateThroughPoses_Result;
  /// The feedback message defined in the action definition.
  using Feedback = nav2_msgs::action::NavigateThroughPoses_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = nav2_msgs::action::NavigateThroughPoses_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = nav2_msgs::action::NavigateThroughPoses_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = nav2_msgs::action::NavigateThroughPoses_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateThroughPoses NavigateThroughPoses;

}  // namespace action

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_HPP_
