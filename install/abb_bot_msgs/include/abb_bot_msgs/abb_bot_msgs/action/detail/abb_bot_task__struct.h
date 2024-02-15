// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_bot_msgs:action/AbbBotTask.idl
// generated code does not contain a copyright notice

#ifndef ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__STRUCT_H_
#define ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_Goal
{
  int32_t task_number;
} abb_bot_msgs__action__AbbBotTask_Goal;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_Goal.
typedef struct abb_bot_msgs__action__AbbBotTask_Goal__Sequence
{
  abb_bot_msgs__action__AbbBotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_Result
{
  bool success;
} abb_bot_msgs__action__AbbBotTask_Result;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_Result.
typedef struct abb_bot_msgs__action__AbbBotTask_Result__Sequence
{
  abb_bot_msgs__action__AbbBotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_Feedback
{
  int32_t percentage;
} abb_bot_msgs__action__AbbBotTask_Feedback;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_Feedback.
typedef struct abb_bot_msgs__action__AbbBotTask_Feedback__Sequence
{
  abb_bot_msgs__action__AbbBotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "abb_bot_msgs/action/detail/abb_bot_task__struct.h"

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  abb_bot_msgs__action__AbbBotTask_Goal goal;
} abb_bot_msgs__action__AbbBotTask_SendGoal_Request;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_SendGoal_Request.
typedef struct abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence
{
  abb_bot_msgs__action__AbbBotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} abb_bot_msgs__action__AbbBotTask_SendGoal_Response;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_SendGoal_Response.
typedef struct abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence
{
  abb_bot_msgs__action__AbbBotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} abb_bot_msgs__action__AbbBotTask_GetResult_Request;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_GetResult_Request.
typedef struct abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence
{
  abb_bot_msgs__action__AbbBotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.h"

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_GetResult_Response
{
  int8_t status;
  abb_bot_msgs__action__AbbBotTask_Result result;
} abb_bot_msgs__action__AbbBotTask_GetResult_Response;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_GetResult_Response.
typedef struct abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence
{
  abb_bot_msgs__action__AbbBotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "abb_bot_msgs/action/detail/abb_bot_task__struct.h"

/// Struct defined in action/AbbBotTask in the package abb_bot_msgs.
typedef struct abb_bot_msgs__action__AbbBotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  abb_bot_msgs__action__AbbBotTask_Feedback feedback;
} abb_bot_msgs__action__AbbBotTask_FeedbackMessage;

// Struct for a sequence of abb_bot_msgs__action__AbbBotTask_FeedbackMessage.
typedef struct abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence
{
  abb_bot_msgs__action__AbbBotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_bot_msgs__action__AbbBotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_BOT_MSGS__ACTION__DETAIL__ABB_BOT_TASK__STRUCT_H_
