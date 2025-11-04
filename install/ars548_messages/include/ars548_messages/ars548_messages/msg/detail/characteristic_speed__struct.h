// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CharacteristicSpeed in the package ars548_messages.
typedef struct ars548_messages__msg__CharacteristicSpeed
{
  /// (Unused) Error amplitude of characteristic speed
  uint8_t characteristicspeederramp;
  /// (Unused) Characteristic speed qualifier
  uint8_t qualifiercharacteristicspeed;
  /// Characteristic speed
  uint8_t characteristicspeed;
} ars548_messages__msg__CharacteristicSpeed;

// Struct for a sequence of ars548_messages__msg__CharacteristicSpeed.
typedef struct ars548_messages__msg__CharacteristicSpeed__Sequence
{
  ars548_messages__msg__CharacteristicSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__CharacteristicSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__STRUCT_H_
