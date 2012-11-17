/* This file is generated - do not edit. */

#include "Length.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryLength,rst.geometry.Length);

// Type-independent protocol buffer API for rst::geometry::Length

 const rst::geometry::Length& rst::geometry::Length::default_instance(){
  static rst::geometry::Length*instance=NULL;
  if(!instance)instance=new Length();
  return *instance;
}

 const std::string rst::geometry::Length::GetTypeName(){
  return "rst.geometry.Length";
}

rst::geometry::Length* rst::geometry::Length::New(){
  return new rst::geometry::Length();
}


