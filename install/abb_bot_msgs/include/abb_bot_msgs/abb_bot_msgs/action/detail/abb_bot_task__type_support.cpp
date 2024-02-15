// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from abb_bot_msgs:action/AbbBotTask.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_Goal(_init);
}

void AbbBotTask_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_Goal *>(message_memory);
  typed_message->~AbbBotTask_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_Goal_message_member_array[1] = {
  {
    "task_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_Goal, task_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_Goal_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_Goal",  // message name
  1,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_Goal),
  AbbBotTask_Goal_message_member_array,  // message members
  AbbBotTask_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Goal>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_Goal)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_Result(_init);
}

void AbbBotTask_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_Result *>(message_memory);
  typed_message->~AbbBotTask_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_Result_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_Result_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_Result",  // message name
  1,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_Result),
  AbbBotTask_Result_message_member_array,  // message members
  AbbBotTask_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Result>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_Result)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_Feedback(_init);
}

void AbbBotTask_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_Feedback *>(message_memory);
  typed_message->~AbbBotTask_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_Feedback_message_member_array[1] = {
  {
    "percentage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_Feedback, percentage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_Feedback_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_Feedback",  // message name
  1,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_Feedback),
  AbbBotTask_Feedback_message_member_array,  // message members
  AbbBotTask_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Feedback>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_Feedback)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_SendGoal_Request(_init);
}

void AbbBotTask_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_SendGoal_Request *>(message_memory);
  typed_message->~AbbBotTask_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_SendGoal_Request_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_SendGoal_Request),
  AbbBotTask_SendGoal_Request_message_member_array,  // message members
  AbbBotTask_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_SendGoal_Request>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_SendGoal_Request)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_SendGoal_Response(_init);
}

void AbbBotTask_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_SendGoal_Response *>(message_memory);
  typed_message->~AbbBotTask_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_SendGoal_Response_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_SendGoal_Response),
  AbbBotTask_SendGoal_Response_message_member_array,  // message members
  AbbBotTask_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_SendGoal_Response>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_SendGoal_Response)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AbbBotTask_SendGoal_service_members = {
  "abb_bot_msgs::action",  // service namespace
  "AbbBotTask_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AbbBotTask_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::abb_bot_msgs::action::AbbBotTask_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::abb_bot_msgs::action::AbbBotTask_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_GetResult_Request(_init);
}

void AbbBotTask_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_GetResult_Request *>(message_memory);
  typed_message->~AbbBotTask_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_GetResult_Request_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_GetResult_Request),
  AbbBotTask_GetResult_Request_message_member_array,  // message members
  AbbBotTask_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_GetResult_Request>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_GetResult_Request)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_GetResult_Response(_init);
}

void AbbBotTask_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_GetResult_Response *>(message_memory);
  typed_message->~AbbBotTask_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_GetResult_Response_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_GetResult_Response),
  AbbBotTask_GetResult_Response_message_member_array,  // message members
  AbbBotTask_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_GetResult_Response>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_GetResult_Response)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AbbBotTask_GetResult_service_members = {
  "abb_bot_msgs::action",  // service namespace
  "AbbBotTask_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AbbBotTask_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::abb_bot_msgs::action::AbbBotTask_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::abb_bot_msgs::action::AbbBotTask_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<abb_bot_msgs::action::AbbBotTask_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_bot_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AbbBotTask_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_bot_msgs::action::AbbBotTask_FeedbackMessage(_init);
}

void AbbBotTask_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_bot_msgs::action::AbbBotTask_FeedbackMessage *>(message_memory);
  typed_message->~AbbBotTask_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbbBotTask_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_bot_msgs::action::AbbBotTask_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbbBotTask_FeedbackMessage_message_members = {
  "abb_bot_msgs::action",  // message namespace
  "AbbBotTask_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(abb_bot_msgs::action::AbbBotTask_FeedbackMessage),
  AbbBotTask_FeedbackMessage_message_member_array,  // message members
  AbbBotTask_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AbbBotTask_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbbBotTask_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbbBotTask_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace abb_bot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_bot_msgs::action::AbbBotTask_FeedbackMessage>()
{
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_bot_msgs, action, AbbBotTask_FeedbackMessage)() {
  return &::abb_bot_msgs::action::rosidl_typesupport_introspection_cpp::AbbBotTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
