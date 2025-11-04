// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/Status.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__Status__init(ars548_messages__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp_nanoseconds
  // timestamp_seconds
  // timestamp_syncstatus
  // swversion_major
  // swversion_minor
  // swversion_patch
  // longitudinal
  // lateral
  // vertical
  // yaw
  // pitch
  // plugorientation
  // length
  // width
  // height
  // wheelbase
  // maximumdistance
  // frequencyslot
  // cycletime
  // timeslot
  // hcc
  // powersave_standstill
  // sensoripaddress_0
  // sensoripaddress_1
  // configurationcounter
  // status_longitudinalvelocity
  // status_longitudinalacceleration
  // status_lateralacceleration
  // status_yawrate
  // status_steeringangle
  // status_drivingdirection
  // status_characteristicspeed
  // status_radarstatus
  // status_voltagestatus
  // status_temperaturestatus
  // status_blockagestatus
  return true;
}

void
ars548_messages__msg__Status__fini(ars548_messages__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // timestamp_nanoseconds
  // timestamp_seconds
  // timestamp_syncstatus
  // swversion_major
  // swversion_minor
  // swversion_patch
  // longitudinal
  // lateral
  // vertical
  // yaw
  // pitch
  // plugorientation
  // length
  // width
  // height
  // wheelbase
  // maximumdistance
  // frequencyslot
  // cycletime
  // timeslot
  // hcc
  // powersave_standstill
  // sensoripaddress_0
  // sensoripaddress_1
  // configurationcounter
  // status_longitudinalvelocity
  // status_longitudinalacceleration
  // status_lateralacceleration
  // status_yawrate
  // status_steeringangle
  // status_drivingdirection
  // status_characteristicspeed
  // status_radarstatus
  // status_voltagestatus
  // status_temperaturestatus
  // status_blockagestatus
}

