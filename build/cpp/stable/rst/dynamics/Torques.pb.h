/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace dynamics {

class Torques{
public:
  // Accessors
  /**
   * Field number of the "a" field.
   */
  static const int kaFieldNumber = 0;
  
  /**
   * Return true if the "a" field is present.
   */
  inline bool has_a() const;
  
  /**
   * Return value of "a" field.
   */
  inline const float&a() const;
  
  inline void set_a(const float&newValue);
  
  
  /**
   * Field number of the "b" field.
   */
  static const int kbFieldNumber = 0;
  
  /**
   * Return true if the "b" field is present.
   */
  inline bool has_b() const;
  
  /**
   * Return value of "b" field.
   */
  inline const float&b() const;
  
  inline void set_b(const float&newValue);
  
  
  /**
   * Field number of the "c" field.
   */
  static const int kcFieldNumber = 0;
  
  /**
   * Return true if the "c" field is present.
   */
  inline bool has_c() const;
  
  /**
   * Return value of "c" field.
   */
  inline const float&c() const;
  
  inline void set_c(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Torques& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Torques* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _a;
  float _b;
  float _c;
  
};
}
}

// Inlined Stuff

// Accessors for rst::dynamics::Torques

 bool rst::dynamics::Torques::has_a() const{
  return true;
}

 const float&rst::dynamics::Torques::a() const{
  return this->_a;
}

 void rst::dynamics::Torques::set_a(const float&newValue){
  this->_a=newValue;
}



 bool rst::dynamics::Torques::has_b() const{
  return true;
}

 const float&rst::dynamics::Torques::b() const{
  return this->_b;
}

 void rst::dynamics::Torques::set_b(const float&newValue){
  this->_b=newValue;
}



 bool rst::dynamics::Torques::has_c() const{
  return true;
}

 const float&rst::dynamics::Torques::c() const{
  return this->_c;
}

 void rst::dynamics::Torques::set_c(const float&newValue){
  this->_c=newValue;
}




