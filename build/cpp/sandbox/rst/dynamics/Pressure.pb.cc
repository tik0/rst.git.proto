/* This file is generated - do not edit. */

#include "Pressure.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsPressure,rst.dynamics.Pressure);

// Type-independent protocol buffer API for rst::dynamics::Pressure

 const rst::dynamics::Pressure& rst::dynamics::Pressure::default_instance(){
  static rst::dynamics::Pressure*instance=NULL;
  if(!instance)instance=new Pressure();
  return *instance;
}

 const std::string rst::dynamics::Pressure::GetTypeName(){
  return "rst.dynamics.Pressure";
}

rst::dynamics::Pressure* rst::dynamics::Pressure::New(){
  return new rst::dynamics::Pressure();
}


