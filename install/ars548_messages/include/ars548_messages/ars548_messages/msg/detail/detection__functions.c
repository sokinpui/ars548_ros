// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/Detection.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__Detection__init(ars548_messages__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // f_azimuthangle
  // f_azimuthanglestd
  // u_invalidflags
  // f_elevationangle
  // f_elevationanglestd
  // f_range
  // f_rangestd
  // f_rangerate
  // f_rangeratestd
  // s_rcs
  // u_measurementid
  // u_positivepredictivevalue
  // u_classification
  // u_multitargetprobabilitym
  // u_objectid
  // u_ambiguityflag
  // u_sortindex
  return true;
}

void
ars548_messages__msg__Detection__fini(ars548_messages__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // f_azimuthangle
  // f_azimuthanglestd
  // u_invalidflags
  // f_elevationangle
  // f_elevationanglestd
  // f_range
  // f_rangestd
  // f_rangerate
  // f_rangeratestd
  // s_rcs
  // u_measurementid
  // u_positivepredictivevalue
  // u_classification
  // u_multitargetprobabilitym
  // u_objectid
  // u_ambiguityflag
  // u_sortindex
}

bool
ars548_messages__msg__Detection__are_equal(const ars548_messages__msg__Detection * lhs, const ars548_messages__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f_azimuthangle
  if (lhs->f_azimuthangle != rhs->f_azimuthangle) {
    return false;
  }
  // f_azimuthanglestd
  if (lhs->f_azimuthanglestd != rhs->f_azimuthanglestd) {
    return false;
  }
  // u_invalidflags
  if (lhs->u_invalidflags != rhs->u_invalidflags) {
    return false;
  }
  // f_elevationangle
  if (lhs->f_elevationangle != rhs->f_elevationangle) {
    return false;
  }
  // f_elevationanglestd
  if (lhs->f_elevationanglestd != rhs->f_elevationanglestd) {
    return false;
  }
  // f_range
  if (lhs->f_range != rhs->f_range) {
    return false;
  }
  // f_rangestd
  if (lhs->f_rangestd != rhs->f_rangestd) {
    return false;
  }
  // f_rangerate
  if (lhs->f_rangerate != rhs->f_rangerate) {
    return false;
  }
  // f_rangeratestd
  if (lhs->f_rangeratestd != rhs->f_rangeratestd) {
    return false;
  }
  // s_rcs
  if (lhs->s_rcs != rhs->s_rcs) {
    return false;
  }
  // u_measurementid
  if (lhs->u_measurementid != rhs->u_measurementid) {
    return false;
  }
  // u_positivepredictivevalue
  if (lhs->u_positivepredictivevalue != rhs->u_positivepredictivevalue) {
    return false;
  }
  // u_classification
  if (lhs->u_classification != rhs->u_classification) {
    return false;
  }
  // u_multitargetprobabilitym
  if (lhs->u_multitargetprobabilitym != rhs->u_multitargetprobabilitym) {
    return false;
  }
  // u_objectid
  if (lhs->u_objectid != rhs->u_objectid) {
    return false;
  }
  // u_ambiguityflag
  if (lhs->u_ambiguityflag != rhs->u_ambiguityflag) {
    return false;
  }
  // u_sortindex
  if (lhs->u_sortindex != rhs->u_sortindex) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__Detection__copy(
  const ars548_messages__msg__Detection * input,
  ars548_messages__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // f_azimuthangle
  output->f_azimuthangle = input->f_azimuthangle;
  // f_azimuthanglestd
  output->f_azimuthanglestd = input->f_azimuthanglestd;
  // u_invalidflags
  output->u_invalidflags = input->u_invalidflags;
  // f_elevationangle
  output->f_elevationangle = input->f_elevationangle;
  // f_elevationanglestd
  output->f_elevationanglestd = input->f_elevationanglestd;
  // f_range
  output->f_range = input->f_range;
  // f_rangestd
  output->f_rangestd = input->f_rangestd;
  // f_rangerate
  output->f_rangerate = input->f_rangerate;
  // f_rangeratestd
  output->f_rangeratestd = input->f_rangeratestd;
  // s_rcs
  output->s_rcs = input->s_rcs;
  // u_measurementid
  output->u_measurementid = input->u_measurementid;
  // u_positivepredictivevalue
  output->u_positivepredictivevalue = input->u_positivepredictivevalue;
  // u_classification
  output->u_classification = input->u_classification;
  // u_multitargetprobabilitym
  output->u_multitargetprobabilitym = input->u_multitargetprobabilitym;
  // u_objectid
  output->u_objectid = input->u_objectid;
  // u_ambiguityflag
  output->u_ambiguityflag = input->u_ambiguityflag;
  // u_sortindex
  output->u_sortindex = input->u_sortindex;
  return true;
}

ars548_messages__msg__Detection *
ars548_messages__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Detection * msg = (ars548_messages__msg__Detection *)allocator.allocate(sizeof(ars548_messages__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__Detection));
  bool success = ars548_messages__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__Detection__destroy(ars548_messages__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__Detection__Sequence__init(ars548_messages__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Detection * data = NULL;

  if (size) {
    data = (ars548_messages__msg__Detection *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__Detection__fini(&data[i - 1]);
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
ars548_messages__msg__Detection__Sequence__fini(ars548_messages__msg__Detection__Sequence * array)
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
      ars548_messages__msg__Detection__fini(&array->data[i]);
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

ars548_messages__msg__Detection__Sequence *
ars548_messages__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Detection__Sequence * array = (ars548_messages__msg__Detection__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__Detection__Sequence__destroy(ars548_messages__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__Detection__Sequence__are_equal(const ars548_messages__msg__Detection__Sequence * lhs, const ars548_messages__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__Detection__Sequence__copy(
  const ars548_messages__msg__Detection__Sequence * input,
  ars548_messages__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__Detection * data =
      (ars548_messages__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
