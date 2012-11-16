/* This file is generated - do not edit. */

#include "Forces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsForces,rst.dynamics.Forces);

// Type-independent protocol buffer API for rst::dynamics::Forces

 const rst::dynamics::Forces& rst::dynamics::Forces::default_instance(){
  static rst::dynamics::Forces*instance=NULL;
  if(!instance)instance=new Forces();
  return *instance;
}

 const std::string rst::dynamics::Forces::GetTypeName(){
  return "rst.dynamics.Forces";
}

rst::dynamics::Forces* rst::dynamics::Forces::New(){
  return new rst::dynamics::Forces();
}

int rst::dynamics::Forces::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(*this);

}

bool rst::dynamics::Forces::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::Forces::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::Forces::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::Forces::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsForces>(temp,*this,0,size);
  return true;
  

}


