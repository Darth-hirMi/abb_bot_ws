// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abbbot_msgs:action/AbbbotTask.idl
// generated code does not contain a copyright notice
#include "abbbot_msgs/action/detail/abbbot_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abbbot_msgs__action__AbbbotTask_Goal__init(abbbot_msgs__action__AbbbotTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_munber
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Goal__fini(abbbot_msgs__action__AbbbotTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_munber
}

bool
abbbot_msgs__action__AbbbotTask_Goal__are_equal(const abbbot_msgs__action__AbbbotTask_Goal * lhs, const abbbot_msgs__action__AbbbotTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_munber
  if (lhs->task_munber != rhs->task_munber) {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Goal__copy(
  const abbbot_msgs__action__AbbbotTask_Goal * input,
  abbbot_msgs__action__AbbbotTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_munber
  output->task_munber = input->task_munber;
  return true;
}

abbbot_msgs__action__AbbbotTask_Goal *
abbbot_msgs__action__AbbbotTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Goal * msg = (abbbot_msgs__action__AbbbotTask_Goal *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_Goal));
  bool success = abbbot_msgs__action__AbbbotTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_Goal__destroy(abbbot_msgs__action__AbbbotTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_Goal__Sequence__init(abbbot_msgs__action__AbbbotTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Goal * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_Goal *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Goal__Sequence__fini(abbbot_msgs__action__AbbbotTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_Goal__Sequence *
abbbot_msgs__action__AbbbotTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Goal__Sequence * array = (abbbot_msgs__action__AbbbotTask_Goal__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_Goal__Sequence__destroy(abbbot_msgs__action__AbbbotTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_Goal__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_Goal__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Goal__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_Goal__Sequence * input,
  abbbot_msgs__action__AbbbotTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_Goal * data =
      (abbbot_msgs__action__AbbbotTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
abbbot_msgs__action__AbbbotTask_Result__init(abbbot_msgs__action__AbbbotTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Result__fini(abbbot_msgs__action__AbbbotTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
abbbot_msgs__action__AbbbotTask_Result__are_equal(const abbbot_msgs__action__AbbbotTask_Result * lhs, const abbbot_msgs__action__AbbbotTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Result__copy(
  const abbbot_msgs__action__AbbbotTask_Result * input,
  abbbot_msgs__action__AbbbotTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

abbbot_msgs__action__AbbbotTask_Result *
abbbot_msgs__action__AbbbotTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Result * msg = (abbbot_msgs__action__AbbbotTask_Result *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_Result));
  bool success = abbbot_msgs__action__AbbbotTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_Result__destroy(abbbot_msgs__action__AbbbotTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_Result__Sequence__init(abbbot_msgs__action__AbbbotTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Result * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_Result *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Result__Sequence__fini(abbbot_msgs__action__AbbbotTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_Result__Sequence *
abbbot_msgs__action__AbbbotTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Result__Sequence * array = (abbbot_msgs__action__AbbbotTask_Result__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_Result__Sequence__destroy(abbbot_msgs__action__AbbbotTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_Result__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_Result__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Result__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_Result__Sequence * input,
  abbbot_msgs__action__AbbbotTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_Result * data =
      (abbbot_msgs__action__AbbbotTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
abbbot_msgs__action__AbbbotTask_Feedback__init(abbbot_msgs__action__AbbbotTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Feedback__fini(abbbot_msgs__action__AbbbotTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
abbbot_msgs__action__AbbbotTask_Feedback__are_equal(const abbbot_msgs__action__AbbbotTask_Feedback * lhs, const abbbot_msgs__action__AbbbotTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Feedback__copy(
  const abbbot_msgs__action__AbbbotTask_Feedback * input,
  abbbot_msgs__action__AbbbotTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

abbbot_msgs__action__AbbbotTask_Feedback *
abbbot_msgs__action__AbbbotTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Feedback * msg = (abbbot_msgs__action__AbbbotTask_Feedback *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_Feedback));
  bool success = abbbot_msgs__action__AbbbotTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_Feedback__destroy(abbbot_msgs__action__AbbbotTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__init(abbbot_msgs__action__AbbbotTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Feedback * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_Feedback *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__fini(abbbot_msgs__action__AbbbotTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_Feedback__Sequence *
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_Feedback__Sequence * array = (abbbot_msgs__action__AbbbotTask_Feedback__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__destroy(abbbot_msgs__action__AbbbotTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_Feedback__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_Feedback__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_Feedback__Sequence * input,
  abbbot_msgs__action__AbbbotTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_Feedback * data =
      (abbbot_msgs__action__AbbbotTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "abbbot_msgs/action/detail/abbbot_task__functions.h"

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__init(abbbot_msgs__action__AbbbotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!abbbot_msgs__action__AbbbotTask_Goal__init(&msg->goal)) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(abbbot_msgs__action__AbbbotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  abbbot_msgs__action__AbbbotTask_Goal__fini(&msg->goal);
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__are_equal(const abbbot_msgs__action__AbbbotTask_SendGoal_Request * lhs, const abbbot_msgs__action__AbbbotTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!abbbot_msgs__action__AbbbotTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__copy(
  const abbbot_msgs__action__AbbbotTask_SendGoal_Request * input,
  abbbot_msgs__action__AbbbotTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!abbbot_msgs__action__AbbbotTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

abbbot_msgs__action__AbbbotTask_SendGoal_Request *
abbbot_msgs__action__AbbbotTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Request * msg = (abbbot_msgs__action__AbbbotTask_SendGoal_Request *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Request));
  bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Request__destroy(abbbot_msgs__action__AbbbotTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__init(abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__fini(abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence *
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * array = (abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__destroy(abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * input,
  abbbot_msgs__action__AbbbotTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_SendGoal_Request * data =
      (abbbot_msgs__action__AbbbotTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__init(abbbot_msgs__action__AbbbotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(abbbot_msgs__action__AbbbotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__are_equal(const abbbot_msgs__action__AbbbotTask_SendGoal_Response * lhs, const abbbot_msgs__action__AbbbotTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__copy(
  const abbbot_msgs__action__AbbbotTask_SendGoal_Response * input,
  abbbot_msgs__action__AbbbotTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

abbbot_msgs__action__AbbbotTask_SendGoal_Response *
abbbot_msgs__action__AbbbotTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Response * msg = (abbbot_msgs__action__AbbbotTask_SendGoal_Response *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Response));
  bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Response__destroy(abbbot_msgs__action__AbbbotTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__init(abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__fini(abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence *
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * array = (abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__destroy(abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * input,
  abbbot_msgs__action__AbbbotTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_SendGoal_Response * data =
      (abbbot_msgs__action__AbbbotTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__init(abbbot_msgs__action__AbbbotTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(abbbot_msgs__action__AbbbotTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__are_equal(const abbbot_msgs__action__AbbbotTask_GetResult_Request * lhs, const abbbot_msgs__action__AbbbotTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__copy(
  const abbbot_msgs__action__AbbbotTask_GetResult_Request * input,
  abbbot_msgs__action__AbbbotTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

abbbot_msgs__action__AbbbotTask_GetResult_Request *
abbbot_msgs__action__AbbbotTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Request * msg = (abbbot_msgs__action__AbbbotTask_GetResult_Request *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Request));
  bool success = abbbot_msgs__action__AbbbotTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Request__destroy(abbbot_msgs__action__AbbbotTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__init(abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Request * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__fini(abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence *
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * array = (abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__destroy(abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * input,
  abbbot_msgs__action__AbbbotTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_GetResult_Request * data =
      (abbbot_msgs__action__AbbbotTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "abbbot_msgs/action/detail/abbbot_task__functions.h"

bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__init(abbbot_msgs__action__AbbbotTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!abbbot_msgs__action__AbbbotTask_Result__init(&msg->result)) {
    abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(abbbot_msgs__action__AbbbotTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  abbbot_msgs__action__AbbbotTask_Result__fini(&msg->result);
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__are_equal(const abbbot_msgs__action__AbbbotTask_GetResult_Response * lhs, const abbbot_msgs__action__AbbbotTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!abbbot_msgs__action__AbbbotTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__copy(
  const abbbot_msgs__action__AbbbotTask_GetResult_Response * input,
  abbbot_msgs__action__AbbbotTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!abbbot_msgs__action__AbbbotTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

abbbot_msgs__action__AbbbotTask_GetResult_Response *
abbbot_msgs__action__AbbbotTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Response * msg = (abbbot_msgs__action__AbbbotTask_GetResult_Response *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Response));
  bool success = abbbot_msgs__action__AbbbotTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Response__destroy(abbbot_msgs__action__AbbbotTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__init(abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Response * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__fini(abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence *
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * array = (abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__destroy(abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * input,
  abbbot_msgs__action__AbbbotTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_GetResult_Response * data =
      (abbbot_msgs__action__AbbbotTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "abbbot_msgs/action/detail/abbbot_task__functions.h"

bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__init(abbbot_msgs__action__AbbbotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!abbbot_msgs__action__AbbbotTask_Feedback__init(&msg->feedback)) {
    abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(abbbot_msgs__action__AbbbotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  abbbot_msgs__action__AbbbotTask_Feedback__fini(&msg->feedback);
}

bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__are_equal(const abbbot_msgs__action__AbbbotTask_FeedbackMessage * lhs, const abbbot_msgs__action__AbbbotTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!abbbot_msgs__action__AbbbotTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__copy(
  const abbbot_msgs__action__AbbbotTask_FeedbackMessage * input,
  abbbot_msgs__action__AbbbotTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!abbbot_msgs__action__AbbbotTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

abbbot_msgs__action__AbbbotTask_FeedbackMessage *
abbbot_msgs__action__AbbbotTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_FeedbackMessage * msg = (abbbot_msgs__action__AbbbotTask_FeedbackMessage *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abbbot_msgs__action__AbbbotTask_FeedbackMessage));
  bool success = abbbot_msgs__action__AbbbotTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abbbot_msgs__action__AbbbotTask_FeedbackMessage__destroy(abbbot_msgs__action__AbbbotTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__init(abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (abbbot_msgs__action__AbbbotTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(abbbot_msgs__action__AbbbotTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abbbot_msgs__action__AbbbotTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__fini(abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence *
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * array = (abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__destroy(abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__are_equal(const abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * lhs, const abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence__copy(
  const abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * input,
  abbbot_msgs__action__AbbbotTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abbbot_msgs__action__AbbbotTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abbbot_msgs__action__AbbbotTask_FeedbackMessage * data =
      (abbbot_msgs__action__AbbbotTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abbbot_msgs__action__AbbbotTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abbbot_msgs__action__AbbbotTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abbbot_msgs__action__AbbbotTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
