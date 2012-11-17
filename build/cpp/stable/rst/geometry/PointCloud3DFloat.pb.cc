/* This file is generated - do not edit. */

#include "PointCloud3DFloat.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPointCloud3DFloat,rst.geometry.PointCloud3DFloat);

// Type-independent protocol buffer API for rst::geometry::PointCloud3DFloat

 const rst::geometry::PointCloud3DFloat& rst::geometry::PointCloud3DFloat::default_instance(){
  static rst::geometry::PointCloud3DFloat*instance=NULL;
  if(!instance)instance=new PointCloud3DFloat();
  return *instance;
}

 const std::string rst::geometry::PointCloud3DFloat::GetTypeName(){
  return "rst.geometry.PointCloud3DFloat";
}

rst::geometry::PointCloud3DFloat* rst::geometry::PointCloud3DFloat::New(){
  return new rst::geometry::PointCloud3DFloat();
}


