/* This file is generated - do not edit. */

#include "HeadObjects.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionHeadObjects,rst.vision.HeadObjects);

// Type-independent protocol buffer API for rst::vision::HeadObjects

 const rst::vision::HeadObjects& rst::vision::HeadObjects::default_instance(){
  static rst::vision::HeadObjects*instance=NULL;
  if(!instance)instance=new HeadObjects();
  return *instance;
}

 const std::string rst::vision::HeadObjects::GetTypeName(){
  return "rst.vision.HeadObjects";
}

rst::vision::HeadObjects* rst::vision::HeadObjects::New(){
  return new rst::vision::HeadObjects();
}


