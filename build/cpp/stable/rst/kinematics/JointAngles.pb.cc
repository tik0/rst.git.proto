/* This file is generated - do not edit. */

#include "JointAngles.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstkinematicsJointAngles,rst.kinematics.JointAngles);

// Type-independent protocol buffer API for rst::kinematics::JointAngles

 const rst::kinematics::JointAngles& rst::kinematics::JointAngles::default_instance(){
  static rst::kinematics::JointAngles*instance=NULL;
  if(!instance)instance=new JointAngles();
  return *instance;
}

 const std::string rst::kinematics::JointAngles::GetTypeName(){
  return "rst.kinematics.JointAngles";
}

rst::kinematics::JointAngles* rst::kinematics::JointAngles::New(){
  return new rst::kinematics::JointAngles();
}

int rst::kinematics::JointAngles::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(*this);

}

bool rst::kinematics::JointAngles::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::kinematics::JointAngles::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::kinematics::JointAngles::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::kinematics::JointAngles::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsJointAngles>(temp,*this,0,size);
  return true;
  

}


