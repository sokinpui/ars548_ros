// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ars548_messages:msg/Object.idl
// generated code does not contain a copyright notice
#include "ars548_messages/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ars548_messages__msg__Object__init(ars548_messages__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // u_statussensor
  // u_id
  // u_age
  // u_statusmeasurement
  // u_statusmovement
  // u_position_invalidflags
  // u_position_reference
  // u_position_x
  // u_position_x_std
  // u_position_y
  // u_position_y_std
  // u_position_z
  // u_position_z_std
  // u_position_covariancexy
  // u_position_orientation
  // u_position_orientation_std
  // u_existence_invalidflags
  // u_existence_probability
  // u_existence_ppv
  // u_classification_car
  // u_classification_truck
  // u_classification_motorcycle
  // u_classification_bicycle
  // u_classification_pedestrian
  // u_classification_animal
  // u_classification_hazard
  // u_classification_unknown
  // u_classification_overdrivable
  // u_classification_underdrivable
  // u_dynamics_absvel_invalidflags
  // f_dynamics_absvel_x
  // f_dynamics_absvel_x_std
  // f_dynamics_absvel_y
  // f_dynamics_absvel_y_std
  // f_dynamics_absvel_covariancexy
  // u_dynamics_relvel_invalidflags
  // f_dynamics_relvel_x
  // f_dynamics_relvel_x_std
  // f_dynamics_relvel_y
  // f_dynamics_relvel_y_std
  // f_dynamics_relvel_covariancexy
  // u_dynamics_absaccel_invalidflags
  // f_dynamics_absaccel_x
  // f_dynamics_absaccel_x_std
  // f_dynamics_absaccel_y
  // f_dynamics_absaccel_y_std
  // f_dynamics_absaccel_covariancexy
  // u_dynamics_relaccel_invalidflags
  // f_dynamics_relaccel_x
  // f_dynamics_relaccel_x_std
  // f_dynamics_relaccel_y
  // f_dynamics_relaccel_y_std
  // f_dynamics_relaccel_covariancexy
  // u_dynamics_orientation_invalidflags
  // u_dynamics_orientation_rate_mean
  // u_dynamics_orientation_rate_std
  // u_shape_length_status
  // u_shape_length_edge_invalidflags
  // u_shape_length_edge_mean
  // u_shape_length_edge_std
  // u_shape_width_status
  // u_shape_width_edge_invalidflags
  // u_shape_width_edge_mean
  // u_shape_width_edge_std
  return true;
}

void
ars548_messages__msg__Object__fini(ars548_messages__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // u_statussensor
  // u_id
  // u_age
  // u_statusmeasurement
  // u_statusmovement
  // u_position_invalidflags
  // u_position_reference
  // u_position_x
  // u_position_x_std
  // u_position_y
  // u_position_y_std
  // u_position_z
  // u_position_z_std
  // u_position_covariancexy
  // u_position_orientation
  // u_position_orientation_std
  // u_existence_invalidflags
  // u_existence_probability
  // u_existence_ppv
  // u_classification_car
  // u_classification_truck
  // u_classification_motorcycle
  // u_classification_bicycle
  // u_classification_pedestrian
  // u_classification_animal
  // u_classification_hazard
  // u_classification_unknown
  // u_classification_overdrivable
  // u_classification_underdrivable
  // u_dynamics_absvel_invalidflags
  // f_dynamics_absvel_x
  // f_dynamics_absvel_x_std
  // f_dynamics_absvel_y
  // f_dynamics_absvel_y_std
  // f_dynamics_absvel_covariancexy
  // u_dynamics_relvel_invalidflags
  // f_dynamics_relvel_x
  // f_dynamics_relvel_x_std
  // f_dynamics_relvel_y
  // f_dynamics_relvel_y_std
  // f_dynamics_relvel_covariancexy
  // u_dynamics_absaccel_invalidflags
  // f_dynamics_absaccel_x
  // f_dynamics_absaccel_x_std
  // f_dynamics_absaccel_y
  // f_dynamics_absaccel_y_std
  // f_dynamics_absaccel_covariancexy
  // u_dynamics_relaccel_invalidflags
  // f_dynamics_relaccel_x
  // f_dynamics_relaccel_x_std
  // f_dynamics_relaccel_y
  // f_dynamics_relaccel_y_std
  // f_dynamics_relaccel_covariancexy
  // u_dynamics_orientation_invalidflags
  // u_dynamics_orientation_rate_mean
  // u_dynamics_orientation_rate_std
  // u_shape_length_status
  // u_shape_length_edge_invalidflags
  // u_shape_length_edge_mean
  // u_shape_length_edge_std
  // u_shape_width_status
  // u_shape_width_edge_invalidflags
  // u_shape_width_edge_mean
  // u_shape_width_edge_std
}

