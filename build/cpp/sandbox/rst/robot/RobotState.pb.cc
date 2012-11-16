/* This file is generated - do not edit. */

#include "RobotState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstrobotRobotState,rst.robot.RobotState);
DEFINE_WIRE_SCHEMA(rstrobotRobotStateConnectionStatus,rst.robot.RobotState.ConnectionStatus);
DEFINE_WIRE_SCHEMA(rstrobotRobotStateMotionStatus,rst.robot.RobotState.MotionStatus);
DEFINE_WIRE_SCHEMA(rstrobotRobotStateForceStatus,rst.robot.RobotState.ForceStatus);







// Type-independent protocol buffer API for rst::robot::RobotState

 const rst::robot::RobotState& rst::robot::RobotState::default_instance(){
  static rst::robot::RobotState*instance=NULL;
  if(!instance)instance=new RobotState();
  return *instance;
}

 const std::string rst::robot::RobotState::GetTypeName(){
  return "rst.robot.RobotState";
}

rst::robot::RobotState* rst::robot::RobotState::New(){
  return new rst::robot::RobotState();
}

int rst::robot::RobotState::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(*this);

}

bool rst::robot::RobotState::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::robot::RobotState::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::robot::RobotState::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::robot::RobotState::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstrobotRobotState>(temp,*this,0,size);
  return true;
  

}


