/* This file is generated - do not edit. */

#include "Point2DTimestampPair.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingPoint2DTimestampPair,rst.timing.Point2DTimestampPair);

// Type-independent protocol buffer API for rst::timing::Point2DTimestampPair

 const rst::timing::Point2DTimestampPair& rst::timing::Point2DTimestampPair::default_instance(){
  static rst::timing::Point2DTimestampPair*instance=NULL;
  if(!instance)instance=new Point2DTimestampPair();
  return *instance;
}

 const std::string rst::timing::Point2DTimestampPair::GetTypeName(){
  return "rst.timing.Point2DTimestampPair";
}

rst::timing::Point2DTimestampPair* rst::timing::Point2DTimestampPair::New(){
  return new rst::timing::Point2DTimestampPair();
}


