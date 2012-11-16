/* This file is generated - do not edit. */

#include "InputPort.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseInputPort,rst.cbse.InputPort);

// Type-independent protocol buffer API for rst::cbse::InputPort

 const rst::cbse::InputPort& rst::cbse::InputPort::default_instance(){
  static rst::cbse::InputPort*instance=NULL;
  if(!instance)instance=new InputPort();
  return *instance;
}

 const std::string rst::cbse::InputPort::GetTypeName(){
  return "rst.cbse.InputPort";
}

rst::cbse::InputPort* rst::cbse::InputPort::New(){
  return new rst::cbse::InputPort();
}

int rst::cbse::InputPort::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(*this);

}

bool rst::cbse::InputPort::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::cbse::InputPort::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::cbse::InputPort::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::cbse::InputPort::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseInputPort>(temp,*this,0,size);
  return true;
  

}


