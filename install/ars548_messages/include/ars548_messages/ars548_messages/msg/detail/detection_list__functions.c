// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/DetectionList.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/detection_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `list_detections`
#include "ars548_messages/msg/detail/detection__functions.h"

bool
ars548_messages__msg__DetectionList__init(ars548_messages__msg__DetectionList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ars548_messages__msg__DetectionList__fini(msg);
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
  // origin_invalidflags
  // origin_xpos
  // origin_xstd
  // origin_ypos
  // origin_ystd
  // origin_zpos
  // origin_zstd
  // origin_roll
  // origin_rollstd
  // origin_pitch
  // origin_pitchstd
  // origin_yaw
  // origin_yawstd
  // list_invalidflags
  // list_detections
  for (size_t i = 0; i < 800; ++i) {
    if (!ars548_messages__msg__Detection__init(&msg->list_detections[i])) {
      ars548_messages__msg__DetectionList__fini(msg);
      return false;
    }
  }
  // list_radveldomain_min
  // list_radveldomain_max
  // list_numofdetections
  // aln_azimuthcorrection
  // aln_elevationcorrection
  // aln_status
  return true;
}

void
ars548_messages__msg__DetectionList__fini(ars548_messages__msg__DetectionList * msg)
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
  // origin_invalidflags
  // origin_xpos
  // origin_xstd
  // origin_ypos
  // origin_ystd
  // origin_zpos
  // origin_zstd
  // origin_roll
  // origin_rollstd
  // origin_pitch
  // origin_pitchstd
  // origin_yaw
  // origin_yawstd
  // list_invalidflags
  // list_detections
  for (size_t i = 0; i < 800; ++i) {
    ars548_messages__msg__Detection__fini(&msg->list_detections[i]);
  }
  // list_radveldomain_min
  // list_radveldomain_max
  // list_numofdetections
  // aln_azimuthcorrection
  // aln_elevationcorrection
  // aln_status
}

