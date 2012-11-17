/* This file is generated - do not edit. */

#include "InstantaneousPhase.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstInstantaneousPhase,rst.InstantaneousPhase);

// Type-independent protocol buffer API for rst::InstantaneousPhase

 const rst::InstantaneousPhase& rst::InstantaneousPhase::default_instance(){
  static rst::InstantaneousPhase*instance=NULL;
  if(!instance)instance=new InstantaneousPhase();
  return *instance;
}

 const std::string rst::InstantaneousPhase::GetTypeName(){
  return "rst.InstantaneousPhase";
}

rst::InstantaneousPhase* rst::InstantaneousPhase::New(){
  return new rst::InstantaneousPhase();
}


