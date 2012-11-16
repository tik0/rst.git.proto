/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace dynamics {

class JointImpedance{
public:
  // Accessors
  /**
   * Field number of the "stiffness" field.
   */
  static const int kstiffnessFieldNumber = 0;
  
  /**
   * Return true if the "stiffness" field is present.
   */
  inline bool has_stiffness() const;
  
  /**
   * Return the number of elements in "stiffness".
   */
  inline int stiffness_size() const;
  /**
   * Return the element at @a index of "stiffness".
   */
  inline const float& stiffness(unsigned int index) const;
  /**
   * Return value of "stiffness" field.
   */
  inline const std::vector<float>&stiffness() const;
  
  
  /**
   * Set element at index @a index of "stiffness" to @a newValue.
   */
  inline void set_stiffness(unsigned int index,const float& newValue);
  /**
   * Append an item to "stiffness" and return a pointer to it.
   */
  inline void add_stiffness(const float& newValue);
  
  /**
   * Field number of the "damping" field.
   */
  static const int kdampingFieldNumber = 0;
  
  /**
   * Return true if the "damping" field is present.
   */
  inline bool has_damping() const;
  
  /**
   * Return the number of elements in "damping".
   */
  inline int damping_size() const;
  /**
   * Return the element at @a index of "damping".
   */
  inline const float& damping(unsigned int index) const;
  /**
   * Return value of "damping" field.
   */
  inline const std::vector<float>&damping() const;
  
  
  /**
   * Set element at index @a index of "damping" to @a newValue.
   */
  inline void set_damping(unsigned int index,const float& newValue);
  /**
   * Append an item to "damping" and return a pointer to it.
   */
  inline void add_damping(const float& newValue);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const JointImpedance& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  JointImpedance* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<float> _stiffness;
  std::vector<float> _damping;
  
};
}
}

// Inlined Stuff

// Accessors for rst::dynamics::JointImpedance

 bool rst::dynamics::JointImpedance::has_stiffness() const{
  return true;
}

 int rst::dynamics::JointImpedance::stiffness_size() const{
  return this->_stiffness.size();
}
 const float& rst::dynamics::JointImpedance::stiffness(unsigned int index) const{
  return this->_stiffness[index];
}
 const std::vector<float>&rst::dynamics::JointImpedance::stiffness() const{
  return this->_stiffness;
}



 void rst::dynamics::JointImpedance::set_stiffness(unsigned int index,const float& newValue){
  if(this->_stiffness.size()<=index){
    this->_stiffness.resize(index+1);
  }
  this->_stiffness[index]=newValue;

}
 void rst::dynamics::JointImpedance::add_stiffness(const float& newValue){
  this->_stiffness.push_back(newValue);
}

 bool rst::dynamics::JointImpedance::has_damping() const{
  return true;
}

 int rst::dynamics::JointImpedance::damping_size() const{
  return this->_damping.size();
}
 const float& rst::dynamics::JointImpedance::damping(unsigned int index) const{
  return this->_damping[index];
}
 const std::vector<float>&rst::dynamics::JointImpedance::damping() const{
  return this->_damping;
}



 void rst::dynamics::JointImpedance::set_damping(unsigned int index,const float& newValue){
  if(this->_damping.size()<=index){
    this->_damping.resize(index+1);
  }
  this->_damping[index]=newValue;

}
 void rst::dynamics::JointImpedance::add_damping(const float& newValue){
  this->_damping.push_back(newValue);
}


