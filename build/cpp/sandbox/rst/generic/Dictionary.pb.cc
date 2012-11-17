/* This file is generated - do not edit. */

#include "Dictionary.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgenericDictionary,rst.generic.Dictionary);

// Type-independent protocol buffer API for rst::generic::Dictionary

 const rst::generic::Dictionary& rst::generic::Dictionary::default_instance(){
  static rst::generic::Dictionary*instance=NULL;
  if(!instance)instance=new Dictionary();
  return *instance;
}

 const std::string rst::generic::Dictionary::GetTypeName(){
  return "rst.generic.Dictionary";
}

rst::generic::Dictionary* rst::generic::Dictionary::New(){
  return new rst::generic::Dictionary();
}


