// Generated by gencpp from file ublox_msgs/NavCLOCK.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_NAVCLOCK_H
#define UBLOX_MSGS_MESSAGE_NAVCLOCK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct NavCLOCK_
{
  typedef NavCLOCK_<ContainerAllocator> Type;

  NavCLOCK_()
    : iTOW(0)
    , clkB(0)
    , clkD(0)
    , tAcc(0)
    , fAcc(0)  {
    }
  NavCLOCK_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , clkB(0)
    , clkD(0)
    , tAcc(0)
    , fAcc(0)  {
    }



   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef int32_t _clkB_type;
  _clkB_type clkB;

   typedef int32_t _clkD_type;
  _clkD_type clkD;

   typedef uint32_t _tAcc_type;
  _tAcc_type tAcc;

   typedef uint32_t _fAcc_type;
  _fAcc_type fAcc;


    enum { CLASS_ID = 1u };
     enum { MESSAGE_ID = 34u };
 

  typedef boost::shared_ptr< ::ublox_msgs::NavCLOCK_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavCLOCK_<ContainerAllocator> const> ConstPtr;

}; // struct NavCLOCK_

typedef ::ublox_msgs::NavCLOCK_<std::allocator<void> > NavCLOCK;

typedef boost::shared_ptr< ::ublox_msgs::NavCLOCK > NavCLOCKPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavCLOCK const> NavCLOCKConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::NavCLOCK_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/juan/rover_workspace/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavCLOCK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavCLOCK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavCLOCK_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9acfdf2e7ac2bf086926ae4e6a182a0";
  }

  static const char* value(const ::ublox_msgs::NavCLOCK_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9acfdf2e7ac2bf0ULL;
  static const uint64_t static_value2 = 0x86926ae4e6a182a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/NavCLOCK";
  }

  static const char* value(const ::ublox_msgs::NavCLOCK_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# NAV-CLOCK (0x01 0x22)\n\
# Clock Solution\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 34\n\
\n\
uint32 iTOW             # GPS Millisecond Time of week [ms]\n\
\n\
int32 clkB              # Clock bias in nanoseconds [ns]\n\
int32 clkD              # Clock drift in nanoseconds per second [ns/s]\n\
uint32 tAcc             # Time Accuracy Estimate [ns]\n\
uint32 fAcc             # Frequency Accuracy Estimate [ps/s]\n\
";
  }

  static const char* value(const ::ublox_msgs::NavCLOCK_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.clkB);
      stream.next(m.clkD);
      stream.next(m.tAcc);
      stream.next(m.fAcc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct NavCLOCK_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavCLOCK_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::NavCLOCK_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "clkB: ";
    Printer<int32_t>::stream(s, indent + "  ", v.clkB);
    s << indent << "clkD: ";
    Printer<int32_t>::stream(s, indent + "  ", v.clkD);
    s << indent << "tAcc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tAcc);
    s << indent << "fAcc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.fAcc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVCLOCK_H
