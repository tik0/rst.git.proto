/* This file is generated - do not edit. */

#include "Vec3DFloat.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DFloat,rst.math.Vec3DFloat);

// Type-independent protocol buffer API for rst::math::Vec3DFloat

 const rst::math::Vec3DFloat& rst::math::Vec3DFloat::default_instance(){
  static rst::math::Vec3DFloat*instance=NULL;
  if(!instance)instance=new Vec3DFloat();
  return *instance;
}

 const std::string rst::math::Vec3DFloat::GetTypeName(){
  return "rst.math.Vec3DFloat";
}

rst::math::Vec3DFloat* rst::math::Vec3DFloat::New(){
  return new rst::math::Vec3DFloat();
}


