/* This file is generated - do not edit. */

#include "Stereo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionStereo,rst.vision.Stereo);

// Type-independent protocol buffer API for rst::vision::Stereo

 const rst::vision::Stereo& rst::vision::Stereo::default_instance(){
  static rst::vision::Stereo*instance=NULL;
  if(!instance)instance=new Stereo();
  return *instance;
}

 const std::string rst::vision::Stereo::GetTypeName(){
  return "rst.vision.Stereo";
}

rst::vision::Stereo* rst::vision::Stereo::New(){
  return new rst::vision::Stereo();
}


