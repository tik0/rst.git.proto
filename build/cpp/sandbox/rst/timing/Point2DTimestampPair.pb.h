/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/math/Vec2DFloat.pb.h>
#include <rst/timing/Timestamp.pb.h>

namespace rst {
namespace timing {

class Point2DTimestampPair{
public:
  // Accessors
  /**
   * Field number of the "point" field.
   */
  static const int kpointFieldNumber = 0;
  
  /**
   * Return true if the "point" field is present.
   */
  inline bool has_point() const;
  
  /**
   * Return value of "point" field.
   */
  inline const rst::math::Vec2DFloat&point() const;
  
  /**
   * Return value of "point" field.
   */
  inline rst::math::Vec2DFloat*mutable_point();
  
  inline void set_point(const rst::math::Vec2DFloat&newValue);
  
  
  /**
   * Field number of the "timestamp" field.
   */
  static const int ktimestampFieldNumber = 0;
  
  /**
   * Return true if the "timestamp" field is present.
   */
  inline bool has_timestamp() const;
  
  /**
   * Return value of "timestamp" field.
   */
  inline const rst::timing::Timestamp&timestamp() const;
  
  /**
   * Return value of "timestamp" field.
   */
  inline rst::timing::Timestamp*mutable_timestamp();
  
  inline void set_timestamp(const rst::timing::Timestamp&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Point2DTimestampPair& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Point2DTimestampPair* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::math::Vec2DFloat _point;
  rst::timing::Timestamp _timestamp;
  
};
}
}

// Inlined Stuff

// Accessors for rst::timing::Point2DTimestampPair

 bool rst::timing::Point2DTimestampPair::has_point() const{
  return true;
}

 const rst::math::Vec2DFloat&rst::timing::Point2DTimestampPair::point() const{
  return this->_point;
}

 rst::math::Vec2DFloat*rst::timing::Point2DTimestampPair::mutable_point(){
  return &this->_point;
}

 void rst::timing::Point2DTimestampPair::set_point(const rst::math::Vec2DFloat&newValue){
  this->_point=newValue;
}



 bool rst::timing::Point2DTimestampPair::has_timestamp() const{
  return true;
}

 const rst::timing::Timestamp&rst::timing::Point2DTimestampPair::timestamp() const{
  return this->_timestamp;
}

 rst::timing::Timestamp*rst::timing::Point2DTimestampPair::mutable_timestamp(){
  return &this->_timestamp;
}

 void rst::timing::Point2DTimestampPair::set_timestamp(const rst::timing::Timestamp&newValue){
  this->_timestamp=newValue;
}




