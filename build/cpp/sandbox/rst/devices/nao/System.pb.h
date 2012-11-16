/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace devices {
namespace nao {

class System{
public:
  // Accessors
  /**
   * Field number of the "robot_name" field.
   */
  static const int krobot_nameFieldNumber = 0;
  
  /**
   * Return true if the "robot_name" field is present.
   */
  inline bool has_robot_name() const;
  
  /**
   * Return value of "robot_name" field.
   */
  inline const std::string&robot_name() const;
  
  /**
   * Return value of "robot_name" field.
   */
  inline std::string*mutable_robot_name();
  
  inline void set_robot_name(const std::string&newValue);
  
  
  /**
   * Field number of the "naoqi_version" field.
   */
  static const int knaoqi_versionFieldNumber = 0;
  
  /**
   * Return true if the "naoqi_version" field is present.
   */
  inline bool has_naoqi_version() const;
  
  /**
   * Return value of "naoqi_version" field.
   */
  inline const std::string&naoqi_version() const;
  
  /**
   * Return value of "naoqi_version" field.
   */
  inline std::string*mutable_naoqi_version();
  
  inline void set_naoqi_version(const std::string&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const System& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  System* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _robot_name;
  std::string _naoqi_version;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::nao::System

 bool rst::devices::nao::System::has_robot_name() const{
  return true;
}

 const std::string&rst::devices::nao::System::robot_name() const{
  return this->_robot_name;
}

 std::string*rst::devices::nao::System::mutable_robot_name(){
  return &this->_robot_name;
}

 void rst::devices::nao::System::set_robot_name(const std::string&newValue){
  this->_robot_name=newValue;
}



 bool rst::devices::nao::System::has_naoqi_version() const{
  return true;
}

 const std::string&rst::devices::nao::System::naoqi_version() const{
  return this->_naoqi_version;
}

 std::string*rst::devices::nao::System::mutable_naoqi_version(){
  return &this->_naoqi_version;
}

 void rst::devices::nao::System::set_naoqi_version(const std::string&newValue){
  this->_naoqi_version=newValue;
}




