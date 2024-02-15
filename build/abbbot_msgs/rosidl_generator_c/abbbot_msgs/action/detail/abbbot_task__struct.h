// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abbbot_msgs:action/AbbbotTask.idl
// generated code does not contain a copyright notice

#ifndef ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__STRUCT_H_
#define ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_Goal
{
  int32_t task_munber;
} abbbot_msgs__action__AbbbotTask_Goal;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_Goal.
typedef struct abbbot_msgs__action__AbbbotTask_Goal__Sequence
{
  abbbot_msgs__action__AbbbotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_Result
{
  bool success;
} abbbot_msgs__action__AbbbotTask_Result;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_Result.
typedef struct abbbot_msgs__action__AbbbotTask_Result__Sequence
{
  abbbot_msgs__action__AbbbotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_Feedback
{
  int32_t percentage;
} abbbot_msgs__action__AbbbotTask_Feedback;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_Feedback.
typedef struct abbbot_msgs__action__AbbbotTask_Feedback__Sequence
{
  abbbot_msgs__action__AbbbotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "abbbot_msgs/action/detail/abbbot_task__struct.h"

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  abbbot_msgs__action__AbbbotTask_Goal goal;
} abbbot_msgs__action__AbbbotTask_SendGoal_Request;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_SendGoal_Request.
typedef struct abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence
{
  abbbot_msgs__action__AbbbotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} abbbot_msgs__action__AbbbotTask_SendGoal_Response;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_SendGoal_Response.
typedef struct abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence
{
  abbbot_msgs__action__AbbbotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} abbbot_msgs__action__AbbbotTask_GetResult_Request;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_GetResult_Request.
typedef struct abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence
{
  abbbot_msgs__action__AbbbotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "abbbot_msgs/action/detail/abbbot_task__struct.h"

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_GetResult_Response
{
  int8_t status;
  abbbot_msgs__action__AbbbotTask_Result result;
} abbbot_msgs__action__AbbbotTask_GetResult_Response;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_GetResult_Response.
typedef struct abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence
{
  abbbot_msgs__action__AbbbotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "abbbot_msgs/action/detail/abbbot_task__struct.h"

/// Struct defined in action/AbbbotTask in the package abbbot_msgs.
typedef struct abbbot_msgs__action__AbbbotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  abbbot_msgs__action__AbbbotTask_Feedback feedback;
} abbbot_msgs__action__AbbbotTask_FeedbackMessage;

// Struct for a sequence of abbbot_msgs__action__AbbbotTask_FeedbackMessage.
typedef struct abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence
{
  abbbot_msgs__action__AbbbotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABBBOT_MSGS__ACTION__DETAIL__ABBBOT_TASK__STRUCT_H_
