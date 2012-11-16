/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace kinematics {

class JointState{
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
  inline const std::vector<unsigned char>&name() const;
  
  /**
   * Return value of "name" field.
   */
  inline std::vector<unsigned char>*mutable_name();
  
  inline void set_name(const std::vector<unsigned char>&newValue);
  inline void set_name(const std::string&newValue);
  inline void set_name(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "value" field.
   */
  static const int kvalueFieldNumber = 0;
  
  /**
   * Return true if the "value" field is present.
   */
  inline bool has_value() const;
  
  /**
   * Return value of "value" field.
   */
  inline const float&value() const;
  
  inline void set_value(const float&newValue);
  
  
  /**
   * Field number of the "stiffness" field.
   */
  static const int kstiffnessFieldNumber = 0;
  
  /**
   * Return true if the "stiffness" field is present.
   */
  inline bool has_stiffness() const;
  
  /**
   * Return value of "stiffness" field.
   */
  inline const float&stiffness() const;
  
  inline void set_stiffness(const float&newValue);
  
  
  /**
   * Field number of the "command" field.
   */
  static const int kcommandFieldNumber = 0;
  
  /**
   * Return true if the "command" field is present.
   */
  inline bool has_command() const;
  
  /**
   * Return value of "command" field.
   */
  inline const float&command() const;
  
  inline void set_command(const float&newValue);
  
  
  /**
   * Field number of the "temperature" field.
   */
  static const int ktemperatureFieldNumber = 0;
  
  /**
   * Return true if the "temperature" field is present.
   */
  inline bool has_temperature() const;
  
  /**
   * Return value of "temperature" field.
   */
  inline const float&temperature() const;
  
  inline void set_temperature(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const JointState& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  JointState* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::vector<unsigned char> _name;
  float _value;
  float _stiffness;
  float _command;
  float _temperature;
  
};
}
}

// Inlined Stuff

// Accessors for rst::kinematics::JointState

 bool rst::kinematics::JointState::has_name() const{
  return true;
}

 const std::vector<unsigned char>&rst::kinematics::JointState::name() const{
  return this->_name;
}

 std::vector<unsigned char>*rst::kinematics::JointState::mutable_name(){
  return &this->_name;
}

 void rst::kinematics::JointState::set_name(const std::vector<unsigned char>&newValue){
  this->_name=newValue;
}
 void rst::kinematics::JointState::set_name(const std::string&newValue){
  this->_name.resize(newValue.size());
  memcpy(&this->_name[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::kinematics::JointState::set_name(const boost::uint8_t* data,unsigned int size){
  this->_name.resize(size);
  memcpy(&this->_name[0],data,size);
}


 bool rst::kinematics::JointState::has_value() const{
  return true;
}

 const float&rst::kinematics::JointState::value() const{
  return this->_value;
}

 void rst::kinematics::JointState::set_value(const float&newValue){
  this->_value=newValue;
}



 bool rst::kinematics::JointState::has_stiffness() const{
  return true;
}

 const float&rst::kinematics::JointState::stiffness() const{
  return this->_stiffness;
}

 void rst::kinematics::JointState::set_stiffness(const float&newValue){
  this->_stiffness=newValue;
}



 bool rst::kinematics::JointState::has_command() const{
  return true;
}

 const float&rst::kinematics::JointState::command() const{
  return this->_command;
}

 void rst::kinematics::JointState::set_command(const float&newValue){
  this->_command=newValue;
}



 bool rst::kinematics::JointState::has_temperature() const{
  return true;
}

 const float&rst::kinematics::JointState::temperature() const{
  return this->_temperature;
}

 void rst::kinematics::JointState::set_temperature(const float&newValue){
  this->_temperature=newValue;
}