bool
ars548_messages__msg__Object__are_equal(const ars548_messages__msg__Object * lhs, const ars548_messages__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // u_statussensor
  if (lhs->u_statussensor != rhs->u_statussensor) {
    return false;
  }
  // u_id
  if (lhs->u_id != rhs->u_id) {
    return false;
  }
  // u_age
  if (lhs->u_age != rhs->u_age) {
    return false;
  }
  // u_statusmeasurement
  if (lhs->u_statusmeasurement != rhs->u_statusmeasurement) {
    return false;
  }
  // u_statusmovement
  if (lhs->u_statusmovement != rhs->u_statusmovement) {
    return false;
  }
  // u_position_invalidflags
  if (lhs->u_position_invalidflags != rhs->u_position_invalidflags) {
    return false;
  }
  // u_position_reference
  if (lhs->u_position_reference != rhs->u_position_reference) {
    return false;
  }
  // u_position_x
  if (lhs->u_position_x != rhs->u_position_x) {
    return false;
  }
  // u_position_x_std
  if (lhs->u_position_x_std != rhs->u_position_x_std) {
    return false;
  }
  // u_position_y
  if (lhs->u_position_y != rhs->u_position_y) {
    return false;
  }
  // u_position_y_std
  if (lhs->u_position_y_std != rhs->u_position_y_std) {
    return false;
  }
  // u_position_z
  if (lhs->u_position_z != rhs->u_position_z) {
    return false;
  }
  // u_position_z_std
  if (lhs->u_position_z_std != rhs->u_position_z_std) {
    return false;
  }
  // u_position_covariancexy
  if (lhs->u_position_covariancexy != rhs->u_position_covariancexy) {
    return false;
  }
  // u_position_orientation
  if (lhs->u_position_orientation != rhs->u_position_orientation) {
    return false;
  }
  // u_position_orientation_std
  if (lhs->u_position_orientation_std != rhs->u_position_orientation_std) {
    return false;
  }
  // u_existence_invalidflags
  if (lhs->u_existence_invalidflags != rhs->u_existence_invalidflags) {
    return false;
  }
  // u_existence_probability
  if (lhs->u_existence_probability != rhs->u_existence_probability) {
    return false;
  }
  // u_existence_ppv
  if (lhs->u_existence_ppv != rhs->u_existence_ppv) {
    return false;
  }
  // u_classification_car
  if (lhs->u_classification_car != rhs->u_classification_car) {
    return false;
  }
  // u_classification_truck
  if (lhs->u_classification_truck != rhs->u_classification_truck) {
    return false;
  }
  // u_classification_motorcycle
  if (lhs->u_classification_motorcycle != rhs->u_classification_motorcycle) {
    return false;
  }
  // u_classification_bicycle
  if (lhs->u_classification_bicycle != rhs->u_classification_bicycle) {
    return false;
  }
  // u_classification_pedestrian
  if (lhs->u_classification_pedestrian != rhs->u_classification_pedestrian) {
    return false;
  }
  // u_classification_animal
  if (lhs->u_classification_animal != rhs->u_classification_animal) {
    return false;
  }
  // u_classification_hazard
  if (lhs->u_classification_hazard != rhs->u_classification_hazard) {
    return false;
  }
  // u_classification_unknown
  if (lhs->u_classification_unknown != rhs->u_classification_unknown) {
    return false;
  }
  // u_classification_overdrivable
  if (lhs->u_classification_overdrivable != rhs->u_classification_overdrivable) {
    return false;
  }
  // u_classification_underdrivable
  if (lhs->u_classification_underdrivable != rhs->u_classification_underdrivable) {
    return false;
  }
  // u_dynamics_absvel_invalidflags
  if (lhs->u_dynamics_absvel_invalidflags != rhs->u_dynamics_absvel_invalidflags) {
    return false;
  }
  // f_dynamics_absvel_x
  if (lhs->f_dynamics_absvel_x != rhs->f_dynamics_absvel_x) {
    return false;
  }
  // f_dynamics_absvel_x_std
  if (lhs->f_dynamics_absvel_x_std != rhs->f_dynamics_absvel_x_std) {
    return false;
  }
  // f_dynamics_absvel_y
  if (lhs->f_dynamics_absvel_y != rhs->f_dynamics_absvel_y) {
    return false;
  }
  // f_dynamics_absvel_y_std
  if (lhs->f_dynamics_absvel_y_std != rhs->f_dynamics_absvel_y_std) {
    return false;
  }
  // f_dynamics_absvel_covariancexy
  if (lhs->f_dynamics_absvel_covariancexy != rhs->f_dynamics_absvel_covariancexy) {
    return false;
  }
  // u_dynamics_relvel_invalidflags
  if (lhs->u_dynamics_relvel_invalidflags != rhs->u_dynamics_relvel_invalidflags) {
    return false;
  }
  // f_dynamics_relvel_x
  if (lhs->f_dynamics_relvel_x != rhs->f_dynamics_relvel_x) {
    return false;
  }
  // f_dynamics_relvel_x_std
  if (lhs->f_dynamics_relvel_x_std != rhs->f_dynamics_relvel_x_std) {
    return false;
  }
  // f_dynamics_relvel_y
  if (lhs->f_dynamics_relvel_y != rhs->f_dynamics_relvel_y) {
    return false;
  }
  // f_dynamics_relvel_y_std
  if (lhs->f_dynamics_relvel_y_std != rhs->f_dynamics_relvel_y_std) {
    return false;
  }
  // f_dynamics_relvel_covariancexy
  if (lhs->f_dynamics_relvel_covariancexy != rhs->f_dynamics_relvel_covariancexy) {
    return false;
  }
  // u_dynamics_absaccel_invalidflags
  if (lhs->u_dynamics_absaccel_invalidflags != rhs->u_dynamics_absaccel_invalidflags) {
    return false;
  }
  // f_dynamics_absaccel_x
  if (lhs->f_dynamics_absaccel_x != rhs->f_dynamics_absaccel_x) {
    return false;
  }
  // f_dynamics_absaccel_x_std
  if (lhs->f_dynamics_absaccel_x_std != rhs->f_dynamics_absaccel_x_std) {
    return false;
  }
  // f_dynamics_absaccel_y
  if (lhs->f_dynamics_absaccel_y != rhs->f_dynamics_absaccel_y) {
    return false;
  }
  // f_dynamics_absaccel_y_std
  if (lhs->f_dynamics_absaccel_y_std != rhs->f_dynamics_absaccel_y_std) {
    return false;
  }
  // f_dynamics_absaccel_covariancexy
  if (lhs->f_dynamics_absaccel_covariancexy != rhs->f_dynamics_absaccel_covariancexy) {
    return false;
  }
  // u_dynamics_relaccel_invalidflags
  if (lhs->u_dynamics_relaccel_invalidflags != rhs->u_dynamics_relaccel_invalidflags) {
    return false;
  }
  // f_dynamics_relaccel_x
  if (lhs->f_dynamics_relaccel_x != rhs->f_dynamics_relaccel_x) {
    return false;
  }
  // f_dynamics_relaccel_x_std
  if (lhs->f_dynamics_relaccel_x_std != rhs->f_dynamics_relaccel_x_std) {
    return false;
  }
  // f_dynamics_relaccel_y
  if (lhs->f_dynamics_relaccel_y != rhs->f_dynamics_relaccel_y) {
    return false;
  }
  // f_dynamics_relaccel_y_std
  if (lhs->f_dynamics_relaccel_y_std != rhs->f_dynamics_relaccel_y_std) {
    return false;
  }
  // f_dynamics_relaccel_covariancexy
  if (lhs->f_dynamics_relaccel_covariancexy != rhs->f_dynamics_relaccel_covariancexy) {
    return false;
  }
  // u_dynamics_orientation_invalidflags
  if (lhs->u_dynamics_orientation_invalidflags != rhs->u_dynamics_orientation_invalidflags) {
    return false;
  }
  // u_dynamics_orientation_rate_mean
  if (lhs->u_dynamics_orientation_rate_mean != rhs->u_dynamics_orientation_rate_mean) {
    return false;
  }
  // u_dynamics_orientation_rate_std
  if (lhs->u_dynamics_orientation_rate_std != rhs->u_dynamics_orientation_rate_std) {
    return false;
  }
  // u_shape_length_status
  if (lhs->u_shape_length_status != rhs->u_shape_length_status) {
    return false;
  }
  // u_shape_length_edge_invalidflags
  if (lhs->u_shape_length_edge_invalidflags != rhs->u_shape_length_edge_invalidflags) {
    return false;
  }
  // u_shape_length_edge_mean
  if (lhs->u_shape_length_edge_mean != rhs->u_shape_length_edge_mean) {
    return false;
  }
  // u_shape_length_edge_std
  if (lhs->u_shape_length_edge_std != rhs->u_shape_length_edge_std) {
    return false;
  }
  // u_shape_width_status
  if (lhs->u_shape_width_status != rhs->u_shape_width_status) {
    return false;
  }
  // u_shape_width_edge_invalidflags
  if (lhs->u_shape_width_edge_invalidflags != rhs->u_shape_width_edge_invalidflags) {
    return false;
  }
  // u_shape_width_edge_mean
  if (lhs->u_shape_width_edge_mean != rhs->u_shape_width_edge_mean) {
    return false;
  }
  // u_shape_width_edge_std
  if (lhs->u_shape_width_edge_std != rhs->u_shape_width_edge_std) {
    return false;
  }
  return true;
}

