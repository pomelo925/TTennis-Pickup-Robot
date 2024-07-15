// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/DriveOnHeading.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_Goal_time_allowance
{
public:
  explicit Init_DriveOnHeading_Goal_time_allowance(::nav2_msgs::action::DriveOnHeading_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DriveOnHeading_Goal time_allowance(::nav2_msgs::action::DriveOnHeading_Goal::_time_allowance_type arg)
  {
    msg_.time_allowance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_Goal msg_;
};

class Init_DriveOnHeading_Goal_speed
{
public:
  explicit Init_DriveOnHeading_Goal_speed(::nav2_msgs::action::DriveOnHeading_Goal & msg)
  : msg_(msg)
  {}
  Init_DriveOnHeading_Goal_time_allowance speed(::nav2_msgs::action::DriveOnHeading_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DriveOnHeading_Goal_time_allowance(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_Goal msg_;
};

class Init_DriveOnHeading_Goal_target
{
public:
  Init_DriveOnHeading_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveOnHeading_Goal_speed target(::nav2_msgs::action::DriveOnHeading_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_DriveOnHeading_Goal_speed(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_Goal>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_Goal_target();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_Result_total_elapsed_time
{
public:
  Init_DriveOnHeading_Result_total_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::DriveOnHeading_Result total_elapsed_time(::nav2_msgs::action::DriveOnHeading_Result::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_Result>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_Result_total_elapsed_time();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_Feedback_distance_traveled
{
public:
  Init_DriveOnHeading_Feedback_distance_traveled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::DriveOnHeading_Feedback distance_traveled(::nav2_msgs::action::DriveOnHeading_Feedback::_distance_traveled_type arg)
  {
    msg_.distance_traveled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_Feedback>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_Feedback_distance_traveled();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_SendGoal_Request_goal
{
public:
  explicit Init_DriveOnHeading_SendGoal_Request_goal(::nav2_msgs::action::DriveOnHeading_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Request goal(::nav2_msgs::action::DriveOnHeading_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Request msg_;
};

class Init_DriveOnHeading_SendGoal_Request_goal_id
{
public:
  Init_DriveOnHeading_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveOnHeading_SendGoal_Request_goal goal_id(::nav2_msgs::action::DriveOnHeading_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DriveOnHeading_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_SendGoal_Response_stamp
{
public:
  explicit Init_DriveOnHeading_SendGoal_Response_stamp(::nav2_msgs::action::DriveOnHeading_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Response stamp(::nav2_msgs::action::DriveOnHeading_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Response msg_;
};

class Init_DriveOnHeading_SendGoal_Response_accepted
{
public:
  Init_DriveOnHeading_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveOnHeading_SendGoal_Response_stamp accepted(::nav2_msgs::action::DriveOnHeading_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DriveOnHeading_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_GetResult_Request_goal_id
{
public:
  Init_DriveOnHeading_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::DriveOnHeading_GetResult_Request goal_id(::nav2_msgs::action::DriveOnHeading_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_GetResult_Response_result
{
public:
  explicit Init_DriveOnHeading_GetResult_Response_result(::nav2_msgs::action::DriveOnHeading_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DriveOnHeading_GetResult_Response result(::nav2_msgs::action::DriveOnHeading_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_GetResult_Response msg_;
};

class Init_DriveOnHeading_GetResult_Response_status
{
public:
  Init_DriveOnHeading_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveOnHeading_GetResult_Response_result status(::nav2_msgs::action::DriveOnHeading_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DriveOnHeading_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DriveOnHeading_FeedbackMessage_feedback
{
public:
  explicit Init_DriveOnHeading_FeedbackMessage_feedback(::nav2_msgs::action::DriveOnHeading_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DriveOnHeading_FeedbackMessage feedback(::nav2_msgs::action::DriveOnHeading_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_FeedbackMessage msg_;
};

class Init_DriveOnHeading_FeedbackMessage_goal_id
{
public:
  Init_DriveOnHeading_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveOnHeading_FeedbackMessage_feedback goal_id(::nav2_msgs::action::DriveOnHeading_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DriveOnHeading_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::DriveOnHeading_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DriveOnHeading_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_DriveOnHeading_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__BUILDER_HPP_
