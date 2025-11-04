// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/DrivingDirection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DrivingDirection in the package ars548_messages.
typedef struct ars548_messages__msg__DrivingDirection
{
  /// (unused) Unconfirmed driving direction
  uint8_t drivingdirectionunconfirmed;
  /// Confirmed driving direction
  uint8_t drivingdirectionconfirmed;
} ars548_messages__msg__DrivingDirection;

// Struct for a sequence of ars548_messages__msg__DrivingDirection.
typedef struct ars548_messages__msg__DrivingDirection__Sequence
{
  ars548_messages__msg__DrivingDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__DrivingDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__STRUCT_H_
