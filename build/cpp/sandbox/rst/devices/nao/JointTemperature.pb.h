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

class JointTemperature{
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
  inline const std::string&name() const;
  
  /**
   * Return value of "name" field.
   */
  inline std::string*mutable_name();
  
  inline void set_name(const std::string&newValue);
  
  
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
  static const JointTemperature& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  JointTemperature* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _name;
  float _temperature;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::nao::JointTemperature

 bool rst::devices::nao::JointTemperature::has_name() const{
  return true;
}

 const std::string&rst::devices::nao::JointTemperature::name() const{
  return this->_name;
}

 std::string*rst::devices::nao::JointTemperature::mutable_name(){
  return &this->_name;
}

 void rst::devices::nao::JointTemperature::set_name(const std::string&newValue){
  this->_name=newValue;
}



 bool rst::devices::nao::JointTemperature::has_temperature() const{
  return true;
}

 const float&rst::devices::nao::JointTemperature::temperature() const{
  return this->_temperature;
}

 void rst::devices::nao::JointTemperature::set_temperature(const float&newValue){
  this->_temperature=newValue;
}