bool
ars548_messages__msg__Status__are_equal(const ars548_messages__msg__Status * lhs, const ars548_messages__msg__Status * rhs)
{
  if (!lhs || !rhs) {
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
  // swversion_major
  if (lhs->swversion_major != rhs->swversion_major) {
    return false;
  }
  // swversion_minor
  if (lhs->swversion_minor != rhs->swversion_minor) {
    return false;
  }
  // swversion_patch
  if (lhs->swversion_patch != rhs->swversion_patch) {
    return false;
  }
  // longitudinal
  if (lhs->longitudinal != rhs->longitudinal) {
    return false;
  }
  // lateral
  if (lhs->lateral != rhs->lateral) {
    return false;
  }
  // vertical
  if (lhs->vertical != rhs->vertical) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // plugorientation
  if (lhs->plugorientation != rhs->plugorientation) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // wheelbase
  if (lhs->wheelbase != rhs->wheelbase) {
    return false;
  }
  // maximumdistance
  if (lhs->maximumdistance != rhs->maximumdistance) {
    return false;
  }
  // frequencyslot
  if (lhs->frequencyslot != rhs->frequencyslot) {
    return false;
  }
  // cycletime
  if (lhs->cycletime != rhs->cycletime) {
    return false;
  }
  // timeslot
  if (lhs->timeslot != rhs->timeslot) {
    return false;
  }
  // hcc
  if (lhs->hcc != rhs->hcc) {
    return false;
  }
  // powersave_standstill
  if (lhs->powersave_standstill != rhs->powersave_standstill) {
    return false;
  }
  // sensoripaddress_0
  if (lhs->sensoripaddress_0 != rhs->sensoripaddress_0) {
    return false;
  }
  // sensoripaddress_1
  if (lhs->sensoripaddress_1 != rhs->sensoripaddress_1) {
    return false;
  }
  // configurationcounter
  if (lhs->configurationcounter != rhs->configurationcounter) {
    return false;
  }
  // status_longitudinalvelocity
  if (lhs->status_longitudinalvelocity != rhs->status_longitudinalvelocity) {
    return false;
  }
  // status_longitudinalacceleration
  if (lhs->status_longitudinalacceleration != rhs->status_longitudinalacceleration) {
    return false;
  }
  // status_lateralacceleration
  if (lhs->status_lateralacceleration != rhs->status_lateralacceleration) {
    return false;
  }
  // status_yawrate
  if (lhs->status_yawrate != rhs->status_yawrate) {
    return false;
  }
  // status_steeringangle
  if (lhs->status_steeringangle != rhs->status_steeringangle) {
    return false;
  }
  // status_drivingdirection
  if (lhs->status_drivingdirection != rhs->status_drivingdirection) {
    return false;
  }
  // status_characteristicspeed
  if (lhs->status_characteristicspeed != rhs->status_characteristicspeed) {
    return false;
  }
  // status_radarstatus
  if (lhs->status_radarstatus != rhs->status_radarstatus) {
    return false;
  }
  // status_voltagestatus
  if (lhs->status_voltagestatus != rhs->status_voltagestatus) {
    return false;
  }
  // status_temperaturestatus
  if (lhs->status_temperaturestatus != rhs->status_temperaturestatus) {
    return false;
  }
  // status_blockagestatus
  if (lhs->status_blockagestatus != rhs->status_blockagestatus) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__Status__copy(
  const ars548_messages__msg__Status * input,
  ars548_messages__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp_nanoseconds
  output->timestamp_nanoseconds = input->timestamp_nanoseconds;
  // timestamp_seconds
  output->timestamp_seconds = input->timestamp_seconds;
  // timestamp_syncstatus
  output->timestamp_syncstatus = input->timestamp_syncstatus;
  // swversion_major
  output->swversion_major = input->swversion_major;
  // swversion_minor
  output->swversion_minor = input->swversion_minor;
  // swversion_patch
  output->swversion_patch = input->swversion_patch;
  // longitudinal
  output->longitudinal = input->longitudinal;
  // lateral
  output->lateral = input->lateral;
  // vertical
  output->vertical = input->vertical;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // plugorientation
  output->plugorientation = input->plugorientation;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // wheelbase
  output->wheelbase = input->wheelbase;
  // maximumdistance
  output->maximumdistance = input->maximumdistance;
  // frequencyslot
  output->frequencyslot = input->frequencyslot;
  // cycletime
  output->cycletime = input->cycletime;
  // timeslot
  output->timeslot = input->timeslot;
  // hcc
  output->hcc = input->hcc;
  // powersave_standstill
  output->powersave_standstill = input->powersave_standstill;
  // sensoripaddress_0
  output->sensoripaddress_0 = input->sensoripaddress_0;
  // sensoripaddress_1
  output->sensoripaddress_1 = input->sensoripaddress_1;
  // configurationcounter
  output->configurationcounter = input->configurationcounter;
  // status_longitudinalvelocity
  output->status_longitudinalvelocity = input->status_longitudinalvelocity;
  // status_longitudinalacceleration
  output->status_longitudinalacceleration = input->status_longitudinalacceleration;
  // status_lateralacceleration
  output->status_lateralacceleration = input->status_lateralacceleration;
  // status_yawrate
  output->status_yawrate = input->status_yawrate;
  // status_steeringangle
  output->status_steeringangle = input->status_steeringangle;
  // status_drivingdirection
  output->status_drivingdirection = input->status_drivingdirection;
  // status_characteristicspeed
  output->status_characteristicspeed = input->status_characteristicspeed;
  // status_radarstatus
  output->status_radarstatus = input->status_radarstatus;
  // status_voltagestatus
  output->status_voltagestatus = input->status_voltagestatus;
  // status_temperaturestatus
  output->status_temperaturestatus = input->status_temperaturestatus;
  // status_blockagestatus
  output->status_blockagestatus = input->status_blockagestatus;
  return true;
}

ars548_messages__msg__Status *
ars548_messages__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Status * msg = (ars548_messages__msg__Status *)allocator.allocate(sizeof(ars548_messages__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__Status));
  bool success = ars548_messages__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__Status__destroy(ars548_messages__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__Status__Sequence__init(ars548_messages__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Status * data = NULL;

  if (size) {
    data = (ars548_messages__msg__Status *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__Status__fini(&data[i - 1]);
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
ars548_messages__msg__Status__Sequence__fini(ars548_messages__msg__Status__Sequence * array)
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
      ars548_messages__msg__Status__fini(&array->data[i]);
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

ars548_messages__msg__Status__Sequence *
ars548_messages__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Status__Sequence * array = (ars548_messages__msg__Status__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__Status__Sequence__destroy(ars548_messages__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__Status__Sequence__are_equal(const ars548_messages__msg__Status__Sequence * lhs, const ars548_messages__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__Status__Sequence__copy(
  const ars548_messages__msg__Status__Sequence * input,
  ars548_messages__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__Status * data =
      (ars548_messages__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
