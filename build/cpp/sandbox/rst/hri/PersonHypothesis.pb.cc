/* This file is generated - do not edit. */

#include "PersonHypothesis.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsthriPersonHypothesis,rst.hri.PersonHypothesis);

// Type-independent protocol buffer API for rst::hri::PersonHypothesis

 const rst::hri::PersonHypothesis& rst::hri::PersonHypothesis::default_instance(){
  static rst::hri::PersonHypothesis*instance=NULL;
  if(!instance)instance=new PersonHypothesis();
  return *instance;
}

 const std::string rst::hri::PersonHypothesis::GetTypeName(){
  return "rst.hri.PersonHypothesis";
}

rst::hri::PersonHypothesis* rst::hri::PersonHypothesis::New(){
  return new rst::hri::PersonHypothesis();
}


