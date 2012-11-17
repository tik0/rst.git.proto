/* This file is generated - do not edit. */

#include "Value.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericValue,rst.generic.Value);
DEFINE_WIRE_SCHEMA(rstgenericValueType,rst.generic.Value.Type);



// Type-independent protocol buffer API for rst::generic::Value

 const rst::generic::Value& rst::generic::Value::default_instance(){
  static rst::generic::Value*instance=NULL;
  if(!instance)instance=new Value();
  return *instance;
}

 const std::string rst::generic::Value::GetTypeName(){
  return "rst.generic.Value";
}

rst::generic::Value* rst::generic::Value::New(){
  return new rst::generic::Value();
}


