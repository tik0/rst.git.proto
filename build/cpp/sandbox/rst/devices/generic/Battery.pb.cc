/* This file is generated - do not edit. */

#include "Battery.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesgenericBattery,rst.devices.generic.Battery);

// Type-independent protocol buffer API for rst::devices::generic::Battery

 const rst::devices::generic::Battery& rst::devices::generic::Battery::default_instance(){
  static rst::devices::generic::Battery*instance=NULL;
  if(!instance)instance=new Battery();
  return *instance;
}

 const std::string rst::devices::generic::Battery::GetTypeName(){
  return "rst.devices.generic.Battery";
}

rst::devices::generic::Battery* rst::devices::generic::Battery::New(){
  return new rst::devices::generic::Battery();
}


