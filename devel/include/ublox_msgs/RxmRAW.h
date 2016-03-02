// Generated by gencpp from file ublox_msgs/RxmRAW.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_RXMRAW_H
#define UBLOX_MSGS_MESSAGE_RXMRAW_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ublox_msgs/RxmRAW_SV.h>

namespace ublox_msgs
{
template <class ContainerAllocator>
struct RxmRAW_
{
  typedef RxmRAW_<ContainerAllocator> Type;

  RxmRAW_()
    : iTOW(0)
    , week(0)
    , numSV(0)
    , reserved1(0)
    , sv()  {
    }
  RxmRAW_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , week(0)
    , numSV(0)
    , reserved1(0)
    , sv(_alloc)  {
    }



   typedef int32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef int16_t _week_type;
  _week_type week;

   typedef uint8_t _numSV_type;
  _numSV_type numSV;

   typedef uint8_t _reserved1_type;
  _reserved1_type reserved1;

   typedef std::vector< ::ublox_msgs::RxmRAW_SV_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ublox_msgs::RxmRAW_SV_<ContainerAllocator> >::other >  _sv_type;
  _sv_type sv;


    enum { CLASS_ID = 2u };
     enum { MESSAGE_ID = 16u };
 

  typedef boost::shared_ptr< ::ublox_msgs::RxmRAW_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::RxmRAW_<ContainerAllocator> const> ConstPtr;

}; // struct RxmRAW_

typedef ::ublox_msgs::RxmRAW_<std::allocator<void> > RxmRAW;

typedef boost::shared_ptr< ::ublox_msgs::RxmRAW > RxmRAWPtr;
typedef boost::shared_ptr< ::ublox_msgs::RxmRAW const> RxmRAWConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::RxmRAW_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::RxmRAW_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/juan/rover_workspace/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::RxmRAW_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::RxmRAW_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::RxmRAW_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1933e39502131517c68160a4906d1675";
  }

  static const char* value(const ::ublox_msgs::RxmRAW_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1933e39502131517ULL;
  static const uint64_t static_value2 = 0xc68160a4906d1675ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/RxmRAW";
  }

  static const char* value(const ::ublox_msgs::RxmRAW_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RXM-RAW (0x02 0x10)\n\
# Raw Measurement Data\n\
#\n\
# This message contains all information needed to be able to generate a RINEX file.\n\
#\n\
\n\
uint8 CLASS_ID = 2\n\
uint8 MESSAGE_ID = 16\n\
\n\
int32 iTOW              # Measurement integer millisecond GPS time of week (Receiver Time) [ms]\n\
int16 week              # Measurement GPS week number (Receiver Time) [weeks]\n\
\n\
uint8 numSV             # # of satellites following\n\
uint8 reserved1         # Reserved\n\
\n\
RxmRAW_SV[] sv\n\
\n\
================================================================================\n\
MSG: ublox_msgs/RxmRAW_SV\n\
# see message RxmRAW\n\
#\n\
\n\
float64 cpMes             # Carrier phase measurement [L1 cycles]\n\
float64 prMes             # Pseudorange measurement [m]\n\
float32 doMes             # Doppler measurement [Hz]\n\
\n\
uint8 sv                  # Space Vehicle Number\n\
int8 mesQI                # Nav Measurements Quality Indicator\n\
                          #  >=4 : PR+DO OK\n\
                          #  >=5 : PR+DO+CP OK\n\
                          #  <6 : likely loss of carrier lock in previous interval\n\
int8 cno                  # Signal strength C/No. [dbHz]\n\
uint8 lli                 # Loss of lock indicator (RINEX definition)\n\
";
  }

  static const char* value(const ::ublox_msgs::RxmRAW_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.week);
      stream.next(m.numSV);
      stream.next(m.reserved1);
      stream.next(m.sv);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RxmRAW_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::RxmRAW_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::RxmRAW_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "week: ";
    Printer<int16_t>::stream(s, indent + "  ", v.week);
    s << indent << "numSV: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numSV);
    s << indent << "reserved1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved1);
    s << indent << "sv[]" << std::endl;
    for (size_t i = 0; i < v.sv.size(); ++i)
    {
      s << indent << "  sv[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ublox_msgs::RxmRAW_SV_<ContainerAllocator> >::stream(s, indent + "    ", v.sv[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_RXMRAW_H
