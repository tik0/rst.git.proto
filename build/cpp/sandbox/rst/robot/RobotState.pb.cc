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


