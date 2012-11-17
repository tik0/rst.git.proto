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


