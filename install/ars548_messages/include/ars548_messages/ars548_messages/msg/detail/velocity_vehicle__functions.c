// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/VelocityVehicle.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/velocity_vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__VelocityVehicle__init(ars548_messages__msg__VelocityVehicle * msg)
{
  if (!msg) {
    return false;
  }
  // statusvelocitynearstandstill
  // qualifiervelocityvehicle
  // velocityvehicleeventdataqualifier
  // velocityvehicle
  // velocityvehicle_invalidflag
  return true;
}

void
ars548_messages__msg__VelocityVehicle__fini(ars548_messages__msg__VelocityVehicle * msg)
{
  if (!msg) {
    return;
  }
  // statusvelocitynearstandstill
  // qualifiervelocityvehicle
  // velocityvehicleeventdataqualifier
  // velocityvehicle
  // velocityvehicle_invalidflag
}

bool
ars548_messages__msg__VelocityVehicle__are_equal(const ars548_messages__msg__VelocityVehicle * lhs, const ars548_messages__msg__VelocityVehicle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // statusvelocitynearstandstill
  if (lhs->statusvelocitynearstandstill != rhs->statusvelocitynearstandstill) {
    return false;
  }
  // qualifiervelocityvehicle
  if (lhs->qualifiervelocityvehicle != rhs->qualifiervelocityvehicle) {
    return false;
  }
  // velocityvehicleeventdataqualifier
  if (lhs->velocityvehicleeventdataqualifier != rhs->velocityvehicleeventdataqualifier) {
    return false;
  }
  // velocityvehicle
  if (lhs->velocityvehicle != rhs->velocityvehicle) {
    return false;
  }
  // velocityvehicle_invalidflag
  if (lhs->velocityvehicle_invalidflag != rhs->velocityvehicle_invalidflag) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__VelocityVehicle__copy(
  const ars548_messages__msg__VelocityVehicle * input,
  ars548_messages__msg__VelocityVehicle * output)
{
  if (!input || !output) {
    return false;
  }
  // statusvelocitynearstandstill
  output->statusvelocitynearstandstill = input->statusvelocitynearstandstill;
  // qualifiervelocityvehicle
  output->qualifiervelocityvehicle = input->qualifiervelocityvehicle;
  // velocityvehicleeventdataqualifier
  output->velocityvehicleeventdataqualifier = input->velocityvehicleeventdataqualifier;
  // velocityvehicle
  output->velocityvehicle = input->velocityvehicle;
  // velocityvehicle_invalidflag
  output->velocityvehicle_invalidflag = input->velocityvehicle_invalidflag;
  return true;
}

ars548_messages__msg__VelocityVehicle *
ars548_messages__msg__VelocityVehicle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__VelocityVehicle * msg = (ars548_messages__msg__VelocityVehicle *)allocator.allocate(sizeof(ars548_messages__msg__VelocityVehicle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__VelocityVehicle));
  bool success = ars548_messages__msg__VelocityVehicle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__VelocityVehicle__destroy(ars548_messages__msg__VelocityVehicle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__VelocityVehicle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__VelocityVehicle__Sequence__init(ars548_messages__msg__VelocityVehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__VelocityVehicle * data = NULL;

  if (size) {
    data = (ars548_messages__msg__VelocityVehicle *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__VelocityVehicle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__VelocityVehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__VelocityVehicle__fini(&data[i - 1]);
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
ars548_messages__msg__VelocityVehicle__Sequence__fini(ars548_messages__msg__VelocityVehicle__Sequence * array)
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
      ars548_messages__msg__VelocityVehicle__fini(&array->data[i]);
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

ars548_messages__msg__VelocityVehicle__Sequence *
ars548_messages__msg__VelocityVehicle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__VelocityVehicle__Sequence * array = (ars548_messages__msg__VelocityVehicle__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__VelocityVehicle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__VelocityVehicle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__VelocityVehicle__Sequence__destroy(ars548_messages__msg__VelocityVehicle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__VelocityVehicle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__VelocityVehicle__Sequence__are_equal(const ars548_messages__msg__VelocityVehicle__Sequence * lhs, const ars548_messages__msg__VelocityVehicle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__VelocityVehicle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__VelocityVehicle__Sequence__copy(
  const ars548_messages__msg__VelocityVehicle__Sequence * input,
  ars548_messages__msg__VelocityVehicle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__VelocityVehicle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__VelocityVehicle * data =
      (ars548_messages__msg__VelocityVehicle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__VelocityVehicle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__VelocityVehicle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__VelocityVehicle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
