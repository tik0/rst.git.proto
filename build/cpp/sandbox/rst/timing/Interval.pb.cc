/* This file is generated - do not edit. */

#include "Interval.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingInterval,rst.timing.Interval);

// Type-independent protocol buffer API for rst::timing::Interval

 const rst::timing::Interval& rst::timing::Interval::default_instance(){
  static rst::timing::Interval*instance=NULL;
  if(!instance)instance=new Interval();
  return *instance;
}

 const std::string rst::timing::Interval::GetTypeName(){
  return "rst.timing.Interval";
}

rst::timing::Interval* rst::timing::Interval::New(){
  return new rst::timing::Interval();
}


