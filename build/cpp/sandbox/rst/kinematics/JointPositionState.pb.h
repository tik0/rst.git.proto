/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/kinematics/JointState.pb.h>

namespace rst {
namespace kinematics {

class JointPositionState{
public:
  // Accessors
  /**
   * Field number of the "joints" field.
   */
  static const int kjointsFieldNumber = 0;
  
  /**
   * Return true if the "joints" field is present.
   */
  inline bool has_joints() const;
  
  /**
   * Return the number of elements in "joints".
   */
  inline int joints_size() const;
  /**
   * Return the element at @a index of "joints".
   */
  inline const rst::kinematics::JointState& joints(unsigned int index) const;
  /**
   * Return value of "joints" field.
   */
  inline const std::vector<rst::kinematics::JointState>&joints() const;
  
  
  /**
   * Set element at index @a index of "joints" to @a newValue.
   */
  inline void set_joints(unsigned int index,const rst::kinematics::JointState& newValue);
  /**
   * Append an item to "joints" and return a pointer to it.
   */
  inline rst::kinematics::JointState* add_joints();
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const JointPositionState& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  JointPositionState* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<rst::kinematics::JointState> _joints;
  
};
}
}

// Inlined Stuff

// Accessors for rst::kinematics::JointPositionState

 bool rst::kinematics::JointPositionState::has_joints() const{
  return true;
}

 int rst::kinematics::JointPositionState::joints_size() const{
  return this->_joints.size();
}
 const rst::kinematics::JointState& rst::kinematics::JointPositionState::joints(unsigned int index) const{
  return this->_joints[index];
}
 const std::vector<rst::kinematics::JointState>&rst::kinematics::JointPositionState::joints() const{
  return this->_joints;
}



 void rst::kinematics::JointPositionState::set_joints(unsigned int index,const rst::kinematics::JointState& newValue){
  if(this->_joints.size()<=index){
    this->_joints.resize(index+1);
  }
  this->_joints[index]=newValue;

}
 rst::kinematics::JointState* rst::kinematics::JointPositionState::add_joints(){
  this->_joints.resize(this->_joints.size()+1);
  return &this->_joints.back();

}


