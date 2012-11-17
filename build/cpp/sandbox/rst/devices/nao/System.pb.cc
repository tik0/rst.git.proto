/* This file is generated - do not edit. */

#include "System.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoSystem,rst.devices.nao.System);

// Type-independent protocol buffer API for rst::devices::nao::System

 const rst::devices::nao::System& rst::devices::nao::System::default_instance(){
  static rst::devices::nao::System*instance=NULL;
  if(!instance)instance=new System();
  return *instance;
}

 const std::string rst::devices::nao::System::GetTypeName(){
  return "rst.devices.nao.System";
}

rst::devices::nao::System* rst::devices::nao::System::New(){
  return new rst::devices::nao::System();
}


