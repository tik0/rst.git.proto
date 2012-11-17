/* This file is generated - do not edit. */

#include "Point2DTimeseries.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingPoint2DTimeseries,rst.timing.Point2DTimeseries);

// Type-independent protocol buffer API for rst::timing::Point2DTimeseries

 const rst::timing::Point2DTimeseries& rst::timing::Point2DTimeseries::default_instance(){
  static rst::timing::Point2DTimeseries*instance=NULL;
  if(!instance)instance=new Point2DTimeseries();
  return *instance;
}

 const std::string rst::timing::Point2DTimeseries::GetTypeName(){
  return "rst.timing.Point2DTimeseries";
}

rst::timing::Point2DTimeseries* rst::timing::Point2DTimeseries::New(){
  return new rst::timing::Point2DTimeseries();
}


