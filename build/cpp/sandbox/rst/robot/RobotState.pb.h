/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace robot {

class RobotState{
public:
  // Nested Types
  enum ConnectionStatus{
    CONNECTED=1,
    NOT_CONNECTED=2
    
  };
  
  enum MotionStatus{
    CONVERGED=1,
    MOVING=2
    
  };
  
  enum ForceStatus{
    CONSTANT=1,
    CHANGING=2
    
  };
  
  // Accessors
  /**
   * Field number of the "connection" field.
   */
  static const int kconnectionFieldNumber = 0;
  
  /**
   * Return true if the "connection" field is present.
   */
  inline bool has_connection() const;
  
  /**
   * Return value of "connection" field.
   */
  inline const rst::robot::RobotState::ConnectionStatus&connection() const;
  
  /**
   * Return value of "connection" field.
   */
  inline rst::robot::RobotState::ConnectionStatus*mutable_connection();
  
  inline void set_connection(const rst::robot::RobotState::ConnectionStatus&newValue);
  
  
  /**
   * Field number of the "motion" field.
   */
  static const int kmotionFieldNumber = 0;
  
  /**
   * Return true if the "motion" field is present.
   */
  inline bool has_motion() const;
  
  /**
   * Return value of "motion" field.
   */
  inline const rst::robot::RobotState::MotionStatus&motion() const;
  
  /**
   * Return value of "motion" field.
   */
  inline rst::robot::RobotState::MotionStatus*mutable_motion();
  
  inline void set_motion(const rst::robot::RobotState::MotionStatus&newValue);
  
  
  /**
   * Field number of the "forces" field.
   */
  static const int kforcesFieldNumber = 0;
  
  /**
   * Return true if the "forces" field is present.
   */
  inline bool has_forces() const;
  
  /**
   * Return value of "forces" field.
   */
  inline const rst::robot::RobotState::ForceStatus&forces() const;
  
  /**
   * Return value of "forces" field.
   */
  inline rst::robot::RobotState::ForceStatus*mutable_forces();
  
  inline void set_forces(const rst::robot::RobotState::ForceStatus&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const RobotState& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  RobotState* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::robot::RobotState::ConnectionStatus _connection;
  rst::robot::RobotState::MotionStatus _motion;
  rst::robot::RobotState::ForceStatus _forces;
  
};
}
}

// Inlined Stuff







// Accessors for rst::robot::RobotState

 bool rst::robot::RobotState::has_connection() const{
  return true;
}

 const rst::robot::RobotState::ConnectionStatus&rst::robot::RobotState::connection() const{
  return this->_connection;
}

 rst::robot::RobotState::ConnectionStatus*rst::robot::RobotState::mutable_connection(){
  return &this->_connection;
}

 void rst::robot::RobotState::set_connection(const rst::robot::RobotState::ConnectionStatus&newValue){
  this->_connection=newValue;
}



 bool rst::robot::RobotState::has_motion() const{
  return true;
}

 const rst::robot::RobotState::MotionStatus&rst::robot::RobotState::motion() const{
  return this->_motion;
}

 rst::robot::RobotState::MotionStatus*rst::robot::RobotState::mutable_motion(){
  return &this->_motion;
}

 void rst::robot::RobotState::set_motion(const rst::robot::RobotState::MotionStatus&newValue){
  this->_motion=newValue;
}



 bool rst::robot::RobotState::has_forces() const{
  return true;
}

 const rst::robot::RobotState::ForceStatus&rst::robot::RobotState::forces() const{
  return this->_forces;
}

 rst::robot::RobotState::ForceStatus*rst::robot::RobotState::mutable_forces(){
  return &this->_forces;
}

 void rst::robot::RobotState::set_forces(const rst::robot::RobotState::ForceStatus&newValue){
  this->_forces=newValue;
}




