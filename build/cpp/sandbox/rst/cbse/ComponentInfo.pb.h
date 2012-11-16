/* This file is generated - do not edit. */

#pragma once

#include <string.h> // for memcpy()

#include <string>
#include <vector>

#include <boost/cstdint.hpp>

#include <rosetta/api.h>

#include <rst/cbse/ComponentState.pb.h>
#include <rst/cbse/InputPort.pb.h>
#include <rst/cbse/OutputPort.pb.h>
#include <rst/timing/Duration.pb.h>
#include <rst/timing/Frequency.pb.h>

namespace rst {
namespace cbse {

class ComponentInfo{
public:
  // Accessors
  /**
   * Field number of the "id" field.
   */
  static const int kidFieldNumber = 0;
  
  /**
   * Return true if the "id" field is present.
   */
  inline bool has_id() const;
  
  /**
   * Return value of "id" field.
   */
  inline const std::string&id() const;
  
  /**
   * Return value of "id" field.
   */
  inline std::string*mutable_id();
  
  inline void set_id(const std::string&newValue);
  
  
  /**
   * Field number of the "lifecycle" field.
   */
  static const int klifecycleFieldNumber = 0;
  
  /**
   * Return true if the "lifecycle" field is present.
   */
  inline bool has_lifecycle() const;
  
  /**
   * Return value of "lifecycle" field.
   */
  inline const rst::cbse::ComponentState&lifecycle() const;
  
  /**
   * Return value of "lifecycle" field.
   */
  inline rst::cbse::ComponentState*mutable_lifecycle();
  
  inline void set_lifecycle(const rst::cbse::ComponentState&newValue);
  
  
  /**
   * Field number of the "inputs" field.
   */
  static const int kinputsFieldNumber = 0;
  
  /**
   * Return true if the "inputs" field is present.
   */
  inline bool has_inputs() const;
  
  /**
   * Return value of "inputs" field.
   */
  inline const rst::cbse::InputPort&inputs() const;
  
  /**
   * Return value of "inputs" field.
   */
  inline rst::cbse::InputPort*mutable_inputs();
  
  inline void set_inputs(const rst::cbse::InputPort&newValue);
  
  
  /**
   * Field number of the "outputs" field.
   */
  static const int koutputsFieldNumber = 0;
  
  /**
   * Return true if the "outputs" field is present.
   */
  inline bool has_outputs() const;
  
  /**
   * Return value of "outputs" field.
   */
  inline const rst::cbse::OutputPort&outputs() const;
  
  /**
   * Return value of "outputs" field.
   */
  inline rst::cbse::OutputPort*mutable_outputs();
  
  inline void set_outputs(const rst::cbse::OutputPort&newValue);
  
  
  /**
   * Field number of the "uptime" field.
   */
  static const int kuptimeFieldNumber = 0;
  
  /**
   * Return true if the "uptime" field is present.
   */
  inline bool has_uptime() const;
  
  /**
   * Return value of "uptime" field.
   */
  inline const rst::timing::Duration&uptime() const;
  
  /**
   * Return value of "uptime" field.
   */
  inline rst::timing::Duration*mutable_uptime();
  
  inline void set_uptime(const rst::timing::Duration&newValue);
  
  
  /**
   * Field number of the "freqency" field.
   */
  static const int kfreqencyFieldNumber = 0;
  
  /**
   * Return true if the "freqency" field is present.
   */
  inline bool has_freqency() const;
  
  /**
   * Return value of "freqency" field.
   */
  inline const rst::timing::Frequency&freqency() const;
  
  /**
   * Return value of "freqency" field.
   */
  inline rst::timing::Frequency*mutable_freqency();
  
  inline void set_freqency(const rst::timing::Frequency&newValue);
  
  
  // Type-independent protocol buffer API
  
  /**
   * Return the default instance of this class.
   * 
   * @return A reference to the default instance.
  
   */
  static const ComponentInfo& default_instance();
  
  /**
   * Return the fully qualified name of this class.
   */
  static const std::string GetTypeName();
  
  /**
   * Return a new instance of this class.
   */
  ComponentInfo* New();
  
  /**
   * Return the number of octets required to store the serialized
   * representation of this object.
  
   */
  int ByteSize() const;
  
  bool SerializeToString(std::string* destination) const;
  
  bool ParseFromString(const std::string& source);
  
  bool SerializeToArray(void* destination,int size) const;
  
  bool ParseFromArray(const void* source,int size);
  
  std::string _id;
  rst::cbse::ComponentState _lifecycle;
  rst::cbse::InputPort _inputs;
  rst::cbse::OutputPort _outputs;
  rst::timing::Duration _uptime;
  rst::timing::Frequency _freqency;
  
};
}
}

// Inlined Stuff

// Accessors for rst::cbse::ComponentInfo

 bool rst::cbse::ComponentInfo::has_id() const{
  return true;
}

 const std::string&rst::cbse::ComponentInfo::id() const{
  return this->_id;
}

 std::string*rst::cbse::ComponentInfo::mutable_id(){
  return &this->_id;
}

 void rst::cbse::ComponentInfo::set_id(const std::string&newValue){
  this->_id=newValue;
}



 bool rst::cbse::ComponentInfo::has_lifecycle() const{
  return true;
}

 const rst::cbse::ComponentState&rst::cbse::ComponentInfo::lifecycle() const{
  return this->_lifecycle;
}

 rst::cbse::ComponentState*rst::cbse::ComponentInfo::mutable_lifecycle(){
  return &this->_lifecycle;
}

 void rst::cbse::ComponentInfo::set_lifecycle(const rst::cbse::ComponentState&newValue){
  this->_lifecycle=newValue;
}



 bool rst::cbse::ComponentInfo::has_inputs() const{
  return true;
}

 const rst::cbse::InputPort&rst::cbse::ComponentInfo::inputs() const{
  return this->_inputs;
}

 rst::cbse::InputPort*rst::cbse::ComponentInfo::mutable_inputs(){
  return &this->_inputs;
}

 void rst::cbse::ComponentInfo::set_inputs(const rst::cbse::InputPort&newValue){
  this->_inputs=newValue;
}



 bool rst::cbse::ComponentInfo::has_outputs() const{
  return true;
}

 const rst::cbse::OutputPort&rst::cbse::ComponentInfo::outputs() const{
  return this->_outputs;
}

 rst::cbse::OutputPort*rst::cbse::ComponentInfo::mutable_outputs(){
  return &this->_outputs;
}

 void rst::cbse::ComponentInfo::set_outputs(const rst::cbse::OutputPort&newValue){
  this->_outputs=newValue;
}



 bool rst::cbse::ComponentInfo::has_uptime() const{
  return true;
}

 const rst::timing::Duration&rst::cbse::ComponentInfo::uptime() const{
  return this->_uptime;
}

 rst::timing::Duration*rst::cbse::ComponentInfo::mutable_uptime(){
  return &this->_uptime;
}

 void rst::cbse::ComponentInfo::set_uptime(const rst::timing::Duration&newValue){
  this->_uptime=newValue;
}



 bool rst::cbse::ComponentInfo::has_freqency() const{
  return true;
}

 const rst::timing::Frequency&rst::cbse::ComponentInfo::freqency() const{
  return this->_freqency;
}

 rst::timing::Frequency*rst::cbse::ComponentInfo::mutable_freqency(){
  return &this->_freqency;
}

 void rst::cbse::ComponentInfo::set_freqency(const rst::timing::Frequency&newValue){
  this->_freqency=newValue;
}




