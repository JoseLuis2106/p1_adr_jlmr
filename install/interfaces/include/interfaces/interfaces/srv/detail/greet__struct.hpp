// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Greet.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GREET__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__GREET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Greet_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Greet_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Greet_Request_
{
  using Type = Greet_Request_<ContainerAllocator>;

  explicit Greet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Greet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Greet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Greet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Greet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Greet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Greet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Greet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Greet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Greet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Greet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Greet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Greet_Request
    std::shared_ptr<interfaces::srv::Greet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Greet_Request
    std::shared_ptr<interfaces::srv::Greet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Greet_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Greet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Greet_Request_

// alias to use template instance with default allocator
using Greet_Request =
  interfaces::srv::Greet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Greet_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Greet_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Greet_Response_
{
  using Type = Greet_Response_<ContainerAllocator>;

  explicit Greet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->greeting = "";
    }
  }

  explicit Greet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : greeting(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->greeting = "";
    }
  }

  // field types and members
  using _greeting_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _greeting_type greeting;

  // setters for named parameter idiom
  Type & set__greeting(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->greeting = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Greet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Greet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Greet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Greet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Greet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Greet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Greet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Greet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Greet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Greet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Greet_Response
    std::shared_ptr<interfaces::srv::Greet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Greet_Response
    std::shared_ptr<interfaces::srv::Greet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Greet_Response_ & other) const
  {
    if (this->greeting != other.greeting) {
      return false;
    }
    return true;
  }
  bool operator!=(const Greet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Greet_Response_

// alias to use template instance with default allocator
using Greet_Response =
  interfaces::srv::Greet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Greet
{
  using Request = interfaces::srv::Greet_Request;
  using Response = interfaces::srv::Greet_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GREET__STRUCT_HPP_
