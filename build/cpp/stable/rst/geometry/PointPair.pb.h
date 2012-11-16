/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/math/Vec2DFloat.pb.h>

namespace rst {
namespace geometry {

class PointPair{
public:
  // Accessors
  /**
   * Field number of the "first" field.
   */
  static const int kfirstFieldNumber = 0;
  
  /**
   * Return true if the "first" field is present.
   */
  inline bool has_first() const;
  
  /**
   * Return value of "first" field.
   */
  inline const rst::math::Vec2DFloat&first() const;
  
  /**
   * Return value of "first" field.
   */
  inline rst::math::Vec2DFloat*mutable_first();
  
  inline void set_first(const rst::math::Vec2DFloat&newValue);
  
  
  /**
   * Field number of the "second" field.
   */
  static const int ksecondFieldNumber = 0;
  
  /**
   * Return true if the "second" field is present.
   */
  inline bool has_second() const;
  
  /**
   * Return value of "second" field.
   */
  inline const rst::math::Vec2DFloat&second() const;
  
  /**
   * Return value of "second" field.
   */
  inline rst::math::Vec2DFloat*mutable_second();
  
  inline void set_second(const rst::math::Vec2DFloat&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const PointPair& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  PointPair* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::math::Vec2DFloat _first;
  rst::math::Vec2DFloat _second;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::PointPair

 bool rst::geometry::PointPair::has_first() const{
  return true;
}

 const rst::math::Vec2DFloat&rst::geometry::PointPair::first() const{
  return this->_first;
}

 rst::math::Vec2DFloat*rst::geometry::PointPair::mutable_first(){
  return &this->_first;
}

 void rst::geometry::PointPair::set_first(const rst::math::Vec2DFloat&newValue){
  this->_first=newValue;
}



 bool rst::geometry::PointPair::has_second() const{
  return true;
}

 const rst::math::Vec2DFloat&rst::geometry::PointPair::second() const{
  return this->_second;
}

 rst::math::Vec2DFloat*rst::geometry::PointPair::mutable_second(){
  return &this->_second;
}

 void rst::geometry::PointPair::set_second(const rst::math::Vec2DFloat&newValue){
  this->_second=newValue;
}




