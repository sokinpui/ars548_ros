// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Object in the package ars548_messages.
typedef struct ars548_messages__msg__Object
{
  /// tbd
  uint16_t u_statussensor;
  /// Unique ID of object
  uint32_t u_id;
  /// Age of object
  uint16_t u_age;
  /// Object Status
  uint8_t u_statusmeasurement;
  /// Object Movement Status
  uint8_t u_statusmovement;
  /// tbd
  uint16_t u_position_invalidflags;
  /// Reference point position
  uint8_t u_position_reference;
  /// X Position of reference point
  float u_position_x;
  /// X Position Std
  float u_position_x_std;
  /// Y Position of reference point
  float u_position_y;
  /// Y Position Std
  float u_position_y_std;
  /// Z Position of reference point
  float u_position_z;
  /// Z Position Std
  float u_position_z_std;
  /// Covariance X Y
  float u_position_covariancexy;
  /// Object Orientation
  float u_position_orientation;
  /// Orientation Std
  float u_position_orientation_std;
  /// unused
  uint8_t u_existence_invalidflags;
  /// Probability of Existence
  float u_existence_probability;
  /// unused
  float u_existence_ppv;
  /// Car Classification Probability
  uint8_t u_classification_car;
  /// Truck Classification Probability
  uint8_t u_classification_truck;
  /// Motorcycle Classification Probability
  uint8_t u_classification_motorcycle;
  /// Bicycle Classification Probability
  uint8_t u_classification_bicycle;
  /// Pedestrian Classification Probability
  uint8_t u_classification_pedestrian;
  /// Animal Classification Probability
  uint8_t u_classification_animal;
  /// Hazard Classification Probability
  uint8_t u_classification_hazard;
  /// Unknown Classification Probability
  uint8_t u_classification_unknown;
  /// unused
  uint8_t u_classification_overdrivable;
  /// unused
  uint8_t u_classification_underdrivable;
  /// unused
  uint8_t u_dynamics_absvel_invalidflags;
  /// X Absolute Velocity
  float f_dynamics_absvel_x;
  /// X Absolute Velocity Std
  float f_dynamics_absvel_x_std;
  /// Y Absolute Velocity
  float f_dynamics_absvel_y;
  /// Y Absolute Velocity Std
  float f_dynamics_absvel_y_std;
  /// Covariance Absolute Velocity X Y
  float f_dynamics_absvel_covariancexy;
  /// unused
  uint8_t u_dynamics_relvel_invalidflags;
  /// X Relative Velocity
  float f_dynamics_relvel_x;
  /// X Relative Velocity Std
  float f_dynamics_relvel_x_std;
  /// Y Relative Velocity
  float f_dynamics_relvel_y;
  /// Y Relative Velocity Std
  float f_dynamics_relvel_y_std;
  /// Covariance Relative Velocity X Y
  float f_dynamics_relvel_covariancexy;
  /// unused
  uint8_t u_dynamics_absaccel_invalidflags;
  /// X Absolute Acceleration
  float f_dynamics_absaccel_x;
  /// X Absolute Acceleration Std
  float f_dynamics_absaccel_x_std;
  /// Y Absolute Acceleration
  float f_dynamics_absaccel_y;
  /// Y Absolute Acceleration Std
  float f_dynamics_absaccel_y_std;
  /// Covariance Absolute Acceleration X Y
  float f_dynamics_absaccel_covariancexy;
  /// unused
  uint8_t u_dynamics_relaccel_invalidflags;
  /// X Relative Acceleration
  float f_dynamics_relaccel_x;
  /// X Relative Acceleration Std
  float f_dynamics_relaccel_x_std;
  /// Y Relative Acceleration
  float f_dynamics_relaccel_y;
  /// Y Relative Acceleration Std
  float f_dynamics_relaccel_y_std;
  /// Covariance Relative Acceleration X Y
  float f_dynamics_relaccel_covariancexy;
  /// unused
  uint8_t u_dynamics_orientation_invalidflags;
  /// Object Orientation Rate
  float u_dynamics_orientation_rate_mean;
  /// Orientation Rate Std
  float u_dynamics_orientation_rate_std;
  /// (unused) Shape Length Status
  uint32_t u_shape_length_status;
  /// (unused) Invalid Flags Shape Length
  uint8_t u_shape_length_edge_invalidflags;
  /// Mean Shape Length
  float u_shape_length_edge_mean;
  /// (unused) Shape Length Std
  float u_shape_length_edge_std;
  /// (unused) Shape Width Status
  uint32_t u_shape_width_status;
  /// (unused) Invalid Flags Shape Width
  uint8_t u_shape_width_edge_invalidflags;
  /// Mean Shape Width
  float u_shape_width_edge_mean;
  /// (unused) Shape Width Std
  float u_shape_width_edge_std;
} ars548_messages__msg__Object;

// Struct for a sequence of ars548_messages__msg__Object.
typedef struct ars548_messages__msg__Object__Sequence
{
  ars548_messages__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_H_
