// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Greet.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GREET__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GREET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/greet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Greet_Request_name
{
public:
  Init_Greet_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Greet_Request name(::interfaces::srv::Greet_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Greet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Greet_Request>()
{
  return interfaces::srv::builder::Init_Greet_Request_name();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Greet_Response_greeting
{
public:
  Init_Greet_Response_greeting()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Greet_Response greeting(::interfaces::srv::Greet_Response::_greeting_type arg)
  {
    msg_.greeting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Greet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Greet_Response>()
{
  return interfaces::srv::builder::Init_Greet_Response_greeting();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GREET__BUILDER_HPP_
