/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace devices {
namespace generic {

class Battery{
public:
  // Accessors
  /**
   * Field number of the "battery_status" field.
   */
  static const int kbattery_statusFieldNumber = 0;
  
  /**
   * Return true if the "battery_status" field is present.
   */
  inline bool has_battery_status() const;
  
  /**
   * Return value of "battery_status" field.
   */
  inline const float&battery_status() const;
  
  inline void set_battery_status(const float&newValue);
  
  
  /**
   * Field number of the "battery_charge" field.
   */
  static const int kbattery_chargeFieldNumber = 0;
  
  /**
   * Return true if the "battery_charge" field is present.
   */
  inline bool has_battery_charge() const;
  
  /**
   * Return value of "battery_charge" field.
   */
  inline const float&battery_charge() const;
  
  inline void set_battery_charge(const float&newValue);
  
  
  /**
   * Field number of the "battery_temperature" field.
   */
  static const int kbattery_temperatureFieldNumber = 0;
  
  /**
   * Return true if the "battery_temperature" field is present.
   */
  inline bool has_battery_temperature() const;
  
  /**
   * Return value of "battery_temperature" field.
   */
  inline const float&battery_temperature() const;
  
  inline void set_battery_temperature(const float&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const Battery& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  Battery* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  float _battery_status;
  float _battery_charge;
  float _battery_temperature;
  
};
}
}
}

// Inlined Stuff

// Accessors for rst::devices::generic::Battery

 bool rst::devices::generic::Battery::has_battery_status() const{
  return true;
}

 const float&rst::devices::generic::Battery::battery_status() const{
  return this->_battery_status;
}

 void rst::devices::generic::Battery::set_battery_status(const float&newValue){
  this->_battery_status=newValue;
}



 bool rst::devices::generic::Battery::has_battery_charge() const{
  return true;
}

 const float&rst::devices::generic::Battery::battery_charge() const{
  return this->_battery_charge;
}

 void rst::devices::generic::Battery::set_battery_charge(const float&newValue){
  this->_battery_charge=newValue;
}



 bool rst::devices::generic::Battery::has_battery_temperature() const{
  return true;
}

 const float&rst::devices::generic::Battery::battery_temperature() const{
  return this->_battery_temperature;
}

 void rst::devices::generic::Battery::set_battery_temperature(const float&newValue){
  this->_battery_temperature=newValue;
}




