// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__BUILDER_HPP_
#define DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalPlanEvaluation_worst_index
{
public:
  explicit Init_LocalPlanEvaluation_worst_index(::dwb_msgs::msg::LocalPlanEvaluation & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::msg::LocalPlanEvaluation worst_index(::dwb_msgs::msg::LocalPlanEvaluation::_worst_index_type arg)
  {
    msg_.worst_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::msg::LocalPlanEvaluation msg_;
};

class Init_LocalPlanEvaluation_best_index
{
public:
  explicit Init_LocalPlanEvaluation_best_index(::dwb_msgs::msg::LocalPlanEvaluation & msg)
  : msg_(msg)
  {}
  Init_LocalPlanEvaluation_worst_index best_index(::dwb_msgs::msg::LocalPlanEvaluation::_best_index_type arg)
  {
    msg_.best_index = std::move(arg);
    return Init_LocalPlanEvaluation_worst_index(msg_);
  }

private:
  ::dwb_msgs::msg::LocalPlanEvaluation msg_;
};

class Init_LocalPlanEvaluation_twists
{
public:
  explicit Init_LocalPlanEvaluation_twists(::dwb_msgs::msg::LocalPlanEvaluation & msg)
  : msg_(msg)
  {}
  Init_LocalPlanEvaluation_best_index twists(::dwb_msgs::msg::LocalPlanEvaluation::_twists_type arg)
  {
    msg_.twists = std::move(arg);
    return Init_LocalPlanEvaluation_best_index(msg_);
  }

private:
  ::dwb_msgs::msg::LocalPlanEvaluation msg_;
};

class Init_LocalPlanEvaluation_header
{
public:
  Init_LocalPlanEvaluation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanEvaluation_twists header(::dwb_msgs::msg::LocalPlanEvaluation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalPlanEvaluation_twists(msg_);
  }

private:
  ::dwb_msgs::msg::LocalPlanEvaluation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::msg::LocalPlanEvaluation>()
{
  return dwb_msgs::msg::builder::Init_LocalPlanEvaluation_header();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__BUILDER_HPP_
