/* This file is generated - do not edit. */

#include "ProprioceptionState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstkinematicsProprioceptionState,rst.kinematics.ProprioceptionState);

// Type-independent protocol buffer API for rst::kinematics::ProprioceptionState

 const rst::kinematics::ProprioceptionState& rst::kinematics::ProprioceptionState::default_instance(){
  static rst::kinematics::ProprioceptionState*instance=NULL;
  if(!instance)instance=new ProprioceptionState();
  return *instance;
}

 const std::string rst::kinematics::ProprioceptionState::GetTypeName(){
  return "rst.kinematics.ProprioceptionState";
}

rst::kinematics::ProprioceptionState* rst::kinematics::ProprioceptionState::New(){
  return new rst::kinematics::ProprioceptionState();
}

int rst::kinematics::ProprioceptionState::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(*this);

}

bool rst::kinematics::ProprioceptionState::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::kinematics::ProprioceptionState::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::kinematics::ProprioceptionState::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::kinematics::ProprioceptionState::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstkinematicsProprioceptionState>(temp,*this,0,size);
  return true;
  

}


