// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AccelerationLongitudinalCoG in the package ars548_messages.
typedef struct ars548_messages__msg__AccelerationLongitudinalCoG
{
  /// (Unused) Error amplitude of longitudinal acceleration
  float accelerationlongitudinalerramp;
  /// (Unused) Invalid Flags AccelLongErrAmp
  uint8_t accelerationlongitudinalerramp_invalidflag;
  /// (Unused) Longitudinal Acceleration Qualifier
  uint8_t qualifieraccelerationlongitudinal;
  /// Longitudinal Acceleration
  float accelerationlongitudinal;
  /// (Unused) Invalid Flag Longitudinal Acceleration
  uint8_t accelerationlongitudinal_invalidflag;
  /// (Unused) Event Data Qualifier Longitudinal Acceleration
  uint8_t accelerationlongitudinaleventdataqualifier;
} ars548_messages__msg__AccelerationLongitudinalCoG;

// Struct for a sequence of ars548_messages__msg__AccelerationLongitudinalCoG.
typedef struct ars548_messages__msg__AccelerationLongitudinalCoG__Sequence
{
  ars548_messages__msg__AccelerationLongitudinalCoG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__AccelerationLongitudinalCoG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__STRUCT_H_
