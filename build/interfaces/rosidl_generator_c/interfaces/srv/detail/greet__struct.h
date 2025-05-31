// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Greet.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GREET__STRUCT_H_
#define INTERFACES__SRV__DETAIL__GREET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Greet in the package interfaces.
typedef struct interfaces__srv__Greet_Request
{
  rosidl_runtime_c__String name;
} interfaces__srv__Greet_Request;

// Struct for a sequence of interfaces__srv__Greet_Request.
typedef struct interfaces__srv__Greet_Request__Sequence
{
  interfaces__srv__Greet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Greet_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'greeting'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Greet in the package interfaces.
typedef struct interfaces__srv__Greet_Response
{
  rosidl_runtime_c__String greeting;
} interfaces__srv__Greet_Response;

// Struct for a sequence of interfaces__srv__Greet_Response.
typedef struct interfaces__srv__Greet_Response__Sequence
{
  interfaces__srv__Greet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Greet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__GREET__STRUCT_H_
