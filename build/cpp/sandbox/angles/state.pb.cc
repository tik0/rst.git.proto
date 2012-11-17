/* This file is generated - do not edit. */

#include "state.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(anglesstate,angles.state);

// Type-independent protocol buffer API for angles::state

 const angles::state& angles::state::default_instance(){
  static angles::state*instance=NULL;
  if(!instance)instance=new state();
  return *instance;
}

 const std::string angles::state::GetTypeName(){
  return "angles.state";
}

angles::state* angles::state::New(){
  return new angles::state();
}


