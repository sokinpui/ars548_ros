// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/acceleration_lateral_co_g__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__AccelerationLateralCoG__init(ars548_messages__msg__AccelerationLateralCoG * msg)
{
  if (!msg) {
    return false;
  }
  // accelerationlateralerramp
  // accelerationlateralerramp_invalidflag
  // qualifieraccelerationlateral
  // accelerationlateral
  // accelerationlateral_invalidflag
  // accelerationlateraleventdataqualifier
  return true;
}

void
ars548_messages__msg__AccelerationLateralCoG__fini(ars548_messages__msg__AccelerationLateralCoG * msg)
{
  if (!msg) {
    return;
  }
  // accelerationlateralerramp
  // accelerationlateralerramp_invalidflag
  // qualifieraccelerationlateral
  // accelerationlateral
  // accelerationlateral_invalidflag
  // accelerationlateraleventdataqualifier
}

bool
ars548_messages__msg__AccelerationLateralCoG__are_equal(const ars548_messages__msg__AccelerationLateralCoG * lhs, const ars548_messages__msg__AccelerationLateralCoG * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accelerationlateralerramp
  if (lhs->accelerationlateralerramp != rhs->accelerationlateralerramp) {
    return false;
  }
  // accelerationlateralerramp_invalidflag
  if (lhs->accelerationlateralerramp_invalidflag != rhs->accelerationlateralerramp_invalidflag) {
    return false;
  }
  // qualifieraccelerationlateral
  if (lhs->qualifieraccelerationlateral != rhs->qualifieraccelerationlateral) {
    return false;
  }
  // accelerationlateral
  if (lhs->accelerationlateral != rhs->accelerationlateral) {
    return false;
  }
  // accelerationlateral_invalidflag
  if (lhs->accelerationlateral_invalidflag != rhs->accelerationlateral_invalidflag) {
    return false;
  }
  // accelerationlateraleventdataqualifier
  if (lhs->accelerationlateraleventdataqualifier != rhs->accelerationlateraleventdataqualifier) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__AccelerationLateralCoG__copy(
  const ars548_messages__msg__AccelerationLateralCoG * input,
  ars548_messages__msg__AccelerationLateralCoG * output)
{
  if (!input || !output) {
    return false;
  }
  // accelerationlateralerramp
  output->accelerationlateralerramp = input->accelerationlateralerramp;
  // accelerationlateralerramp_invalidflag
  output->accelerationlateralerramp_invalidflag = input->accelerationlateralerramp_invalidflag;
  // qualifieraccelerationlateral
  output->qualifieraccelerationlateral = input->qualifieraccelerationlateral;
  // accelerationlateral
  output->accelerationlateral = input->accelerationlateral;
  // accelerationlateral_invalidflag
  output->accelerationlateral_invalidflag = input->accelerationlateral_invalidflag;
  // accelerationlateraleventdataqualifier
  output->accelerationlateraleventdataqualifier = input->accelerationlateraleventdataqualifier;
  return true;
}

ars548_messages__msg__AccelerationLateralCoG *
ars548_messages__msg__AccelerationLateralCoG__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLateralCoG * msg = (ars548_messages__msg__AccelerationLateralCoG *)allocator.allocate(sizeof(ars548_messages__msg__AccelerationLateralCoG), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__AccelerationLateralCoG));
  bool success = ars548_messages__msg__AccelerationLateralCoG__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__AccelerationLateralCoG__destroy(ars548_messages__msg__AccelerationLateralCoG * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__AccelerationLateralCoG__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__AccelerationLateralCoG__Sequence__init(ars548_messages__msg__AccelerationLateralCoG__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLateralCoG * data = NULL;

  if (size) {
    data = (ars548_messages__msg__AccelerationLateralCoG *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__AccelerationLateralCoG), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__AccelerationLateralCoG__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__AccelerationLateralCoG__fini(&data[i - 1]);
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
ars548_messages__msg__AccelerationLateralCoG__Sequence__fini(ars548_messages__msg__AccelerationLateralCoG__Sequence * array)
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
      ars548_messages__msg__AccelerationLateralCoG__fini(&array->data[i]);
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

ars548_messages__msg__AccelerationLateralCoG__Sequence *
ars548_messages__msg__AccelerationLateralCoG__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLateralCoG__Sequence * array = (ars548_messages__msg__AccelerationLateralCoG__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__AccelerationLateralCoG__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__AccelerationLateralCoG__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__AccelerationLateralCoG__Sequence__destroy(ars548_messages__msg__AccelerationLateralCoG__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__AccelerationLateralCoG__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__AccelerationLateralCoG__Sequence__are_equal(const ars548_messages__msg__AccelerationLateralCoG__Sequence * lhs, const ars548_messages__msg__AccelerationLateralCoG__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__AccelerationLateralCoG__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__AccelerationLateralCoG__Sequence__copy(
  const ars548_messages__msg__AccelerationLateralCoG__Sequence * input,
  ars548_messages__msg__AccelerationLateralCoG__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__AccelerationLateralCoG);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__AccelerationLateralCoG * data =
      (ars548_messages__msg__AccelerationLateralCoG *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__AccelerationLateralCoG__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__AccelerationLateralCoG__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__AccelerationLateralCoG__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
