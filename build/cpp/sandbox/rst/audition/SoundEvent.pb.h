/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace audition {

class SoundEvent{
public:
  // Accessors
  /**
   * Field number of the "name" field.
   */
  static const int knameFieldNumber = 0;
  
  /**
   * Return true if the "name" field is present.
   */
  inline bool has_name() const;
  
  /**
   * Return value of "name" field.
   */
  inline const std::string&name() const;
  
  /**
   * Return value of "name" field.
   */
  inline std::string*mutable_name();
  
  inline void set_name(const std::string&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const SoundEvent& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  SoundEvent* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _name;
  
};
}
}

// Inlined Stuff

// Accessors for rst::audition::SoundEvent

 bool rst::audition::SoundEvent::has_name() const{
  return true;
}

 const std::string&rst::audition::SoundEvent::name() const{
  return this->_name;
}

 std::string*rst::audition::SoundEvent::mutable_name(){
  return &this->_name;
}

 void rst::audition::SoundEvent::set_name(const std::string&newValue){
  this->_name=newValue;
}




