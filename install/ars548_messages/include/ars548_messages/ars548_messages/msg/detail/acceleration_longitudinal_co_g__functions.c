// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/acceleration_longitudinal_co_g__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__AccelerationLongitudinalCoG__init(ars548_messages__msg__AccelerationLongitudinalCoG * msg)
{
  if (!msg) {
    return false;
  }
  // accelerationlongitudinalerramp
  // accelerationlongitudinalerramp_invalidflag
  // qualifieraccelerationlongitudinal
  // accelerationlongitudinal
  // accelerationlongitudinal_invalidflag
  // accelerationlongitudinaleventdataqualifier
  return true;
}

void
ars548_messages__msg__AccelerationLongitudinalCoG__fini(ars548_messages__msg__AccelerationLongitudinalCoG * msg)
{
  if (!msg) {
    return;
  }
  // accelerationlongitudinalerramp
  // accelerationlongitudinalerramp_invalidflag
  // qualifieraccelerationlongitudinal
  // accelerationlongitudinal
  // accelerationlongitudinal_invalidflag
  // accelerationlongitudinaleventdataqualifier
}

bool
ars548_messages__msg__AccelerationLongitudinalCoG__are_equal(const ars548_messages__msg__AccelerationLongitudinalCoG * lhs, const ars548_messages__msg__AccelerationLongitudinalCoG * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accelerationlongitudinalerramp
  if (lhs->accelerationlongitudinalerramp != rhs->accelerationlongitudinalerramp) {
    return false;
  }
  // accelerationlongitudinalerramp_invalidflag
  if (lhs->accelerationlongitudinalerramp_invalidflag != rhs->accelerationlongitudinalerramp_invalidflag) {
    return false;
  }
  // qualifieraccelerationlongitudinal
  if (lhs->qualifieraccelerationlongitudinal != rhs->qualifieraccelerationlongitudinal) {
    return false;
  }
  // accelerationlongitudinal
  if (lhs->accelerationlongitudinal != rhs->accelerationlongitudinal) {
    return false;
  }
  // accelerationlongitudinal_invalidflag
  if (lhs->accelerationlongitudinal_invalidflag != rhs->accelerationlongitudinal_invalidflag) {
    return false;
  }
  // accelerationlongitudinaleventdataqualifier
  if (lhs->accelerationlongitudinaleventdataqualifier != rhs->accelerationlongitudinaleventdataqualifier) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__AccelerationLongitudinalCoG__copy(
  const ars548_messages__msg__AccelerationLongitudinalCoG * input,
  ars548_messages__msg__AccelerationLongitudinalCoG * output)
{
  if (!input || !output) {
    return false;
  }
  // accelerationlongitudinalerramp
  output->accelerationlongitudinalerramp = input->accelerationlongitudinalerramp;
  // accelerationlongitudinalerramp_invalidflag
  output->accelerationlongitudinalerramp_invalidflag = input->accelerationlongitudinalerramp_invalidflag;
  // qualifieraccelerationlongitudinal
  output->qualifieraccelerationlongitudinal = input->qualifieraccelerationlongitudinal;
  // accelerationlongitudinal
  output->accelerationlongitudinal = input->accelerationlongitudinal;
  // accelerationlongitudinal_invalidflag
  output->accelerationlongitudinal_invalidflag = input->accelerationlongitudinal_invalidflag;
  // accelerationlongitudinaleventdataqualifier
  output->accelerationlongitudinaleventdataqualifier = input->accelerationlongitudinaleventdataqualifier;
  return true;
}

ars548_messages__msg__AccelerationLongitudinalCoG *
ars548_messages__msg__AccelerationLongitudinalCoG__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLongitudinalCoG * msg = (ars548_messages__msg__AccelerationLongitudinalCoG *)allocator.allocate(sizeof(ars548_messages__msg__AccelerationLongitudinalCoG), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__AccelerationLongitudinalCoG));
  bool success = ars548_messages__msg__AccelerationLongitudinalCoG__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__AccelerationLongitudinalCoG__destroy(ars548_messages__msg__AccelerationLongitudinalCoG * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__AccelerationLongitudinalCoG__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__init(ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLongitudinalCoG * data = NULL;

  if (size) {
    data = (ars548_messages__msg__AccelerationLongitudinalCoG *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__AccelerationLongitudinalCoG), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__AccelerationLongitudinalCoG__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__AccelerationLongitudinalCoG__fini(&data[i - 1]);
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
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__fini(ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * array)
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
      ars548_messages__msg__AccelerationLongitudinalCoG__fini(&array->data[i]);
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

ars548_messages__msg__AccelerationLongitudinalCoG__Sequence *
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * array = (ars548_messages__msg__AccelerationLongitudinalCoG__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__AccelerationLongitudinalCoG__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__destroy(ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__are_equal(const ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * lhs, const ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__AccelerationLongitudinalCoG__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__AccelerationLongitudinalCoG__Sequence__copy(
  const ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * input,
  ars548_messages__msg__AccelerationLongitudinalCoG__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__AccelerationLongitudinalCoG);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__AccelerationLongitudinalCoG * data =
      (ars548_messages__msg__AccelerationLongitudinalCoG *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__AccelerationLongitudinalCoG__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__AccelerationLongitudinalCoG__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__AccelerationLongitudinalCoG__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
