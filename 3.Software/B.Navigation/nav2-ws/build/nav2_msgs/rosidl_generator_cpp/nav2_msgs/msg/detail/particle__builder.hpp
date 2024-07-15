// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/particle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_Particle_weight
{
public:
  explicit Init_Particle_weight(::nav2_msgs::msg::Particle & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::Particle weight(::nav2_msgs::msg::Particle::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::Particle msg_;
};

class Init_Particle_pose
{
public:
  Init_Particle_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Particle_weight pose(::nav2_msgs::msg::Particle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Particle_weight(msg_);
  }

private:
  ::nav2_msgs::msg::Particle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::Particle>()
{
  return nav2_msgs::msg::builder::Init_Particle_pose();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_
