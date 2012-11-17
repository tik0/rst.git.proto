/* This file is generated - do not edit. */

#include "KeyValuePair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericKeyValuePair,rst.generic.KeyValuePair);

// Type-independent protocol buffer API for rst::generic::KeyValuePair

 const rst::generic::KeyValuePair& rst::generic::KeyValuePair::default_instance(){
  static rst::generic::KeyValuePair*instance=NULL;
  if(!instance)instance=new KeyValuePair();
  return *instance;
}

 const std::string rst::generic::KeyValuePair::GetTypeName(){
  return "rst.generic.KeyValuePair";
}

rst::generic::KeyValuePair* rst::generic::KeyValuePair::New(){
  return new rst::generic::KeyValuePair();
}


