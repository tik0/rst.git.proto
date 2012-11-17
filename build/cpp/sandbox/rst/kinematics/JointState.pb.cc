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


