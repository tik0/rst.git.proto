/* This file is generated - do not edit. */

#include "Frequency.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingFrequency,rst.timing.Frequency);

// Type-independent protocol buffer API for rst::timing::Frequency

 const rst::timing::Frequency& rst::timing::Frequency::default_instance(){
  static rst::timing::Frequency*instance=NULL;
  if(!instance)instance=new Frequency();
  return *instance;
}

 const std::string rst::timing::Frequency::GetTypeName(){
  return "rst.timing.Frequency";
}

rst::timing::Frequency* rst::timing::Frequency::New(){
  return new rst::timing::Frequency();
}


