/* This file is generated - do not edit. */

#include "MethodCall.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericMethodCall,rst.generic.MethodCall);

// Type-independent protocol buffer API for rst::generic::MethodCall

 const rst::generic::MethodCall& rst::generic::MethodCall::default_instance(){
  static rst::generic::MethodCall*instance=NULL;
  if(!instance)instance=new MethodCall();
  return *instance;
}

 const std::string rst::generic::MethodCall::GetTypeName(){
  return "rst.generic.MethodCall";
}

rst::generic::MethodCall* rst::generic::MethodCall::New(){
  return new rst::generic::MethodCall();
}

int rst::generic::MethodCall::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(*this);

}

bool rst::generic::MethodCall::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::generic::MethodCall::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::generic::MethodCall::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::generic::MethodCall::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericMethodCall>(temp,*this,0,size);
  return true;
  

}


