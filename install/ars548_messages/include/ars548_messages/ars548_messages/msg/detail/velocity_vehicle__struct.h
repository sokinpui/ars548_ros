// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/VelocityVehicle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocityVehicle in the package ars548_messages.
typedef struct ars548_messages__msg__VelocityVehicle
{
  /// (unused) Velocity near standstill status
  uint8_t statusvelocitynearstandstill;
  /// (unused) VelovityVehicle qualifier
  uint8_t qualifiervelocityvehicle;
  /// (unused) Event data qualifier VelocityVehicle
  uint8_t velocityvehicleeventdataqualifier;
  /// VelocityVehicle
  float velocityvehicle;
  /// (unused) Invalid flag VelocityVehicle
  uint8_t velocityvehicle_invalidflag;
} ars548_messages__msg__VelocityVehicle;

// Struct for a sequence of ars548_messages__msg__VelocityVehicle.
typedef struct ars548_messages__msg__VelocityVehicle__Sequence
{
  ars548_messages__msg__VelocityVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__VelocityVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__STRUCT_H_
