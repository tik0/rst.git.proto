/* This file is generated - do not edit. */

#include "TrackingInfo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttrackingTrackingInfo,rst.tracking.TrackingInfo);

// Type-independent protocol buffer API for rst::tracking::TrackingInfo

 const rst::tracking::TrackingInfo& rst::tracking::TrackingInfo::default_instance(){
  static rst::tracking::TrackingInfo*instance=NULL;
  if(!instance)instance=new TrackingInfo();
  return *instance;
}

 const std::string rst::tracking::TrackingInfo::GetTypeName(){
  return "rst.tracking.TrackingInfo";
}

rst::tracking::TrackingInfo* rst::tracking::TrackingInfo::New(){
  return new rst::tracking::TrackingInfo();
}


