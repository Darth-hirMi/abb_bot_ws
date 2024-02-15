// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_bot_msgs:action/AbbBotTask.idl
// generated code does not contain a copyright notice

#ifndef ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__TRAITS_HPP_
#define ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_number
  {
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_Goal & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_Goal>()
{
  return "abb_bot_msgs::action::AbbBotTask_Goal";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_Goal>()
{
  return "abb_bot_msgs/action/AbbBotTask_Goal";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_Result & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_Result>()
{
  return "abb_bot_msgs::action::AbbBotTask_Result";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_Result>()
{
  return "abb_bot_msgs/action/AbbBotTask_Result";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: percentage
  {
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_Feedback & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_Feedback>()
{
  return "abb_bot_msgs::action::AbbBotTask_Feedback";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_Feedback>()
{
  return "abb_bot_msgs/action/AbbBotTask_Feedback";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "abb_bot_msgs/action/detail/abb_bot_task__traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_SendGoal_Request & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>()
{
  return "abb_bot_msgs::action::AbbBotTask_SendGoal_Request";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>()
{
  return "abb_bot_msgs/action/AbbBotTask_SendGoal_Request";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<abb_bot_msgs::action::AbbBotTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<abb_bot_msgs::action::AbbBotTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_SendGoal_Response & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>()
{
  return "abb_bot_msgs::action::AbbBotTask_SendGoal_Response";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>()
{
  return "abb_bot_msgs/action/AbbBotTask_SendGoal_Response";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_SendGoal>()
{
  return "abb_bot_msgs::action::AbbBotTask_SendGoal";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_SendGoal>()
{
  return "abb_bot_msgs/action/AbbBotTask_SendGoal";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>::value &&
    has_fixed_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>::value &&
    has_bounded_size<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<abb_bot_msgs::action::AbbBotTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_GetResult_Request & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_GetResult_Request>()
{
  return "abb_bot_msgs::action::AbbBotTask_GetResult_Request";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_GetResult_Request>()
{
  return "abb_bot_msgs/action/AbbBotTask_GetResult_Request";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_GetResult_Response & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_GetResult_Response>()
{
  return "abb_bot_msgs::action::AbbBotTask_GetResult_Response";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_GetResult_Response>()
{
  return "abb_bot_msgs/action/AbbBotTask_GetResult_Response";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<abb_bot_msgs::action::AbbBotTask_Result>::value> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<abb_bot_msgs::action::AbbBotTask_Result>::value> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_GetResult>()
{
  return "abb_bot_msgs::action::AbbBotTask_GetResult";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_GetResult>()
{
  return "abb_bot_msgs/action/AbbBotTask_GetResult";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<abb_bot_msgs::action::AbbBotTask_GetResult_Request>::value &&
    has_fixed_size<abb_bot_msgs::action::AbbBotTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<abb_bot_msgs::action::AbbBotTask_GetResult_Request>::value &&
    has_bounded_size<abb_bot_msgs::action::AbbBotTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<abb_bot_msgs::action::AbbBotTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<abb_bot_msgs::action::AbbBotTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<abb_bot_msgs::action::AbbBotTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__traits.hpp"

namespace abb_bot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AbbBotTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbbBotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbbBotTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace abb_bot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_bot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_bot_msgs::action::AbbBotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_bot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_bot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const abb_bot_msgs::action::AbbBotTask_FeedbackMessage & msg)
{
  return abb_bot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>()
{
  return "abb_bot_msgs::action::AbbBotTask_FeedbackMessage";
}

template<>
inline const char * name<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>()
{
  return "abb_bot_msgs/action/AbbBotTask_FeedbackMessage";
}

template<>
struct has_fixed_size<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<abb_bot_msgs::action::AbbBotTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<abb_bot_msgs::action::AbbBotTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<abb_bot_msgs::action::AbbBotTask>
  : std::true_type
{
};

template<>
struct is_action_goal<abb_bot_msgs::action::AbbBotTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<abb_bot_msgs::action::AbbBotTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<abb_bot_msgs::action::AbbBotTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__TRAITS_HPP_
