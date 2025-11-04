// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AccelerationLateralCoG in the package ars548_messages.
typedef struct ars548_messages__msg__AccelerationLateralCoG
{
  /// (Unused) Error Amplitude of Lateral Acceleration
  float accelerationlateralerramp;
  /// (Unused) Invalid Flags AccelLatErrAmp
  uint8_t accelerationlateralerramp_invalidflag;
  /// (Unused) Lateral Acceleration Qualifier
  uint8_t qualifieraccelerationlateral;
  /// Lateral Acceleration
  float accelerationlateral;
  /// (Unused) Invalid Flag Lateral Acceleration
  uint8_t accelerationlateral_invalidflag;
  /// (Unused) Event Data Qualifier Lateral Acceleration
  uint8_t accelerationlateraleventdataqualifier;
} ars548_messages__msg__AccelerationLateralCoG;

// Struct for a sequence of ars548_messages__msg__AccelerationLateralCoG.
typedef struct ars548_messages__msg__AccelerationLateralCoG__Sequence
{
  ars548_messages__msg__AccelerationLateralCoG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__AccelerationLateralCoG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__STRUCT_H_
