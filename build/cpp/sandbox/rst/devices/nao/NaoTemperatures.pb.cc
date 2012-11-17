/* This file is generated - do not edit. */

#include "NaoTemperatures.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesnaoNaoTemperatures,rst.devices.nao.NaoTemperatures);

// Type-independent protocol buffer API for rst::devices::nao::NaoTemperatures

 const rst::devices::nao::NaoTemperatures& rst::devices::nao::NaoTemperatures::default_instance(){
  static rst::devices::nao::NaoTemperatures*instance=NULL;
  if(!instance)instance=new NaoTemperatures();
  return *instance;
}

 const std::string rst::devices::nao::NaoTemperatures::GetTypeName(){
  return "rst.devices.nao.NaoTemperatures";
}

rst::devices::nao::NaoTemperatures* rst::devices::nao::NaoTemperatures::New(){
  return new rst::devices::nao::NaoTemperatures();
}


