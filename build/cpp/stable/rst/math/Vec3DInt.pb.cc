/* This file is generated - do not edit. */

#include "Vec3DInt.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec3DInt,rst.math.Vec3DInt);

// Type-independent protocol buffer API for rst::math::Vec3DInt

 const rst::math::Vec3DInt& rst::math::Vec3DInt::default_instance(){
  static rst::math::Vec3DInt*instance=NULL;
  if(!instance)instance=new Vec3DInt();
  return *instance;
}

 const std::string rst::math::Vec3DInt::GetTypeName(){
  return "rst.math.Vec3DInt";
}

rst::math::Vec3DInt* rst::math::Vec3DInt::New(){
  return new rst::math::Vec3DInt();
}


