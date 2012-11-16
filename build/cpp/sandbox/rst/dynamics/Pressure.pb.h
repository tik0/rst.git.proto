/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace dynamics {

class Pressure{
public:
  // Accessors
  /**
   * Field number of the "pressures" field.
   */
  static const int kpressuresFieldNumber = 0;
  
  /**
   * Return true if the "pressures" field is present.
   */
  inline bool has_pressures() const;
  
  /**
   * Return the number of elements in "pressures".
   */
  inline int pressures_size() const;
  /**
   * Return the element at @a index of "pressures".
   */
  inline const double& pressures(unsigned int index) const;
  /**
   * Return value of "pressures" field.
   */
  inline const std::vector<double>&pressures() const;
  
  
  /**
   * Set element at index @a index of "pressures" to @a newValue.
   */
  inline void set_pressures(unsigned int index,const double& newValue);
  /**
   * Append an item to "pressures" and return a pointer to it.
   */
  inline void add_pressures(const double& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Pressure& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Pressure* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<double> _pressures;
  
};
}
}

// Inlined Stuff

// Accessors for rst::dynamics::Pressure

 bool rst::dynamics::Pressure::has_pressures() const{
  return true;
}

 int rst::dynamics::Pressure::pressures_size() const{
  return this->_pressures.size();
}
 const double& rst::dynamics::Pressure::pressures(unsigned int index) const{
  return this->_pressures[index];
}
 const std::vector<double>&rst::dynamics::Pressure::pressures() const{
  return this->_pressures;
}



 void rst::dynamics::Pressure::set_pressures(unsigned int index,const double& newValue){
  if(this->_pressures.size()<=index){
    this->_pressures.resize(index+1);
  }
  this->_pressures[index]=newValue;

}
 void rst::dynamics::Pressure::add_pressures(const double& newValue){
  this->_pressures.push_back(newValue);
}


