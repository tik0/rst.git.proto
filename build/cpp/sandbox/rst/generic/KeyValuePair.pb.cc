/* This file is generated - do not edit. */

#include "KeyValuePair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericKeyValuePair,rst.generic.KeyValuePair);

// Type-independent protocol buffer API for rst::generic::KeyValuePair

 const rst::generic::KeyValuePair& rst::generic::KeyValuePair::default_instance(){
  static rst::generic::KeyValuePair*instance=NULL;
  if(!instance)instance=new KeyValuePair();
  return *instance;
}

 const std::string rst::generic::KeyValuePair::GetTypeName(){
  return "rst.generic.KeyValuePair";
}

rst::generic::KeyValuePair* rst::generic::KeyValuePair::New(){
  return new rst::generic::KeyValuePair();
}

int rst::generic::KeyValuePair::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(*this);

}

bool rst::generic::KeyValuePair::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::generic::KeyValuePair::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::generic::KeyValuePair::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::generic::KeyValuePair::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericKeyValuePair>(temp,*this,0,size);
  return true;
  

}


