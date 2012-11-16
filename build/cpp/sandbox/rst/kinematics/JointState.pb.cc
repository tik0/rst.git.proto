/* This file is generated - do not edit. */

#include "JointState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstkinematicsJointState,rst.kinematics.JointState);

// Type-independent protocol buffer API for rst::kinematics::JointState

 const rst::kinematics::JointState& rst::kinematics::JointState::default_instance(){
  static rst::kinematics::JointState*instance=NULL;
  if(!instance)instance=new JointState();
  return *instance;
}

 const std::string rst::kinematics::JointState::GetTypeName(){
  return "rst.kinematics.JointState";
}

rst::kinematics::JointState* rst::kinematics::JointState::New(){
  return new rst::kinematics::JointState();
}

int rst::kinematics::JointState::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(*this);

}

bool rst::kinematics::JointState::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::kinematics::JointState::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::kinematics::JointState::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::kinematics::JointState::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointState>(temp,*this,0,size);
  return true;
  

}


