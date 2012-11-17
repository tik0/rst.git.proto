/* This file is generated - do not edit. */

#include "InterauralTimeDifference.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionInterauralTimeDifference,rst.audition.InterauralTimeDifference);

// Type-independent protocol buffer API for rst::audition::InterauralTimeDifference

 const rst::audition::InterauralTimeDifference& rst::audition::InterauralTimeDifference::default_instance(){
  static rst::audition::InterauralTimeDifference*instance=NULL;
  if(!instance)instance=new InterauralTimeDifference();
  return *instance;
}

 const std::string rst::audition::InterauralTimeDifference::GetTypeName(){
  return "rst.audition.InterauralTimeDifference";
}

rst::audition::InterauralTimeDifference* rst::audition::InterauralTimeDifference::New(){
  return new rst::audition::InterauralTimeDifference();
}


