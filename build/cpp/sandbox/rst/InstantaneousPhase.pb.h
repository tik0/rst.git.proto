/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {

class InstantaneousPhase{
public:
  // Accessors
  /**
   * Field number of the "phase" field.
   */
  static const int kphaseFieldNumber = 0;
  
  /**
   * Return true if the "phase" field is present.
   */
  inline bool has_phase() const;
  
  /**
   * Return value of "phase" field.
   */
  inline const float&phase() const;
  
  inline void set_phase(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const InstantaneousPhase& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  InstantaneousPhase* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _phase;
  
};
}

// Inlined Stuff

// Accessors for rst::InstantaneousPhase

 bool rst::InstantaneousPhase::has_phase() const{
  return true;
}

 const float&rst::InstantaneousPhase::phase() const{
  return this->_phase;
}

 void rst::InstantaneousPhase::set_phase(const float&newValue){
  this->_phase=newValue;
}




