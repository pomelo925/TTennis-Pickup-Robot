// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/collision_monitor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionMonitorState_polygon_name
{
public:
  explicit Init_CollisionMonitorState_polygon_name(::nav2_msgs::msg::CollisionMonitorState & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CollisionMonitorState polygon_name(::nav2_msgs::msg::CollisionMonitorState::_polygon_name_type arg)
  {
    msg_.polygon_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CollisionMonitorState msg_;
};

class Init_CollisionMonitorState_action_type
{
public:
  Init_CollisionMonitorState_action_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionMonitorState_polygon_name action_type(::nav2_msgs::msg::CollisionMonitorState::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_CollisionMonitorState_polygon_name(msg_);
  }

private:
  ::nav2_msgs::msg::CollisionMonitorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CollisionMonitorState>()
{
  return nav2_msgs::msg::builder::Init_CollisionMonitorState_action_type();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__BUILDER_HPP_
