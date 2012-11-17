/* This file is generated - do not edit. */

#include "Faces.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionFaces,rst.vision.Faces);

// Type-independent protocol buffer API for rst::vision::Faces

 const rst::vision::Faces& rst::vision::Faces::default_instance(){
  static rst::vision::Faces*instance=NULL;
  if(!instance)instance=new Faces();
  return *instance;
}

 const std::string rst::vision::Faces::GetTypeName(){
  return "rst.vision.Faces";
}

rst::vision::Faces* rst::vision::Faces::New(){
  return new rst::vision::Faces();
}


