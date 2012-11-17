/* This file is generated - do not edit. */

#include "Forces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsForces,rst.dynamics.Forces);

// Type-independent protocol buffer API for rst::dynamics::Forces

 const rst::dynamics::Forces& rst::dynamics::Forces::default_instance(){
  static rst::dynamics::Forces*instance=NULL;
  if(!instance)instance=new Forces();
  return *instance;
}

 const std::string rst::dynamics::Forces::GetTypeName(){
  return "rst.dynamics.Forces";
}

rst::dynamics::Forces* rst::dynamics::Forces::New(){
  return new rst::dynamics::Forces();
}


