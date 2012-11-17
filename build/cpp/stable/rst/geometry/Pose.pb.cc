/* This file is generated - do not edit. */

#include "Pose.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryPose,rst.geometry.Pose);

// Type-independent protocol buffer API for rst::geometry::Pose

 const rst::geometry::Pose& rst::geometry::Pose::default_instance(){
  static rst::geometry::Pose*instance=NULL;
  if(!instance)instance=new Pose();
  return *instance;
}

 const std::string rst::geometry::Pose::GetTypeName(){
  return "rst.geometry.Pose";
}

rst::geometry::Pose* rst::geometry::Pose::New(){
  return new rst::geometry::Pose();
}


