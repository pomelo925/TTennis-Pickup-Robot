// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/debug_local_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_DebugLocalPlan_Request_global_plan
{
public:
  explicit Init_DebugLocalPlan_Request_global_plan(::dwb_msgs::srv::DebugLocalPlan_Request & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::DebugLocalPlan_Request global_plan(::dwb_msgs::srv::DebugLocalPlan_Request::_global_plan_type arg)
  {
    msg_.global_plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::DebugLocalPlan_Request msg_;
};

class Init_DebugLocalPlan_Request_velocity
{
public:
  explicit Init_DebugLocalPlan_Request_velocity(::dwb_msgs::srv::DebugLocalPlan_Request & msg)
  : msg_(msg)
  {}
  Init_DebugLocalPlan_Request_global_plan velocity(::dwb_msgs::srv::DebugLocalPlan_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DebugLocalPlan_Request_global_plan(msg_);
  }

private:
  ::dwb_msgs::srv::DebugLocalPlan_Request msg_;
};

class Init_DebugLocalPlan_Request_pose
{
public:
  Init_DebugLocalPlan_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugLocalPlan_Request_velocity pose(::dwb_msgs::srv::DebugLocalPlan_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DebugLocalPlan_Request_velocity(msg_);
  }

private:
  ::dwb_msgs::srv::DebugLocalPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::DebugLocalPlan_Request>()
{
  return dwb_msgs::srv::builder::Init_DebugLocalPlan_Request_pose();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_DebugLocalPlan_Response_results
{
public:
  Init_DebugLocalPlan_Response_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::DebugLocalPlan_Response results(::dwb_msgs::srv::DebugLocalPlan_Response::_results_type arg)
  {
    msg_.results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::DebugLocalPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::DebugLocalPlan_Response>()
{
  return dwb_msgs::srv::builder::Init_DebugLocalPlan_Response_results();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__BUILDER_HPP_