bool
ars548_messages__msg__DetectionList__are_equal(const ars548_messages__msg__DetectionList * lhs, const ars548_messages__msg__DetectionList * rhs)
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
  // origin_invalidflags
  if (lhs->origin_invalidflags != rhs->origin_invalidflags) {
    return false;
  }
  // origin_xpos
  if (lhs->origin_xpos != rhs->origin_xpos) {
    return false;
  }
  // origin_xstd
  if (lhs->origin_xstd != rhs->origin_xstd) {
    return false;
  }
  // origin_ypos
  if (lhs->origin_ypos != rhs->origin_ypos) {
    return false;
  }
  // origin_ystd
  if (lhs->origin_ystd != rhs->origin_ystd) {
    return false;
  }
  // origin_zpos
  if (lhs->origin_zpos != rhs->origin_zpos) {
    return false;
  }
  // origin_zstd
  if (lhs->origin_zstd != rhs->origin_zstd) {
    return false;
  }
  // origin_roll
  if (lhs->origin_roll != rhs->origin_roll) {
    return false;
  }
  // origin_rollstd
  if (lhs->origin_rollstd != rhs->origin_rollstd) {
    return false;
  }
  // origin_pitch
  if (lhs->origin_pitch != rhs->origin_pitch) {
    return false;
  }
  // origin_pitchstd
  if (lhs->origin_pitchstd != rhs->origin_pitchstd) {
    return false;
  }
  // origin_yaw
  if (lhs->origin_yaw != rhs->origin_yaw) {
    return false;
  }
  // origin_yawstd
  if (lhs->origin_yawstd != rhs->origin_yawstd) {
    return false;
  }
  // list_invalidflags
  if (lhs->list_invalidflags != rhs->list_invalidflags) {
    return false;
  }
  // list_detections
  for (size_t i = 0; i < 800; ++i) {
    if (!ars548_messages__msg__Detection__are_equal(
        &(lhs->list_detections[i]), &(rhs->list_detections[i])))
    {
      return false;
    }
  }
  // list_radveldomain_min
  if (lhs->list_radveldomain_min != rhs->list_radveldomain_min) {
    return false;
  }
  // list_radveldomain_max
  if (lhs->list_radveldomain_max != rhs->list_radveldomain_max) {
    return false;
  }
  // list_numofdetections
  if (lhs->list_numofdetections != rhs->list_numofdetections) {
    return false;
  }
  // aln_azimuthcorrection
  if (lhs->aln_azimuthcorrection != rhs->aln_azimuthcorrection) {
    return false;
  }
  // aln_elevationcorrection
  if (lhs->aln_elevationcorrection != rhs->aln_elevationcorrection) {
    return false;
  }
  // aln_status
  if (lhs->aln_status != rhs->aln_status) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__DetectionList__copy(
  const ars548_messages__msg__DetectionList * input,
  ars548_messages__msg__DetectionList * output)
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
  // origin_invalidflags
  output->origin_invalidflags = input->origin_invalidflags;
  // origin_xpos
  output->origin_xpos = input->origin_xpos;
  // origin_xstd
  output->origin_xstd = input->origin_xstd;
  // origin_ypos
  output->origin_ypos = input->origin_ypos;
  // origin_ystd
  output->origin_ystd = input->origin_ystd;
  // origin_zpos
  output->origin_zpos = input->origin_zpos;
  // origin_zstd
  output->origin_zstd = input->origin_zstd;
  // origin_roll
  output->origin_roll = input->origin_roll;
  // origin_rollstd
  output->origin_rollstd = input->origin_rollstd;
  // origin_pitch
  output->origin_pitch = input->origin_pitch;
  // origin_pitchstd
  output->origin_pitchstd = input->origin_pitchstd;
  // origin_yaw
  output->origin_yaw = input->origin_yaw;
  // origin_yawstd
  output->origin_yawstd = input->origin_yawstd;
  // list_invalidflags
  output->list_invalidflags = input->list_invalidflags;
  // list_detections
  for (size_t i = 0; i < 800; ++i) {
    if (!ars548_messages__msg__Detection__copy(
        &(input->list_detections[i]), &(output->list_detections[i])))
    {
      return false;
    }
  }
  // list_radveldomain_min
  output->list_radveldomain_min = input->list_radveldomain_min;
  // list_radveldomain_max
  output->list_radveldomain_max = input->list_radveldomain_max;
  // list_numofdetections
  output->list_numofdetections = input->list_numofdetections;
  // aln_azimuthcorrection
  output->aln_azimuthcorrection = input->aln_azimuthcorrection;
  // aln_elevationcorrection
  output->aln_elevationcorrection = input->aln_elevationcorrection;
  // aln_status
  output->aln_status = input->aln_status;
  return true;
}

ars548_messages__msg__DetectionList *
ars548_messages__msg__DetectionList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__DetectionList * msg = (ars548_messages__msg__DetectionList *)allocator.allocate(sizeof(ars548_messages__msg__DetectionList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__DetectionList));
  bool success = ars548_messages__msg__DetectionList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__DetectionList__destroy(ars548_messages__msg__DetectionList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__DetectionList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__DetectionList__Sequence__init(ars548_messages__msg__DetectionList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__DetectionList * data = NULL;

  if (size) {
    data = (ars548_messages__msg__DetectionList *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__DetectionList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__DetectionList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__DetectionList__fini(&data[i - 1]);
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
ars548_messages__msg__DetectionList__Sequence__fini(ars548_messages__msg__DetectionList__Sequence * array)
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
      ars548_messages__msg__DetectionList__fini(&array->data[i]);
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

ars548_messages__msg__DetectionList__Sequence *
ars548_messages__msg__DetectionList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__DetectionList__Sequence * array = (ars548_messages__msg__DetectionList__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__DetectionList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__DetectionList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__DetectionList__Sequence__destroy(ars548_messages__msg__DetectionList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__DetectionList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__DetectionList__Sequence__are_equal(const ars548_messages__msg__DetectionList__Sequence * lhs, const ars548_messages__msg__DetectionList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__DetectionList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__DetectionList__Sequence__copy(
  const ars548_messages__msg__DetectionList__Sequence * input,
  ars548_messages__msg__DetectionList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__DetectionList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__DetectionList * data =
      (ars548_messages__msg__DetectionList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__DetectionList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__DetectionList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__DetectionList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
