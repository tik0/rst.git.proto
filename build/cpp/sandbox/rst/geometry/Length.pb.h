/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace geometry {

class Length{
public:
  // Accessors
  /**
   * Field number of the "lengths" field.
   */
  static const int klengthsFieldNumber = 0;
  
  /**
   * Return true if the "lengths" field is present.
   */
  inline bool has_lengths() const;
  
  /**
   * Return the number of elements in "lengths".
   */
  inline int lengths_size() const;
  /**
   * Return the element at @a index of "lengths".
   */
  inline const double& lengths(unsigned int index) const;
  /**
   * Return value of "lengths" field.
   */
  inline const std::vector<double>&lengths() const;
  
  
  /**
   * Set element at index @a index of "lengths" to @a newValue.
   */
  inline void set_lengths(unsigned int index,const double& newValue);
  /**
   * Append an item to "lengths" and return a pointer to it.
   */
  inline void add_lengths(const double& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Length& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Length* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<double> _lengths;
  
};
}
}

// Inlined Stuff

// Accessors for rst::geometry::Length

 bool rst::geometry::Length::has_lengths() const{
  return true;
}

 int rst::geometry::Length::lengths_size() const{
  return this->_lengths.size();
}
 const double& rst::geometry::Length::lengths(unsigned int index) const{
  return this->_lengths[index];
}
 const std::vector<double>&rst::geometry::Length::lengths() const{
  return this->_lengths;
}



 void rst::geometry::Length::set_lengths(unsigned int index,const double& newValue){
  if(this->_lengths.size()<=index){
    this->_lengths.resize(index+1);
  }
  this->_lengths[index]=newValue;

}
 void rst::geometry::Length::add_lengths(const double& newValue){
  this->_lengths.push_back(newValue);
}


