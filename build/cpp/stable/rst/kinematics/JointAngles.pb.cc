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


