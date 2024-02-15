// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abbbot_msgs:action/AbbbotTask.idl
// generated code does not contain a copyright notice

#ifndef ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__BUILDER_HPP_
#define ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abbbot_msgs/action/detail/abbbot_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_Goal_task_munber
{
public:
  Init_AbbbotTask_Goal_task_munber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abbbot_msgs::action::AbbbotTask_Goal task_munber(::abbbot_msgs::action::AbbbotTask_Goal::_task_munber_type arg)
  {
    msg_.task_munber = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_Goal>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_Goal_task_munber();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_Result_success
{
public:
  Init_AbbbotTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abbbot_msgs::action::AbbbotTask_Result success(::abbbot_msgs::action::AbbbotTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_Result>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_Result_success();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_Feedback_percentage
{
public:
  Init_AbbbotTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abbbot_msgs::action::AbbbotTask_Feedback percentage(::abbbot_msgs::action::AbbbotTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_Feedback>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_Feedback_percentage();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_SendGoal_Request_goal
{
public:
  explicit Init_AbbbotTask_SendGoal_Request_goal(::abbbot_msgs::action::AbbbotTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Request goal(::abbbot_msgs::action::AbbbotTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Request msg_;
};

class Init_AbbbotTask_SendGoal_Request_goal_id
{
public:
  Init_AbbbotTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbbotTask_SendGoal_Request_goal goal_id(::abbbot_msgs::action::AbbbotTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AbbbotTask_SendGoal_Request_goal(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_SendGoal_Request>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_SendGoal_Request_goal_id();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_SendGoal_Response_stamp
{
public:
  explicit Init_AbbbotTask_SendGoal_Response_stamp(::abbbot_msgs::action::AbbbotTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Response stamp(::abbbot_msgs::action::AbbbotTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Response msg_;
};

class Init_AbbbotTask_SendGoal_Response_accepted
{
public:
  Init_AbbbotTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbbotTask_SendGoal_Response_stamp accepted(::abbbot_msgs::action::AbbbotTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AbbbotTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_SendGoal_Response>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_SendGoal_Response_accepted();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_GetResult_Request_goal_id
{
public:
  Init_AbbbotTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abbbot_msgs::action::AbbbotTask_GetResult_Request goal_id(::abbbot_msgs::action::AbbbotTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_GetResult_Request>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_GetResult_Request_goal_id();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_GetResult_Response_result
{
public:
  explicit Init_AbbbotTask_GetResult_Response_result(::abbbot_msgs::action::AbbbotTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::abbbot_msgs::action::AbbbotTask_GetResult_Response result(::abbbot_msgs::action::AbbbotTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_GetResult_Response msg_;
};

class Init_AbbbotTask_GetResult_Response_status
{
public:
  Init_AbbbotTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbbotTask_GetResult_Response_result status(::abbbot_msgs::action::AbbbotTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AbbbotTask_GetResult_Response_result(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_GetResult_Response>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_GetResult_Response_status();
}

}  // namespace abbbot_msgs


namespace abbbot_msgs
{

namespace action
{

namespace builder
{

class Init_AbbbotTask_FeedbackMessage_feedback
{
public:
  explicit Init_AbbbotTask_FeedbackMessage_feedback(::abbbot_msgs::action::AbbbotTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::abbbot_msgs::action::AbbbotTask_FeedbackMessage feedback(::abbbot_msgs::action::AbbbotTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_FeedbackMessage msg_;
};

class Init_AbbbotTask_FeedbackMessage_goal_id
{
public:
  Init_AbbbotTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbbbotTask_FeedbackMessage_feedback goal_id(::abbbot_msgs::action::AbbbotTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AbbbotTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::abbbot_msgs::action::AbbbotTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::abbbot_msgs::action::AbbbotTask_FeedbackMessage>()
{
  return abbbot_msgs::action::builder::Init_AbbbotTask_FeedbackMessage_goal_id();
}

}  // namespace abbbot_msgs

#endif  // ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__BUILDER_HPP_
