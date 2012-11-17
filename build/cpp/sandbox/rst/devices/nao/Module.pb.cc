/* This file is generated - do not edit. */

#include "Module.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoModule,rst.devices.nao.Module);

// Type-independent protocol buffer API for rst::devices::nao::Module

 const rst::devices::nao::Module& rst::devices::nao::Module::default_instance(){
  static rst::devices::nao::Module*instance=NULL;
  if(!instance)instance=new Module();
  return *instance;
}

 const std::string rst::devices::nao::Module::GetTypeName(){
  return "rst.devices.nao.Module";
}

rst::devices::nao::Module* rst::devices::nao::Module::New(){
  return new rst::devices::nao::Module();
}


