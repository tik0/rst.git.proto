/* This file is generated - do not edit. */

#include "BoundingBox.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryBoundingBox,rst.geometry.BoundingBox);

// Type-independent protocol buffer API for rst::geometry::BoundingBox

 const rst::geometry::BoundingBox& rst::geometry::BoundingBox::default_instance(){
  static rst::geometry::BoundingBox*instance=NULL;
  if(!instance)instance=new BoundingBox();
  return *instance;
}

 const std::string rst::geometry::BoundingBox::GetTypeName(){
  return "rst.geometry.BoundingBox";
}

rst::geometry::BoundingBox* rst::geometry::BoundingBox::New(){
  return new rst::geometry::BoundingBox();
}


