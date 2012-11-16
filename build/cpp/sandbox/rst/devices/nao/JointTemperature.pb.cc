/* This file is generated - do not edit. */

#include "JointTemperature.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoJointTemperature,rst.devices.nao.JointTemperature);

// Type-independent protocol buffer API for rst::devices::nao::JointTemperature

 const rst::devices::nao::JointTemperature& rst::devices::nao::JointTemperature::default_instance(){
  static rst::devices::nao::JointTemperature*instance=NULL;
  if(!instance)instance=new JointTemperature();
  return *instance;
}

 const std::string rst::devices::nao::JointTemperature::GetTypeName(){
  return "rst.devices.nao.JointTemperature";
}

rst::devices::nao::JointTemperature* rst::devices::nao::JointTemperature::New(){
  return new rst::devices::nao::JointTemperature();
}

int rst::devices::nao::JointTemperature::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(*this);

}

bool rst::devices::nao::JointTemperature::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::devices::nao::JointTemperature::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::devices::nao::JointTemperature::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::devices::nao::JointTemperature::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdevicesnaoJointTemperature>(temp,*this,0,size);
  return true;
  

}


