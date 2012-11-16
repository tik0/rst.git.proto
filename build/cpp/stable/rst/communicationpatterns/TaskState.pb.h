/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>


namespace rst {
namespace communicationpatterns {

class TaskState{
public:
  // Nested Types
  enum State{
    INITIATED=0,
    ACCEPTED=1,
    REJECTED=2,
    UPDATE=3,
    UPDATE_REJECTED=4,
    ABORT=5,
    ABORTED=6,
    ABORT_FAILED=7,
    RESULT_AVAILABLE=8,
    COMPLETED=9,
    FAILED=10
    
  };
  
  enum Origin{
    SUBMITTER=0,
    HANDLER=1
    
  };
  
  // Accessors
  /**
   * Field number of the "origin" field.
   */
  static const int koriginFieldNumber = 0;
  
  /**
   * Return true if the "origin" field is present.
   */
  inline bool has_origin() const;
  
  /**
   * Return value of "origin" field.
   */
  inline const rst::communicationpatterns::TaskState::Origin&origin() const;
  
  /**
   * Return value of "origin" field.
   */
  inline rst::communicationpatterns::TaskState::Origin*mutable_origin();
  
  inline void set_origin(const rst::communicationpatterns::TaskState::Origin&newValue);
  
  
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
  inline const rst::communicationpatterns::TaskState::State&state() const;
  
  /**
   * Return value of "state" field.
   */
  inline rst::communicationpatterns::TaskState::State*mutable_state();
  
  inline void set_state(const rst::communicationpatterns::TaskState::State&newValue);
  
  
  /**
   * Field number of the "serial" field.
   */
  static const int kserialFieldNumber = 0;
  
  /**
   * Return true if the "serial" field is present.
   */
  inline bool has_serial() const;
  
  /**
   * Return value of "serial" field.
   */
  inline const boost::uint32_t&serial() const;
  
  inline void set_serial(const boost::uint32_t&newValue);
  
  
  /**
   * Field number of the "wire_schema" field.
   */
  static const int kwire_schemaFieldNumber = 0;
  
  /**
   * Return true if the "wire_schema" field is present.
   */
  inline bool has_wire_schema() const;
  
  /**
   * Return value of "wire_schema" field.
   */
  inline const std::vector<unsigned char>&wire_schema() const;
  
  /**
   * Return value of "wire_schema" field.
   */
  inline std::vector<unsigned char>*mutable_wire_schema();
  
  inline void set_wire_schema(const std::vector<unsigned char>&newValue);
  inline void set_wire_schema(const std::string&newValue);
  inline void set_wire_schema(const boost::uint8_t* data,unsigned int size);
  
  /**
   * Field number of the "payload" field.
   */
  static const int kpayloadFieldNumber = 0;
  
  /**
   * Return true if the "payload" field is present.
   */
  inline bool has_payload() const;
  
  /**
   * Return value of "payload" field.
   */
  inline const std::vector<unsigned char>&payload() const;
  
  /**
   * Return value of "payload" field.
   */
  inline std::vector<unsigned char>*mutable_payload();
  
  inline void set_payload(const std::vector<unsigned char>&newValue);
  inline void set_payload(const std::string&newValue);
  inline void set_payload(const boost::uint8_t* data,unsigned int size);
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const TaskState& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  TaskState* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  rst::communicationpatterns::TaskState::Origin _origin;
  rst::communicationpatterns::TaskState::State _state;
  boost::uint32_t _serial;
  std::vector<unsigned char> _wire_schema;
  std::vector<unsigned char> _payload;
  
};
}
}

// Inlined Stuff





// Accessors for rst::communicationpatterns::TaskState

 bool rst::communicationpatterns::TaskState::has_origin() const{
  return true;
}

 const rst::communicationpatterns::TaskState::Origin&rst::communicationpatterns::TaskState::origin() const{
  return this->_origin;
}

 rst::communicationpatterns::TaskState::Origin*rst::communicationpatterns::TaskState::mutable_origin(){
  return &this->_origin;
}

 void rst::communicationpatterns::TaskState::set_origin(const rst::communicationpatterns::TaskState::Origin&newValue){
  this->_origin=newValue;
}



 bool rst::communicationpatterns::TaskState::has_state() const{
  return true;
}

 const rst::communicationpatterns::TaskState::State&rst::communicationpatterns::TaskState::state() const{
  return this->_state;
}

 rst::communicationpatterns::TaskState::State*rst::communicationpatterns::TaskState::mutable_state(){
  return &this->_state;
}

 void rst::communicationpatterns::TaskState::set_state(const rst::communicationpatterns::TaskState::State&newValue){
  this->_state=newValue;
}



 bool rst::communicationpatterns::TaskState::has_serial() const{
  return true;
}

 const boost::uint32_t&rst::communicationpatterns::TaskState::serial() const{
  return this->_serial;
}

 void rst::communicationpatterns::TaskState::set_serial(const boost::uint32_t&newValue){
  this->_serial=newValue;
}



 bool rst::communicationpatterns::TaskState::has_wire_schema() const{
  return true;
}

 const std::vector<unsigned char>&rst::communicationpatterns::TaskState::wire_schema() const{
  return this->_wire_schema;
}

 std::vector<unsigned char>*rst::communicationpatterns::TaskState::mutable_wire_schema(){
  return &this->_wire_schema;
}

 void rst::communicationpatterns::TaskState::set_wire_schema(const std::vector<unsigned char>&newValue){
  this->_wire_schema=newValue;
}
 void rst::communicationpatterns::TaskState::set_wire_schema(const std::string&newValue){
  this->_wire_schema.resize(newValue.size());
  memcpy(&this->_wire_schema[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::communicationpatterns::TaskState::set_wire_schema(const boost::uint8_t* data,unsigned int size){
  this->_wire_schema.resize(size);
  memcpy(&this->_wire_schema[0],data,size);
}


 bool rst::communicationpatterns::TaskState::has_payload() const{
  return true;
}

 const std::vector<unsigned char>&rst::communicationpatterns::TaskState::payload() const{
  return this->_payload;
}

 std::vector<unsigned char>*rst::communicationpatterns::TaskState::mutable_payload(){
  return &this->_payload;
}

 void rst::communicationpatterns::TaskState::set_payload(const std::vector<unsigned char>&newValue){
  this->_payload=newValue;
}
 void rst::communicationpatterns::TaskState::set_payload(const std::string&newValue){
  this->_payload.resize(newValue.size());
  memcpy(&this->_payload[0],(unsigned char*)&newValue[0],newValue.size());
}
 void rst::communicationpatterns::TaskState::set_payload(const boost::uint8_t* data,unsigned int size){
  this->_payload.resize(size);
  memcpy(&this->_payload[0],data,size);
}