bool
ars548_messages__msg__Object__copy(
  const ars548_messages__msg__Object * input,
  ars548_messages__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // u_statussensor
  output->u_statussensor = input->u_statussensor;
  // u_id
  output->u_id = input->u_id;
  // u_age
  output->u_age = input->u_age;
  // u_statusmeasurement
  output->u_statusmeasurement = input->u_statusmeasurement;
  // u_statusmovement
  output->u_statusmovement = input->u_statusmovement;
  // u_position_invalidflags
  output->u_position_invalidflags = input->u_position_invalidflags;
  // u_position_reference
  output->u_position_reference = input->u_position_reference;
  // u_position_x
  output->u_position_x = input->u_position_x;
  // u_position_x_std
  output->u_position_x_std = input->u_position_x_std;
  // u_position_y
  output->u_position_y = input->u_position_y;
  // u_position_y_std
  output->u_position_y_std = input->u_position_y_std;
  // u_position_z
  output->u_position_z = input->u_position_z;
  // u_position_z_std
  output->u_position_z_std = input->u_position_z_std;
  // u_position_covariancexy
  output->u_position_covariancexy = input->u_position_covariancexy;
  // u_position_orientation
  output->u_position_orientation = input->u_position_orientation;
  // u_position_orientation_std
  output->u_position_orientation_std = input->u_position_orientation_std;
  // u_existence_invalidflags
  output->u_existence_invalidflags = input->u_existence_invalidflags;
  // u_existence_probability
  output->u_existence_probability = input->u_existence_probability;
  // u_existence_ppv
  output->u_existence_ppv = input->u_existence_ppv;
  // u_classification_car
  output->u_classification_car = input->u_classification_car;
  // u_classification_truck
  output->u_classification_truck = input->u_classification_truck;
  // u_classification_motorcycle
  output->u_classification_motorcycle = input->u_classification_motorcycle;
  // u_classification_bicycle
  output->u_classification_bicycle = input->u_classification_bicycle;
  // u_classification_pedestrian
  output->u_classification_pedestrian = input->u_classification_pedestrian;
  // u_classification_animal
  output->u_classification_animal = input->u_classification_animal;
  // u_classification_hazard
  output->u_classification_hazard = input->u_classification_hazard;
  // u_classification_unknown
  output->u_classification_unknown = input->u_classification_unknown;
  // u_classification_overdrivable
  output->u_classification_overdrivable = input->u_classification_overdrivable;
  // u_classification_underdrivable
  output->u_classification_underdrivable = input->u_classification_underdrivable;
  // u_dynamics_absvel_invalidflags
  output->u_dynamics_absvel_invalidflags = input->u_dynamics_absvel_invalidflags;
  // f_dynamics_absvel_x
  output->f_dynamics_absvel_x = input->f_dynamics_absvel_x;
  // f_dynamics_absvel_x_std
  output->f_dynamics_absvel_x_std = input->f_dynamics_absvel_x_std;
  // f_dynamics_absvel_y
  output->f_dynamics_absvel_y = input->f_dynamics_absvel_y;
  // f_dynamics_absvel_y_std
  output->f_dynamics_absvel_y_std = input->f_dynamics_absvel_y_std;
  // f_dynamics_absvel_covariancexy
  output->f_dynamics_absvel_covariancexy = input->f_dynamics_absvel_covariancexy;
  // u_dynamics_relvel_invalidflags
  output->u_dynamics_relvel_invalidflags = input->u_dynamics_relvel_invalidflags;
  // f_dynamics_relvel_x
  output->f_dynamics_relvel_x = input->f_dynamics_relvel_x;
  // f_dynamics_relvel_x_std
  output->f_dynamics_relvel_x_std = input->f_dynamics_relvel_x_std;
  // f_dynamics_relvel_y
  output->f_dynamics_relvel_y = input->f_dynamics_relvel_y;
  // f_dynamics_relvel_y_std
  output->f_dynamics_relvel_y_std = input->f_dynamics_relvel_y_std;
  // f_dynamics_relvel_covariancexy
  output->f_dynamics_relvel_covariancexy = input->f_dynamics_relvel_covariancexy;
  // u_dynamics_absaccel_invalidflags
  output->u_dynamics_absaccel_invalidflags = input->u_dynamics_absaccel_invalidflags;
  // f_dynamics_absaccel_x
  output->f_dynamics_absaccel_x = input->f_dynamics_absaccel_x;
  // f_dynamics_absaccel_x_std
  output->f_dynamics_absaccel_x_std = input->f_dynamics_absaccel_x_std;
  // f_dynamics_absaccel_y
  output->f_dynamics_absaccel_y = input->f_dynamics_absaccel_y;
  // f_dynamics_absaccel_y_std
  output->f_dynamics_absaccel_y_std = input->f_dynamics_absaccel_y_std;
  // f_dynamics_absaccel_covariancexy
  output->f_dynamics_absaccel_covariancexy = input->f_dynamics_absaccel_covariancexy;
  // u_dynamics_relaccel_invalidflags
  output->u_dynamics_relaccel_invalidflags = input->u_dynamics_relaccel_invalidflags;
  // f_dynamics_relaccel_x
  output->f_dynamics_relaccel_x = input->f_dynamics_relaccel_x;
  // f_dynamics_relaccel_x_std
  output->f_dynamics_relaccel_x_std = input->f_dynamics_relaccel_x_std;
  // f_dynamics_relaccel_y
  output->f_dynamics_relaccel_y = input->f_dynamics_relaccel_y;
  // f_dynamics_relaccel_y_std
  output->f_dynamics_relaccel_y_std = input->f_dynamics_relaccel_y_std;
  // f_dynamics_relaccel_covariancexy
  output->f_dynamics_relaccel_covariancexy = input->f_dynamics_relaccel_covariancexy;
  // u_dynamics_orientation_invalidflags
  output->u_dynamics_orientation_invalidflags = input->u_dynamics_orientation_invalidflags;
  // u_dynamics_orientation_rate_mean
  output->u_dynamics_orientation_rate_mean = input->u_dynamics_orientation_rate_mean;
  // u_dynamics_orientation_rate_std
  output->u_dynamics_orientation_rate_std = input->u_dynamics_orientation_rate_std;
  // u_shape_length_status
  output->u_shape_length_status = input->u_shape_length_status;
  // u_shape_length_edge_invalidflags
  output->u_shape_length_edge_invalidflags = input->u_shape_length_edge_invalidflags;
  // u_shape_length_edge_mean
  output->u_shape_length_edge_mean = input->u_shape_length_edge_mean;
  // u_shape_length_edge_std
  output->u_shape_length_edge_std = input->u_shape_length_edge_std;
  // u_shape_width_status
  output->u_shape_width_status = input->u_shape_width_status;
  // u_shape_width_edge_invalidflags
  output->u_shape_width_edge_invalidflags = input->u_shape_width_edge_invalidflags;
  // u_shape_width_edge_mean
  output->u_shape_width_edge_mean = input->u_shape_width_edge_mean;
  // u_shape_width_edge_std
  output->u_shape_width_edge_std = input->u_shape_width_edge_std;
  return true;
}

