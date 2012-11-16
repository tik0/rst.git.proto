/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace cbse {

class ComponentState{
public:
  // Nested Types
  enum State{
    OFF=1,
    ON=2,
    PAUSED=3,
    EXECUTION=4,
    ONLINELEARNING=5,
    OFFLINELEARNING=6,
    RESET=7
    
  };
  
  // Accessors
  /**
   * Field number of the "state" field.
   */
  static const int kstateFieldNumber = 0;
  
  /**
   * Return true if the "state" field is present.
   */
  inline bool has_state() const;
  
  /**
   * Return value of "state" field.
   */
  inline const rst::cbse::ComponentState::State&state() const;
  
  /**
   * Return value of "state" field.
   */
  inline rst::cbse::ComponentState::State*mutable_state();
  
  inline void set_state(const rst::cbse::ComponentState::State&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const ComponentState& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  ComponentState* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::cbse::ComponentState::State _state;
  
};
}
}

// Inlined Stuff



// Accessors for rst::cbse::ComponentState

 bool rst::cbse::ComponentState::has_state() const{
  return true;
}

 const rst::cbse::ComponentState::State&rst::cbse::ComponentState::state() const{
  return this->_state;
}

 rst::cbse::ComponentState::State*rst::cbse::ComponentState::mutable_state(){
  return &this->_state;
}

 void rst::cbse::ComponentState::set_state(const rst::cbse::ComponentState::State&newValue){
  this->_state=newValue;
}




