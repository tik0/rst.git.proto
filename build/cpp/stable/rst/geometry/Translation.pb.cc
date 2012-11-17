/* This file is generated - do not edit. */

#include "Translation.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstgeometryTranslation,rst.geometry.Translation);

// Type-independent protocol buffer API for rst::geometry::Translation

 const rst::geometry::Translation& rst::geometry::Translation::default_instance(){
  static rst::geometry::Translation*instance=NULL;
  if(!instance)instance=new Translation();
  return *instance;
}

 const std::string rst::geometry::Translation::GetTypeName(){
  return "rst.geometry.Translation";
}

rst::geometry::Translation* rst::geometry::Translation::New(){
  return new rst::geometry::Translation();
}


