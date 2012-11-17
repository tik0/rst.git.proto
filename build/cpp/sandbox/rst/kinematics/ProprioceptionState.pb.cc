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


