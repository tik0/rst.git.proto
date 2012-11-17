/* This file is generated - do not edit. */

#include "Face.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionFace,rst.vision.Face);

// Type-independent protocol buffer API for rst::vision::Face

 const rst::vision::Face& rst::vision::Face::default_instance(){
  static rst::vision::Face*instance=NULL;
  if(!instance)instance=new Face();
  return *instance;
}

 const std::string rst::vision::Face::GetTypeName(){
  return "rst.vision.Face";
}

rst::vision::Face* rst::vision::Face::New(){
  return new rst::vision::Face();
}


