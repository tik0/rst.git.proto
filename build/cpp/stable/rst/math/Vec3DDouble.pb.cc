/* This file is generated - do not edit. */

#include "Vec3DDouble.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DDouble,rst.math.Vec3DDouble);

// Type-independent protocol buffer API for rst::math::Vec3DDouble

 const rst::math::Vec3DDouble& rst::math::Vec3DDouble::default_instance(){
  static rst::math::Vec3DDouble*instance=NULL;
  if(!instance)instance=new Vec3DDouble();
  return *instance;
}

 const std::string rst::math::Vec3DDouble::GetTypeName(){
  return "rst.math.Vec3DDouble";
}

rst::math::Vec3DDouble* rst::math::Vec3DDouble::New(){
  return new rst::math::Vec3DDouble();
}


