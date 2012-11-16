/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace kinematics {

class JointAngles{
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
  inline const float& angles(unsigned int index) const;
  /**
   * Return value of "angles" field.
   */
  inline const std::vector<float>&angles() const;
  
  
  /**
   * Set element at index @a index of "angles" to @a newValue.
   */
  inline void set_angles(unsigned int index,const float& newValue);
  /**
   * Append an item to "angles" and return a pointer to it.
   */
  inline void add_angles(const float& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const JointAngles& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  JointAngles* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<float> _angles;
  
};
}
}

// Inlined Stuff

// Accessors for rst::kinematics::JointAngles

 bool rst::kinematics::JointAngles::has_angles() const{
  return true;
}

 int rst::kinematics::JointAngles::angles_size() const{
  return this->_angles.size();
}
 const float& rst::kinematics::JointAngles::angles(unsigned int index) const{
  return this->_angles[index];
}
 const std::vector<float>&rst::kinematics::JointAngles::angles() const{
  return this->_angles;
}



 void rst::kinematics::JointAngles::set_angles(unsigned int index,const float& newValue){
  if(this->_angles.size()<=index){
    this->_angles.resize(index+1);
  }
  this->_angles[index]=newValue;

}
 void rst::kinematics::JointAngles::add_angles(const float& newValue){
  this->_angles.push_back(newValue);
}


