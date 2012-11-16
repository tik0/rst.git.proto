/* This file is generated - do not edit. */

#include "Value.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericValue,rst.generic.Value);
DEFINE_WIRE_SCHEMA(rstgenericValueType,rst.generic.Value.Type);



// Type-independent protocol buffer API for rst::generic::Value

 const rst::generic::Value& rst::generic::Value::default_instance(){
  static rst::generic::Value*instance=NULL;
  if(!instance)instance=new Value();
  return *instance;
}

 const std::string rst::generic::Value::GetTypeName(){
  return "rst.generic.Value";
}

rst::generic::Value* rst::generic::Value::New(){
  return new rst::generic::Value();
}

int rst::generic::Value::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(*this);

}

bool rst::generic::Value::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::generic::Value::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::generic::Value::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::generic::Value::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstgenericValue>(temp,*this,0,size);
  return true;
  

}


