// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__BUILDER_HPP_
#define DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/msg/detail/critic_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace msg
{

namespace builder
{

class Init_CriticScore_scale
{
public:
  explicit Init_CriticScore_scale(::dwb_msgs::msg::CriticScore & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::msg::CriticScore scale(::dwb_msgs::msg::CriticScore::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::msg::CriticScore msg_;
};

class Init_CriticScore_raw_score
{
public:
  explicit Init_CriticScore_raw_score(::dwb_msgs::msg::CriticScore & msg)
  : msg_(msg)
  {}
  Init_CriticScore_scale raw_score(::dwb_msgs::msg::CriticScore::_raw_score_type arg)
  {
    msg_.raw_score = std::move(arg);
    return Init_CriticScore_scale(msg_);
  }

private:
  ::dwb_msgs::msg::CriticScore msg_;
};

class Init_CriticScore_name
{
public:
  Init_CriticScore_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CriticScore_raw_score name(::dwb_msgs::msg::CriticScore::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CriticScore_raw_score(msg_);
  }

private:
  ::dwb_msgs::msg::CriticScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::msg::CriticScore>()
{
  return dwb_msgs::msg::builder::Init_CriticScore_name();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__BUILDER_HPP_
