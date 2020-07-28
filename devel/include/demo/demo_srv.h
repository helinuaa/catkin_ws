// Generated by gencpp from file demo/demo_srv.msg
// DO NOT EDIT!


#ifndef DEMO_MESSAGE_DEMO_SRV_H
#define DEMO_MESSAGE_DEMO_SRV_H

#include <ros/service_traits.h>


#include <demo/demo_srvRequest.h>
#include <demo/demo_srvResponse.h>


namespace demo
{

struct demo_srv
{

typedef demo_srvRequest Request;
typedef demo_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct demo_srv
} // namespace demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::demo::demo_srv > {
  static const char* value()
  {
    return "e21fb7853ad73d6d988d6371d4fed1e2";
  }

  static const char* value(const ::demo::demo_srv&) { return value(); }
};

template<>
struct DataType< ::demo::demo_srv > {
  static const char* value()
  {
    return "demo/demo_srv";
  }

  static const char* value(const ::demo::demo_srv&) { return value(); }
};


// service_traits::MD5Sum< ::demo::demo_srvRequest> should match 
// service_traits::MD5Sum< ::demo::demo_srv > 
template<>
struct MD5Sum< ::demo::demo_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::demo::demo_srv >::value();
  }
  static const char* value(const ::demo::demo_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::demo::demo_srvRequest> should match 
// service_traits::DataType< ::demo::demo_srv > 
template<>
struct DataType< ::demo::demo_srvRequest>
{
  static const char* value()
  {
    return DataType< ::demo::demo_srv >::value();
  }
  static const char* value(const ::demo::demo_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::demo::demo_srvResponse> should match 
// service_traits::MD5Sum< ::demo::demo_srv > 
template<>
struct MD5Sum< ::demo::demo_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::demo::demo_srv >::value();
  }
  static const char* value(const ::demo::demo_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::demo::demo_srvResponse> should match 
// service_traits::DataType< ::demo::demo_srv > 
template<>
struct DataType< ::demo::demo_srvResponse>
{
  static const char* value()
  {
    return DataType< ::demo::demo_srv >::value();
  }
  static const char* value(const ::demo::demo_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEMO_MESSAGE_DEMO_SRV_H