/* This file is generated - do not edit. */

#include "ComponentState.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseComponentState,rst.cbse.ComponentState);
DEFINE_WIRE_SCHEMA(rstcbseComponentStateState,rst.cbse.ComponentState.State);



// Type-independent protocol buffer API for rst::cbse::ComponentState

 const rst::cbse::ComponentState& rst::cbse::ComponentState::default_instance(){
  static rst::cbse::ComponentState*instance=NULL;
  if(!instance)instance=new ComponentState();
  return *instance;
}

 const std::string rst::cbse::ComponentState::GetTypeName(){
  return "rst.cbse.ComponentState";
}

rst::cbse::ComponentState* rst::cbse::ComponentState::New(){
  return new rst::cbse::ComponentState();
}


