/* This file is generated - do not edit. */

#include "ComponentInfo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseComponentInfo,rst.cbse.ComponentInfo);

// Type-independent protocol buffer API for rst::cbse::ComponentInfo

 const rst::cbse::ComponentInfo& rst::cbse::ComponentInfo::default_instance(){
  static rst::cbse::ComponentInfo*instance=NULL;
  if(!instance)instance=new ComponentInfo();
  return *instance;
}

 const std::string rst::cbse::ComponentInfo::GetTypeName(){
  return "rst.cbse.ComponentInfo";
}

rst::cbse::ComponentInfo* rst::cbse::ComponentInfo::New(){
  return new rst::cbse::ComponentInfo();
}


