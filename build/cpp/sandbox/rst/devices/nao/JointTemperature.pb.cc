/* This file is generated - do not edit. */

#include "JointTemperature.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoJointTemperature,rst.devices.nao.JointTemperature);

// Type-independent protocol buffer API for rst::devices::nao::JointTemperature

 const rst::devices::nao::JointTemperature& rst::devices::nao::JointTemperature::default_instance(){
  static rst::devices::nao::JointTemperature*instance=NULL;
  if(!instance)instance=new JointTemperature();
  return *instance;
}

 const std::string rst::devices::nao::JointTemperature::GetTypeName(){
  return "rst.devices.nao.JointTemperature";
}

rst::devices::nao::JointTemperature* rst::devices::nao::JointTemperature::New(){
  return new rst::devices::nao::JointTemperature();
}