ars548_messages__msg__Object *
ars548_messages__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Object * msg = (ars548_messages__msg__Object *)allocator.allocate(sizeof(ars548_messages__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ars548_messages__msg__Object));
  bool success = ars548_messages__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ars548_messages__msg__Object__destroy(ars548_messages__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ars548_messages__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ars548_messages__msg__Object__Sequence__init(ars548_messages__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Object * data = NULL;

  if (size) {
    data = (ars548_messages__msg__Object *)allocator.zero_allocate(size, sizeof(ars548_messages__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ars548_messages__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ars548_messages__msg__Object__fini(&data[i - 1]);
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
ars548_messages__msg__Object__Sequence__fini(ars548_messages__msg__Object__Sequence * array)
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
      ars548_messages__msg__Object__fini(&array->data[i]);
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

ars548_messages__msg__Object__Sequence *
ars548_messages__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ars548_messages__msg__Object__Sequence * array = (ars548_messages__msg__Object__Sequence *)allocator.allocate(sizeof(ars548_messages__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ars548_messages__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ars548_messages__msg__Object__Sequence__destroy(ars548_messages__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ars548_messages__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ars548_messages__msg__Object__Sequence__are_equal(const ars548_messages__msg__Object__Sequence * lhs, const ars548_messages__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ars548_messages__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ars548_messages__msg__Object__Sequence__copy(
  const ars548_messages__msg__Object__Sequence * input,
  ars548_messages__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ars548_messages__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ars548_messages__msg__Object * data =
      (ars548_messages__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ars548_messages__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ars548_messages__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ars548_messages__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
