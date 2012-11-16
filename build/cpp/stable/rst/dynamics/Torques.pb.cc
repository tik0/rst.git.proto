/* This file is generated - do not edit. */

#include "Torques.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsTorques,rst.dynamics.Torques);

// Type-independent protocol buffer API for rst::dynamics::Torques

 const rst::dynamics::Torques& rst::dynamics::Torques::default_instance(){
  static rst::dynamics::Torques*instance=NULL;
  if(!instance)instance=new Torques();
  return *instance;
}

 const std::string rst::dynamics::Torques::GetTypeName(){
  return "rst.dynamics.Torques";
}

rst::dynamics::Torques* rst::dynamics::Torques::New(){
  return new rst::dynamics::Torques();
}

int rst::dynamics::Torques::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(*this);

}

bool rst::dynamics::Torques::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::Torques::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::Torques::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::Torques::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsTorques>(temp,*this,0,size);
  return true;
  

}


