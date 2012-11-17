/* This file is generated - do not edit. */

#include "Wrench.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsWrench,rst.dynamics.Wrench);

// Type-independent protocol buffer API for rst::dynamics::Wrench

 const rst::dynamics::Wrench& rst::dynamics::Wrench::default_instance(){
  static rst::dynamics::Wrench*instance=NULL;
  if(!instance)instance=new Wrench();
  return *instance;
}

 const std::string rst::dynamics::Wrench::GetTypeName(){
  return "rst.dynamics.Wrench";
}

rst::dynamics::Wrench* rst::dynamics::Wrench::New(){
  return new rst::dynamics::Wrench();
}


