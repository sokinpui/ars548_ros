// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/characteristic_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__CharacteristicSpeed__init(ars548_messages__msg__CharacteristicSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // characteristicspeederramp
  // qualifiercharacteristicspeed
  // characteristicspeed
  return true;
}

void
ars548_messages__msg__CharacteristicSpeed__fini(ars548_messages__msg__CharacteristicSpeed * msg)
{
  if (!msg) {
    return;
  }
  // characteristicspeederramp
  // qualifiercharacteristicspeed
  // characteristicspeed
}

bool
ars548_messages__msg__CharacteristicSpeed__are_equal(const ars548_messages__msg__CharacteristicSpeed * lhs, const ars548_messages__msg__CharacteristicSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // characteristicspeederramp
  if (lhs->characteristicspeederramp != rhs->characteristicspeederramp) {
    return false;
  }
  // qualifiercharacteristicspeed
  if (lhs->qualifiercharacteristicspeed != rhs->qualifiercharacteristicspeed) {
    return false;
  }
  // characteristicspeed
  if (lhs->characteristicspeed != rhs->characteristicspeed) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__CharacteristicSpeed__copy(
  const ars548_messages__msg__CharacteristicSpeed * input,
  ars548_messages__msg__CharacteristicSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // characteristicspeederramp
  output->characteristicspeederramp = input->characteristicspeederramp;
  // qualifiercharacteristicspeed
  output->qualifiercharacteristicspeed = input->qualifiercharacteristicspeed;
  // characteristicspeed
  output->characteristicspeed = input->characteristicspeed;
  return true;
}

ars548_messages__msg__CharacteristicSpeed *
ars548_messages__msg__CharacteristicSpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__CharacteristicSpeed * msg = (ars548_messages__msg__CharacteristicSpeed *)allocator.allocate(sizeof(ars548_messages__msg__CharacteristicSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__CharacteristicSpeed));
  bool success = ars548_messages__msg__CharacteristicSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__CharacteristicSpeed__destroy(ars548_messages__msg__CharacteristicSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__CharacteristicSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__CharacteristicSpeed__Sequence__init(ars548_messages__msg__CharacteristicSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__CharacteristicSpeed * data = NULL;

  if (size) {
    data = (ars548_messages__msg__CharacteristicSpeed *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__CharacteristicSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__CharacteristicSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__CharacteristicSpeed__fini(&data[i - 1]);
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
ars548_messages__msg__CharacteristicSpeed__Sequence__fini(ars548_messages__msg__CharacteristicSpeed__Sequence * array)
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
      ars548_messages__msg__CharacteristicSpeed__fini(&array->data[i]);
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

ars548_messages__msg__CharacteristicSpeed__Sequence *
ars548_messages__msg__CharacteristicSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__CharacteristicSpeed__Sequence * array = (ars548_messages__msg__CharacteristicSpeed__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__CharacteristicSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__CharacteristicSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__CharacteristicSpeed__Sequence__destroy(ars548_messages__msg__CharacteristicSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__CharacteristicSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__CharacteristicSpeed__Sequence__are_equal(const ars548_messages__msg__CharacteristicSpeed__Sequence * lhs, const ars548_messages__msg__CharacteristicSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__CharacteristicSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__CharacteristicSpeed__Sequence__copy(
  const ars548_messages__msg__CharacteristicSpeed__Sequence * input,
  ars548_messages__msg__CharacteristicSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__CharacteristicSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__CharacteristicSpeed * data =
      (ars548_messages__msg__CharacteristicSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__CharacteristicSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__CharacteristicSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__CharacteristicSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
