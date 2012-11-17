/* This file is generated - do not edit. */

#include "MethodCall.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericMethodCall,rst.generic.MethodCall);

// Type-independent protocol buffer API for rst::generic::MethodCall

 const rst::generic::MethodCall& rst::generic::MethodCall::default_instance(){
  static rst::generic::MethodCall*instance=NULL;
  if(!instance)instance=new MethodCall();
  return *instance;
}

 const std::string rst::generic::MethodCall::GetTypeName(){
  return "rst.generic.MethodCall";
}

rst::generic::MethodCall* rst::generic::MethodCall::New(){
  return new rst::generic::MethodCall();
}


