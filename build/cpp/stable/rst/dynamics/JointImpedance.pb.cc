/* This file is generated - do not edit. */

#include "JointImpedance.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsJointImpedance,rst.dynamics.JointImpedance);

// Type-independent protocol buffer API for rst::dynamics::JointImpedance

 const rst::dynamics::JointImpedance& rst::dynamics::JointImpedance::default_instance(){
  static rst::dynamics::JointImpedance*instance=NULL;
  if(!instance)instance=new JointImpedance();
  return *instance;
}

 const std::string rst::dynamics::JointImpedance::GetTypeName(){
  return "rst.dynamics.JointImpedance";
}

rst::dynamics::JointImpedance* rst::dynamics::JointImpedance::New(){
  return new rst::dynamics::JointImpedance();
}

int rst::dynamics::JointImpedance::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(*this);

}

bool rst::dynamics::JointImpedance::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::dynamics::JointImpedance::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::dynamics::JointImpedance::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::dynamics::JointImpedance::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstdynamicsJointImpedance>(temp,*this,0,size);
  return true;
  

}


