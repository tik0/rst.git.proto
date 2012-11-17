/* This file is generated - do not edit. */

#include "Duration.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingDuration,rst.timing.Duration);

// Type-independent protocol buffer API for rst::timing::Duration

 const rst::timing::Duration& rst::timing::Duration::default_instance(){
  static rst::timing::Duration*instance=NULL;
  if(!instance)instance=new Duration();
  return *instance;
}

 const std::string rst::timing::Duration::GetTypeName(){
  return "rst.timing.Duration";
}

rst::timing::Duration* rst::timing::Duration::New(){
  return new rst::timing::Duration();
}


