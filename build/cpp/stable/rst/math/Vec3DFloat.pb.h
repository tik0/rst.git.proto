/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace math {

class Vec3DFloat{
public:
  // Accessors
  /**
   * Field number of the "x" field.
   */
  static const int kxFieldNumber = 0;
  
  /**
   * Return true if the "x" field is present.
   */
  inline bool has_x() const;
  
  /**
   * Return value of "x" field.
   */
  inline const float&x() const;
  
  inline void set_x(const float&newValue);
  
  
  /**
   * Field number of the "y" field.
   */
  static const int kyFieldNumber = 0;
  
  /**
   * Return true if the "y" field is present.
   */
  inline bool has_y() const;
  
  /**
   * Return value of "y" field.
   */
  inline const float&y() const;
  
  inline void set_y(const float&newValue);
  
  
  /**
   * Field number of the "z" field.
   */
  static const int kzFieldNumber = 0;
  
  /**
   * Return true if the "z" field is present.
   */
  inline bool has_z() const;
  
  /**
   * Return value of "z" field.
   */
  inline const float&z() const;
  
  inline void set_z(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Vec3DFloat& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Vec3DFloat* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _x;
  float _y;
  float _z;
  
};
}
}

// Inlined Stuff

// Accessors for rst::math::Vec3DFloat

 bool rst::math::Vec3DFloat::has_x() const{
  return true;
}

 const float&rst::math::Vec3DFloat::x() const{
  return this->_x;
}

 void rst::math::Vec3DFloat::set_x(const float&newValue){
  this->_x=newValue;
}



 bool rst::math::Vec3DFloat::has_y() const{
  return true;
}

 const float&rst::math::Vec3DFloat::y() const{
  return this->_y;
}

 void rst::math::Vec3DFloat::set_y(const float&newValue){
  this->_y=newValue;
}



 bool rst::math::Vec3DFloat::has_z() const{
  return true;
}

 const float&rst::math::Vec3DFloat::z() const{
  return this->_z;
}

 void rst::math::Vec3DFloat::set_z(const float&newValue){
  this->_z=newValue;
}




