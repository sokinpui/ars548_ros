// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/YawRate.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/yaw_rate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__YawRate__init(ars548_messages__msg__YawRate * msg)
{
  if (!msg) {
    return false;
  }
  // yawrateerramp
  // yawrateerramp_invalidflag
  // qualifieryawrate
  // yawrate
  // yawrate_invalidflag
  // yawrateeventdataqualifier
  return true;
}

void
ars548_messages__msg__YawRate__fini(ars548_messages__msg__YawRate * msg)
{
  if (!msg) {
    return;
  }
  // yawrateerramp
  // yawrateerramp_invalidflag
  // qualifieryawrate
  // yawrate
  // yawrate_invalidflag
  // yawrateeventdataqualifier
}

bool
ars548_messages__msg__YawRate__are_equal(const ars548_messages__msg__YawRate * lhs, const ars548_messages__msg__YawRate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yawrateerramp
  if (lhs->yawrateerramp != rhs->yawrateerramp) {
    return false;
  }
  // yawrateerramp_invalidflag
  if (lhs->yawrateerramp_invalidflag != rhs->yawrateerramp_invalidflag) {
    return false;
  }
  // qualifieryawrate
  if (lhs->qualifieryawrate != rhs->qualifieryawrate) {
    return false;
  }
  // yawrate
  if (lhs->yawrate != rhs->yawrate) {
    return false;
  }
  // yawrate_invalidflag
  if (lhs->yawrate_invalidflag != rhs->yawrate_invalidflag) {
    return false;
  }
  // yawrateeventdataqualifier
  if (lhs->yawrateeventdataqualifier != rhs->yawrateeventdataqualifier) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__YawRate__copy(
  const ars548_messages__msg__YawRate * input,
  ars548_messages__msg__YawRate * output)
{
  if (!input || !output) {
    return false;
  }
  // yawrateerramp
  output->yawrateerramp = input->yawrateerramp;
  // yawrateerramp_invalidflag
  output->yawrateerramp_invalidflag = input->yawrateerramp_invalidflag;
  // qualifieryawrate
  output->qualifieryawrate = input->qualifieryawrate;
  // yawrate
  output->yawrate = input->yawrate;
  // yawrate_invalidflag
  output->yawrate_invalidflag = input->yawrate_invalidflag;
  // yawrateeventdataqualifier
  output->yawrateeventdataqualifier = input->yawrateeventdataqualifier;
  return true;
}

ars548_messages__msg__YawRate *
ars548_messages__msg__YawRate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__YawRate * msg = (ars548_messages__msg__YawRate *)allocator.allocate(sizeof(ars548_messages__msg__YawRate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__YawRate));
  bool success = ars548_messages__msg__YawRate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__YawRate__destroy(ars548_messages__msg__YawRate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__YawRate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__YawRate__Sequence__init(ars548_messages__msg__YawRate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__YawRate * data = NULL;

  if (size) {
    data = (ars548_messages__msg__YawRate *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__YawRate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__YawRate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__YawRate__fini(&data[i - 1]);
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
ars548_messages__msg__YawRate__Sequence__fini(ars548_messages__msg__YawRate__Sequence * array)
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
      ars548_messages__msg__YawRate__fini(&array->data[i]);
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

ars548_messages__msg__YawRate__Sequence *
ars548_messages__msg__YawRate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__YawRate__Sequence * array = (ars548_messages__msg__YawRate__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__YawRate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__YawRate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__YawRate__Sequence__destroy(ars548_messages__msg__YawRate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__YawRate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__YawRate__Sequence__are_equal(const ars548_messages__msg__YawRate__Sequence * lhs, const ars548_messages__msg__YawRate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__YawRate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__YawRate__Sequence__copy(
  const ars548_messages__msg__YawRate__Sequence * input,
  ars548_messages__msg__YawRate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__YawRate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__YawRate * data =
      (ars548_messages__msg__YawRate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__YawRate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__YawRate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__YawRate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
