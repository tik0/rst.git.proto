/* This file is generated - do not edit. */

#include "Vec2DFloat.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathVec2DFloat,rst.math.Vec2DFloat);

// Type-independent protocol buffer API for rst::math::Vec2DFloat

 const rst::math::Vec2DFloat& rst::math::Vec2DFloat::default_instance(){
  static rst::math::Vec2DFloat*instance=NULL;
  if(!instance)instance=new Vec2DFloat();
  return *instance;
}

 const std::string rst::math::Vec2DFloat::GetTypeName(){
  return "rst.math.Vec2DFloat";
}

rst::math::Vec2DFloat* rst::math::Vec2DFloat::New(){
  return new rst::math::Vec2DFloat();
}


