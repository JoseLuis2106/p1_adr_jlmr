// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Square.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SQUARE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SQUARE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/square__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Square_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Square_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Square_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Square_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Square_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Square_Request>()
{
  return "interfaces::srv::Square_Request";
}

template<>
inline const char * name<interfaces::srv::Square_Request>()
{
  return "interfaces/srv/Square_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Square_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Square_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Square_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Square_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sq
  {
    out << "sq: ";
    rosidl_generator_traits::value_to_yaml(msg.sq, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Square_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sq: ";
    rosidl_generator_traits::value_to_yaml(msg.sq, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Square_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Square_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Square_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Square_Response>()
{
  return "interfaces::srv::Square_Response";
}

template<>
inline const char * name<interfaces::srv::Square_Response>()
{
  return "interfaces/srv/Square_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Square_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Square_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Square_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Square>()
{
  return "interfaces::srv::Square";
}

template<>
inline const char * name<interfaces::srv::Square>()
{
  return "interfaces/srv/Square";
}

template<>
struct has_fixed_size<interfaces::srv::Square>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Square_Request>::value &&
    has_fixed_size<interfaces::srv::Square_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Square>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Square_Request>::value &&
    has_bounded_size<interfaces::srv::Square_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Square>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Square_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Square_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SQUARE__TRAITS_HPP_
