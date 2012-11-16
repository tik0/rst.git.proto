/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace timing {

class Frequency{
public:
  // Accessors
  /**
   * Field number of the "hz" field.
   */
  static const int khzFieldNumber = 0;
  
  /**
   * Return true if the "hz" field is present.
   */
  inline bool has_hz() const;
  
  /**
   * Return value of "hz" field.
   */
  inline const double&hz() const;
  
  inline void set_hz(const double&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Frequency& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Frequency* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  double _hz;
  
};
}
}

// Inlined Stuff

// Accessors for rst::timing::Frequency

 bool rst::timing::Frequency::has_hz() const{
  return true;
}

 const double&rst::timing::Frequency::hz() const{
  return this->_hz;
}

 void rst::timing::Frequency::set_hz(const double&newValue){
  this->_hz=newValue;
}




