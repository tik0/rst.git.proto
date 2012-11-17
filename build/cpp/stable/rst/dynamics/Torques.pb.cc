/* This file is generated - do not edit. */

#include "Torques.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsTorques,rst.dynamics.Torques);

// Type-independent protocol buffer API for rst::dynamics::Torques

 const rst::dynamics::Torques& rst::dynamics::Torques::default_instance(){
  static rst::dynamics::Torques*instance=NULL;
  if(!instance)instance=new Torques();
  return *instance;
}

 const std::string rst::dynamics::Torques::GetTypeName(){
  return "rst.dynamics.Torques";
}

rst::dynamics::Torques* rst::dynamics::Torques::New(){
  return new rst::dynamics::Torques();
}


