// Generated by gencpp from file minilab_navigation/Command.msg
// DO NOT EDIT!


#ifndef MINILAB_NAVIGATION_MESSAGE_COMMAND_H
#define MINILAB_NAVIGATION_MESSAGE_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace minilab_navigation
{
template <class ContainerAllocator>
struct Command_
{
  typedef Command_<ContainerAllocator> Type;

  Command_()
    : commanded_velocity(0.0)  {
    }
  Command_(const ContainerAllocator& _alloc)
    : commanded_velocity(0.0)  {
  (void)_alloc;
    }



   typedef float _commanded_velocity_type;
  _commanded_velocity_type commanded_velocity;




  typedef boost::shared_ptr< ::minilab_navigation::Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::minilab_navigation::Command_<ContainerAllocator> const> ConstPtr;

}; // struct Command_

typedef ::minilab_navigation::Command_<std::allocator<void> > Command;

typedef boost::shared_ptr< ::minilab_navigation::Command > CommandPtr;
typedef boost::shared_ptr< ::minilab_navigation::Command const> CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::minilab_navigation::Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::minilab_navigation::Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace minilab_navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'minilab_navigation': ['/home/ali/hw_ws/src/minilab_navigation/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::minilab_navigation::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::minilab_navigation::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::minilab_navigation::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::minilab_navigation::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::minilab_navigation::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::minilab_navigation::Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::minilab_navigation::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55127b9d38b8d2d2ecd090775b958451";
  }

  static const char* value(const ::minilab_navigation::Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55127b9d38b8d2d2ULL;
  static const uint64_t static_value2 = 0xecd090775b958451ULL;
};

template<class ContainerAllocator>
struct DataType< ::minilab_navigation::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "minilab_navigation/Command";
  }

  static const char* value(const ::minilab_navigation::Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::minilab_navigation::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Commanded speed for the motors (rad/s)\n\
float32 commanded_velocity\n\
\n\
";
  }

  static const char* value(const ::minilab_navigation::Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::minilab_navigation::Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.commanded_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::minilab_navigation::Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::minilab_navigation::Command_<ContainerAllocator>& v)
  {
    s << indent << "commanded_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.commanded_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MINILAB_NAVIGATION_MESSAGE_COMMAND_H
