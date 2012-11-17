/* This file is generated - do not edit. */

#include "CameraMatrix3x4.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionCameraMatrix3x4,rst.vision.CameraMatrix3x4);

// Type-independent protocol buffer API for rst::vision::CameraMatrix3x4

 const rst::vision::CameraMatrix3x4& rst::vision::CameraMatrix3x4::default_instance(){
  static rst::vision::CameraMatrix3x4*instance=NULL;
  if(!instance)instance=new CameraMatrix3x4();
  return *instance;
}

 const std::string rst::vision::CameraMatrix3x4::GetTypeName(){
  return "rst.vision.CameraMatrix3x4";
}

rst::vision::CameraMatrix3x4* rst::vision::CameraMatrix3x4::New(){
  return new rst::vision::CameraMatrix3x4();
}


