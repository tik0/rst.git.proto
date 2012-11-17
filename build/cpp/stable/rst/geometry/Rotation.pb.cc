/* This file is generated - do not edit. */

#include "Rotation.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryRotation,rst.geometry.Rotation);

// Type-independent protocol buffer API for rst::geometry::Rotation

 const rst::geometry::Rotation& rst::geometry::Rotation::default_instance(){
  static rst::geometry::Rotation*instance=NULL;
  if(!instance)instance=new Rotation();
  return *instance;
}

 const std::string rst::geometry::Rotation::GetTypeName(){
  return "rst.geometry.Rotation";
}

rst::geometry::Rotation* rst::geometry::Rotation::New(){
  return new rst::geometry::Rotation();
}


