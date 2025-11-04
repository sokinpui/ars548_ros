// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/object_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objectlist_objects`
#include "ars548_messages/msg/detail/object__functions.h"

bool
ars548_messages__msg__ObjectList__init(ars548_messages__msg__ObjectList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ars548_messages__msg__ObjectList__fini(msg);
    return false;
  }
  // crc
  // length
  // sqc
  // dataid
  // timestamp_nanoseconds
  // timestamp_seconds
  // timestamp_syncstatus
  // eventdataqualifier
  // extendedqualifier
  // objectlist_numofobjects
  // objectlist_objects
  for (size_t i = 0; i < 50; ++i) {
    if (!ars548_messages__msg__Object__init(&msg->objectlist_objects[i])) {
      ars548_messages__msg__ObjectList__fini(msg);
      return false;
    }
  }
  return true;
}

void
ars548_messages__msg__ObjectList__fini(ars548_messages__msg__ObjectList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // crc
  // length
  // sqc
  // dataid
  // timestamp_nanoseconds
  // timestamp_seconds
  // timestamp_syncstatus
  // eventdataqualifier
  // extendedqualifier
  // objectlist_numofobjects
  // objectlist_objects
  for (size_t i = 0; i < 50; ++i) {
    ars548_messages__msg__Object__fini(&msg->objectlist_objects[i]);
  }
}

bool
ars548_messages__msg__ObjectList__are_equal(const ars548_messages__msg__ObjectList * lhs, const ars548_messages__msg__ObjectList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // sqc
  if (lhs->sqc != rhs->sqc) {
    return false;
  }
  // dataid
  if (lhs->dataid != rhs->dataid) {
    return false;
  }
  // timestamp_nanoseconds
  if (lhs->timestamp_nanoseconds != rhs->timestamp_nanoseconds) {
    return false;
  }
  // timestamp_seconds
  if (lhs->timestamp_seconds != rhs->timestamp_seconds) {
    return false;
  }
  // timestamp_syncstatus
  if (lhs->timestamp_syncstatus != rhs->timestamp_syncstatus) {
    return false;
  }
  // eventdataqualifier
  if (lhs->eventdataqualifier != rhs->eventdataqualifier) {
    return false;
  }
  // extendedqualifier
  if (lhs->extendedqualifier != rhs->extendedqualifier) {
    return false;
  }
  // objectlist_numofobjects
  if (lhs->objectlist_numofobjects != rhs->objectlist_numofobjects) {
    return false;
  }
  // objectlist_objects
  for (size_t i = 0; i < 50; ++i) {
    if (!ars548_messages__msg__Object__are_equal(
        &(lhs->objectlist_objects[i]), &(rhs->objectlist_objects[i])))
    {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__ObjectList__copy(
  const ars548_messages__msg__ObjectList * input,
  ars548_messages__msg__ObjectList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // crc
  output->crc = input->crc;
  // length
  output->length = input->length;
  // sqc
  output->sqc = input->sqc;
  // dataid
  output->dataid = input->dataid;
  // timestamp_nanoseconds
  output->timestamp_nanoseconds = input->timestamp_nanoseconds;
  // timestamp_seconds
  output->timestamp_seconds = input->timestamp_seconds;
  // timestamp_syncstatus
  output->timestamp_syncstatus = input->timestamp_syncstatus;
  // eventdataqualifier
  output->eventdataqualifier = input->eventdataqualifier;
  // extendedqualifier
  output->extendedqualifier = input->extendedqualifier;
  // objectlist_numofobjects
  output->objectlist_numofobjects = input->objectlist_numofobjects;
  // objectlist_objects
  for (size_t i = 0; i < 50; ++i) {
    if (!ars548_messages__msg__Object__copy(
        &(input->objectlist_objects[i]), &(output->objectlist_objects[i])))
    {
      return false;
    }
  }
  return true;
}

ars548_messages__msg__ObjectList *
ars548_messages__msg__ObjectList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__ObjectList * msg = (ars548_messages__msg__ObjectList *)allocator.allocate(sizeof(ars548_messages__msg__ObjectList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__ObjectList));
  bool success = ars548_messages__msg__ObjectList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__ObjectList__destroy(ars548_messages__msg__ObjectList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__ObjectList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__ObjectList__Sequence__init(ars548_messages__msg__ObjectList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__ObjectList * data = NULL;

  if (size) {
    data = (ars548_messages__msg__ObjectList *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__ObjectList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__ObjectList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__ObjectList__fini(&data[i - 1]);
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
ars548_messages__msg__ObjectList__Sequence__fini(ars548_messages__msg__ObjectList__Sequence * array)
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
      ars548_messages__msg__ObjectList__fini(&array->data[i]);
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

ars548_messages__msg__ObjectList__Sequence *
ars548_messages__msg__ObjectList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__ObjectList__Sequence * array = (ars548_messages__msg__ObjectList__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__ObjectList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__ObjectList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__ObjectList__Sequence__destroy(ars548_messages__msg__ObjectList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__ObjectList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__ObjectList__Sequence__are_equal(const ars548_messages__msg__ObjectList__Sequence * lhs, const ars548_messages__msg__ObjectList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__ObjectList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__ObjectList__Sequence__copy(
  const ars548_messages__msg__ObjectList__Sequence * input,
  ars548_messages__msg__ObjectList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__ObjectList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__ObjectList * data =
      (ars548_messages__msg__ObjectList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__ObjectList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__ObjectList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__ObjectList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
