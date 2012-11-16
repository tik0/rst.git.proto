/* This file is generated - do not edit. */

#include "JointTorques.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsJointTorques,rst.dynamics.JointTorques);

// Type-independent protocol buffer API for rst::dynamics::JointTorques

 const rst::dynamics::JointTorques& rst::dynamics::JointTorques::default_instance(){
  static rst::dynamics::JointTorques*instance=NULL;
  if(!instance)instance=new JointTorques();
  return *instance;
}

 const std::string rst::dynamics::JointTorques::GetTypeName(){
  return "rst.dynamics.JointTorques";
}

rst::dynamics::JointTorques* rst::dynamics::JointTorques::New(){
  return new rst::dynamics::JointTorques();
}

int rst::dynamics::JointTorques::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(*this);

}

bool rst::dynamics::JointTorques::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::JointTorques::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::JointTorques::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::JointTorques::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointTorques>(temp,*this,0,size);
  return true;
  

}


