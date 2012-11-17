/* This file is generated - do not edit. */

#include "IFaces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionIFaces,rst.vision.IFaces);

// Type-independent protocol buffer API for rst::vision::IFaces

 const rst::vision::IFaces& rst::vision::IFaces::default_instance(){
  static rst::vision::IFaces*instance=NULL;
  if(!instance)instance=new IFaces();
  return *instance;
}

 const std::string rst::vision::IFaces::GetTypeName(){
  return "rst.vision.IFaces";
}

rst::vision::IFaces* rst::vision::IFaces::New(){
  return new rst::vision::IFaces();
}


