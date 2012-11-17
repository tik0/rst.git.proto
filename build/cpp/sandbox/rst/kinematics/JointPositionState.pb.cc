/* This file is generated - do not edit. */

#include "JointPositionState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstkinematicsJointPositionState,rst.kinematics.JointPositionState);

// Type-independent protocol buffer API for rst::kinematics::JointPositionState

 const rst::kinematics::JointPositionState& rst::kinematics::JointPositionState::default_instance(){
  static rst::kinematics::JointPositionState*instance=NULL;
  if(!instance)instance=new JointPositionState();
  return *instance;
}

 const std::string rst::kinematics::JointPositionState::GetTypeName(){
  return "rst.kinematics.JointPositionState";
}

rst::kinematics::JointPositionState* rst::kinematics::JointPositionState::New(){
  return new rst::kinematics::JointPositionState();
}


