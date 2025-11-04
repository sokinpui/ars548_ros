// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package ars548_messages.
typedef struct ars548_messages__msg__Status
{
  /// Timestamp Nanoseconds
  uint32_t timestamp_nanoseconds;
  /// Timestamp Seconds
  uint32_t timestamp_seconds;
  /// Timestamp Sync Status
  uint8_t timestamp_syncstatus;
  /// Software version (major)
  uint8_t swversion_major;
  /// Software version (minor)
  uint8_t swversion_minor;
  /// Software version (patch)
  uint8_t swversion_patch;
  /// Longitudinal sensor position (AUTOSAR)
  float longitudinal;
  /// Lateral sensor position (AUTOSAR)
  float lateral;
  /// Vertical sensor position (AUTOSAR)
  float vertical;
  /// Sensor yaw angle (AUTOSAR)
  float yaw;
  /// Sensor pitch angle (AUTOSAR)
  float pitch;
  /// Orientation of plug
  uint8_t plugorientation;
  /// Vehicle length
  float length;
  /// Vehicle width
  float width;
  /// Vehicle height
  float height;
  /// Vehicle wheelbase
  float wheelbase;
  /// Maximum detection distance
  uint16_t maximumdistance;
  /// Center frequency
  uint8_t frequencyslot;
  /// Cycle time
  uint8_t cycletime;
  /// Cycle offset
  uint8_t timeslot;
  /// Country code
  uint8_t hcc;
  /// Power saving in standstill
  uint8_t powersave_standstill;
  /// Sensor IP address
  uint32_t sensoripaddress_0;
  /// Reserved
  uint32_t sensoripaddress_1;
  /// Counter that counts up if new configuration has been received and accepted
  uint8_t configurationcounter;
  /// Signals if current value is OK or timed out
  uint8_t status_longitudinalvelocity;
  /// Signals if current value is OK or timed out
  uint8_t status_longitudinalacceleration;
  /// Signals if current value is OK or timed out
  uint8_t status_lateralacceleration;
  /// Signals if current value is OK or timed out
  uint8_t status_yawrate;
  /// Signals if current value is OK or timed out
  uint8_t status_steeringangle;
  /// Signals if current value is OK or timed out
  uint8_t status_drivingdirection;
  /// (Unused) Signals if current value is OK or timed out.
  uint8_t status_characteristicspeed;
  /// Signals if Radar Status is OK
  uint8_t status_radarstatus;
  /// Bitfield to report under- and overvoltage errors
  uint8_t status_voltagestatus;
  /// Bitfield to report under- and overtemperature errors
  uint8_t status_temperaturestatus;
  /// Current blockage state and blockage self test state.
  uint8_t status_blockagestatus;
} ars548_messages__msg__Status;

// Struct for a sequence of ars548_messages__msg__Status.
typedef struct ars548_messages__msg__Status__Sequence
{
  ars548_messages__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__STATUS__STRUCT_H_
