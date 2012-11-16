/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace angles {

class state{
public:
  // Accessors
  /**
   * Field number of the "angles" field.
   */
  static const int kanglesFieldNumber = 0;
  
  /**
   * Return true if the "angles" field is present.
   */
  inline bool has_angles() const;
  
  /**
   * Return the number of elements in "angles".
   */
  inline int angles_size() const;
  /**
   * Return the element at @a index of "angles".
   */
  inline const double& angles(unsigned int index) const;
  /**
   * Return value of "angles" field.
   */
  inline const std::vector<double>&angles() const;
  
  
  /**
   * Set element at index @a index of "angles" to @a newValue.
   */
  inline void set_angles(unsigned int index,const double& newValue);
  /**
   * Append an item to "angles" and return a pointer to it.
   */
  inline void add_angles(const double& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const state& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  state* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<double> _angles;
  
};
}

// Inlined Stuff

// Accessors for angles::state

 bool angles::state::has_angles() const{
  return true;
}

 int angles::state::angles_size() const{
  return this->_angles.size();
}
 const double& angles::state::angles(unsigned int index) const{
  return this->_angles[index];
}
 const std::vector<double>&angles::state::angles() const{
  return this->_angles;
}



 void angles::state::set_angles(unsigned int index,const double& newValue){
  if(this->_angles.size()<=index){
    this->_angles.resize(index+1);
  }
  this->_angles[index]=newValue;

}
 void angles::state::add_angles(const double& newValue){
  this->_angles.push_back(newValue);
}


