/* This file is generated - do not edit. */

#include "Timestamp.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingTimestamp,rst.timing.Timestamp);

// Type-independent protocol buffer API for rst::timing::Timestamp

 const rst::timing::Timestamp& rst::timing::Timestamp::default_instance(){
  static rst::timing::Timestamp*instance=NULL;
  if(!instance)instance=new Timestamp();
  return *instance;
}

 const std::string rst::timing::Timestamp::GetTypeName(){
  return "rst.timing.Timestamp";
}

rst::timing::Timestamp* rst::timing::Timestamp::New(){
  return new rst::timing::Timestamp();
}


