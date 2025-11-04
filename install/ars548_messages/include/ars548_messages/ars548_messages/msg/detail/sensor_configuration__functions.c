// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/SensorConfiguration.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/sensor_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__SensorConfiguration__init(ars548_messages__msg__SensorConfiguration * msg)
{
  if (!msg) {
    return false;
  }
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
  // frequencslot
  // cycletime
  // timeslot
  // hcc
  // powersave_standstill
  // sensoripaddress_0
  // sensoripaddress_1
  // newsensormounting
  // newvehicleparameters
  // newradarparameters
  // newnetworkconfiguration
  return true;
}

void
ars548_messages__msg__SensorConfiguration__fini(ars548_messages__msg__SensorConfiguration * msg)
{
  if (!msg) {
    return;
  }
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
  // frequencslot
  // cycletime
  // timeslot
  // hcc
  // powersave_standstill
  // sensoripaddress_0
  // sensoripaddress_1
  // newsensormounting
  // newvehicleparameters
  // newradarparameters
  // newnetworkconfiguration
}

bool
ars548_messages__msg__SensorConfiguration__are_equal(const ars548_messages__msg__SensorConfiguration * lhs, const ars548_messages__msg__SensorConfiguration * rhs)
{
  if (!lhs || !rhs) {
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
  // frequencslot
  if (lhs->frequencslot != rhs->frequencslot) {
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
  // newsensormounting
  if (lhs->newsensormounting != rhs->newsensormounting) {
    return false;
  }
  // newvehicleparameters
  if (lhs->newvehicleparameters != rhs->newvehicleparameters) {
    return false;
  }
  // newradarparameters
  if (lhs->newradarparameters != rhs->newradarparameters) {
    return false;
  }
  // newnetworkconfiguration
  if (lhs->newnetworkconfiguration != rhs->newnetworkconfiguration) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__SensorConfiguration__copy(
  const ars548_messages__msg__SensorConfiguration * input,
  ars548_messages__msg__SensorConfiguration * output)
{
  if (!input || !output) {
    return false;
  }
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
  // frequencslot
  output->frequencslot = input->frequencslot;
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
  // newsensormounting
  output->newsensormounting = input->newsensormounting;
  // newvehicleparameters
  output->newvehicleparameters = input->newvehicleparameters;
  // newradarparameters
  output->newradarparameters = input->newradarparameters;
  // newnetworkconfiguration
  output->newnetworkconfiguration = input->newnetworkconfiguration;
  return true;
}

ars548_messages__msg__SensorConfiguration *
ars548_messages__msg__SensorConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__SensorConfiguration * msg = (ars548_messages__msg__SensorConfiguration *)allocator.allocate(sizeof(ars548_messages__msg__SensorConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__SensorConfiguration));
  bool success = ars548_messages__msg__SensorConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__SensorConfiguration__destroy(ars548_messages__msg__SensorConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__SensorConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__SensorConfiguration__Sequence__init(ars548_messages__msg__SensorConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__SensorConfiguration * data = NULL;

  if (size) {
    data = (ars548_messages__msg__SensorConfiguration *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__SensorConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__SensorConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__SensorConfiguration__fini(&data[i - 1]);
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
ars548_messages__msg__SensorConfiguration__Sequence__fini(ars548_messages__msg__SensorConfiguration__Sequence * array)
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
      ars548_messages__msg__SensorConfiguration__fini(&array->data[i]);
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

ars548_messages__msg__SensorConfiguration__Sequence *
ars548_messages__msg__SensorConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__SensorConfiguration__Sequence * array = (ars548_messages__msg__SensorConfiguration__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__SensorConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__SensorConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__SensorConfiguration__Sequence__destroy(ars548_messages__msg__SensorConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__SensorConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__SensorConfiguration__Sequence__are_equal(const ars548_messages__msg__SensorConfiguration__Sequence * lhs, const ars548_messages__msg__SensorConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__SensorConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__SensorConfiguration__Sequence__copy(
  const ars548_messages__msg__SensorConfiguration__Sequence * input,
  ars548_messages__msg__SensorConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__SensorConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__SensorConfiguration * data =
      (ars548_messages__msg__SensorConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__SensorConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__SensorConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__SensorConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
