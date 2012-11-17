/* This file is generated - do not edit. */

#include "Modules.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoModules,rst.devices.nao.Modules);

// Type-independent protocol buffer API for rst::devices::nao::Modules

 const rst::devices::nao::Modules& rst::devices::nao::Modules::default_instance(){
  static rst::devices::nao::Modules*instance=NULL;
  if(!instance)instance=new Modules();
  return *instance;
}

 const std::string rst::devices::nao::Modules::GetTypeName(){
  return "rst.devices.nao.Modules";
}

rst::devices::nao::Modules* rst::devices::nao::Modules::New(){
  return new rst::devices::nao::Modules();
}


