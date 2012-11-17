/* This file is generated - do not edit. */

#include "PointPair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPointPair,rst.geometry.PointPair);

// Type-independent protocol buffer API for rst::geometry::PointPair

 const rst::geometry::PointPair& rst::geometry::PointPair::default_instance(){
  static rst::geometry::PointPair*instance=NULL;
  if(!instance)instance=new PointPair();
  return *instance;
}

 const std::string rst::geometry::PointPair::GetTypeName(){
  return "rst.geometry.PointPair";
}

rst::geometry::PointPair* rst::geometry::PointPair::New(){
  return new rst::geometry::PointPair();
}


