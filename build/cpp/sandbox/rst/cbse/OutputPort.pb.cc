/* This file is generated - do not edit. */

#include "OutputPort.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseOutputPort,rst.cbse.OutputPort);

// Type-independent protocol buffer API for rst::cbse::OutputPort

 const rst::cbse::OutputPort& rst::cbse::OutputPort::default_instance(){
  static rst::cbse::OutputPort*instance=NULL;
  if(!instance)instance=new OutputPort();
  return *instance;
}

 const std::string rst::cbse::OutputPort::GetTypeName(){
  return "rst.cbse.OutputPort";
}

rst::cbse::OutputPort* rst::cbse::OutputPort::New(){
  return new rst::cbse::OutputPort();
}

int rst::cbse::OutputPort::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(*this);

}

bool rst::cbse::OutputPort::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::cbse::OutputPort::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::cbse::OutputPort::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::cbse::OutputPort::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstcbseOutputPort>(temp,*this,0,size);
  return true;
  

}


