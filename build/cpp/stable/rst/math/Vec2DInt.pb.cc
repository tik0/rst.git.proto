/* This file is generated - do not edit. */

#include "Vec2DInt.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec2DInt,rst.math.Vec2DInt);

// Type-independent protocol buffer API for rst::math::Vec2DInt

 const rst::math::Vec2DInt& rst::math::Vec2DInt::default_instance(){
  static rst::math::Vec2DInt*instance=NULL;
  if(!instance)instance=new Vec2DInt();
  return *instance;
}

 const std::string rst::math::Vec2DInt::GetTypeName(){
  return "rst.math.Vec2DInt";
}

rst::math::Vec2DInt* rst::math::Vec2DInt::New(){
  return new rst::math::Vec2DInt();
}


