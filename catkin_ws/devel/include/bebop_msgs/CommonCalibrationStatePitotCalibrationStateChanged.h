// Generated by gencpp from file bebop_msgs/CommonCalibrationStatePitotCalibrationStateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONCALIBRATIONSTATEPITOTCALIBRATIONSTATECHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONCALIBRATIONSTATEPITOTCALIBRATIONSTATECHANGED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct CommonCalibrationStatePitotCalibrationStateChanged_
{
  typedef CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> Type;

  CommonCalibrationStatePitotCalibrationStateChanged_()
    : header()
    , state(0)
    , lastError(0)  {
    }
  CommonCalibrationStatePitotCalibrationStateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , lastError(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint8_t _lastError_type;
  _lastError_type lastError;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(state_done)
  #undef state_done
#endif
#if defined(_WIN32) && defined(state_ready)
  #undef state_ready
#endif
#if defined(_WIN32) && defined(state_in_progress)
  #undef state_in_progress
#endif
#if defined(_WIN32) && defined(state_required)
  #undef state_required
#endif

  enum {
    state_done = 0u,
    state_ready = 1u,
    state_in_progress = 2u,
    state_required = 3u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonCalibrationStatePitotCalibrationStateChanged_

typedef ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<std::allocator<void> > CommonCalibrationStatePitotCalibrationStateChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged > CommonCalibrationStatePitotCalibrationStateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged const> CommonCalibrationStatePitotCalibrationStateChangedConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state == rhs.state &&
    lhs.lastError == rhs.lastError;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator1> & lhs, const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d222c31db9ca732c48a9aa11e2f3afa";
  }

  static const char* value(const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d222c31db9ca732ULL;
  static const uint64_t static_value2 = 0xc48a9aa11e2f3afaULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonCalibrationStatePitotCalibrationStateChanged";
  }

  static const char* value(const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonCalibrationStatePitotCalibrationStateChanged\n"
"# auto-generated from up stream XML files at\n"
"#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n"
"# To check upstream commit hash, refer to last_build_info file\n"
"# Do not modify this file by hand. Check scripts/meta folder for generator files.\n"
"#\n"
"# SDK Comment: \n"
"\n"
"Header header\n"
"\n"
"# State of pitot calibration\n"
"uint8 state_done=0  # Calibration is ok\n"
"uint8 state_ready=1  # Calibration is started, waiting user action\n"
"uint8 state_in_progress=2  # Calibration is in progress\n"
"uint8 state_required=3  # Calibration is required\n"
"uint8 state\n"
"# lastError : 1 if an error occured and 0 if not\n"
"uint8 lastError\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.lastError);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonCalibrationStatePitotCalibrationStateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonCalibrationStatePitotCalibrationStateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "lastError: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lastError);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONCALIBRATIONSTATEPITOTCALIBRATIONSTATECHANGED_H
