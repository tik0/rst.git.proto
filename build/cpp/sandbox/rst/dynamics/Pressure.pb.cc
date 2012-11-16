/* This file is generated - do not edit. */

#include "Pressure.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsPressure,rst.dynamics.Pressure);

// Type-independent protocol buffer API for rst::dynamics::Pressure

 const rst::dynamics::Pressure& rst::dynamics::Pressure::default_instance(){
  static rst::dynamics::Pressure*instance=NULL;
  if(!instance)instance=new Pressure();
  return *instance;
}

 const std::string rst::dynamics::Pressure::GetTypeName(){
  return "rst.dynamics.Pressure";
}

rst::dynamics::Pressure* rst::dynamics::Pressure::New(){
  return new rst::dynamics::Pressure();
}

int rst::dynamics::Pressure::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(*this);

}

bool rst::dynamics::Pressure::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::Pressure::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::Pressure::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::Pressure::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsPressure>(temp,*this,0,size);
  return true;
  

}


