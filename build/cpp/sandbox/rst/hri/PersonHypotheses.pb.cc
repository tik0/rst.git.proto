/* This file is generated - do not edit. */

#include "PersonHypotheses.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsthriPersonHypotheses,rst.hri.PersonHypotheses);

// Type-independent protocol buffer API for rst::hri::PersonHypotheses

 const rst::hri::PersonHypotheses& rst::hri::PersonHypotheses::default_instance(){
  static rst::hri::PersonHypotheses*instance=NULL;
  if(!instance)instance=new PersonHypotheses();
  return *instance;
}

 const std::string rst::hri::PersonHypotheses::GetTypeName(){
  return "rst.hri.PersonHypotheses";
}

rst::hri::PersonHypotheses* rst::hri::PersonHypotheses::New(){
  return new rst::hri::PersonHypotheses();
}


