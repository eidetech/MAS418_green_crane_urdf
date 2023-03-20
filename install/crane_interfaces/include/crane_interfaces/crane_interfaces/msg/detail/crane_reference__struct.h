// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crane_interfaces:msg/CraneReference.idl
// generated code does not contain a copyright notice

#ifndef CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_H_
#define CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CraneReference in the package crane_interfaces.
typedef struct crane_interfaces__msg__CraneReference
{
  double crane_cylinder_velocity_reference;
} crane_interfaces__msg__CraneReference;

// Struct for a sequence of crane_interfaces__msg__CraneReference.
typedef struct crane_interfaces__msg__CraneReference__Sequence
{
  crane_interfaces__msg__CraneReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crane_interfaces__msg__CraneReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRANE_INTERFACES__MSG__DETAIL__CRANE_REFERENCE__STRUCT_H_
