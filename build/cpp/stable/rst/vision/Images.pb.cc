/* This file is generated - do not edit. */

#include "Images.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionImages,rst.vision.Images);

// Type-independent protocol buffer API for rst::vision::Images

 const rst::vision::Images& rst::vision::Images::default_instance(){
  static rst::vision::Images*instance=NULL;
  if(!instance)instance=new Images();
  return *instance;
}

 const std::string rst::vision::Images::GetTypeName(){
  return "rst.vision.Images";
}

rst::vision::Images* rst::vision::Images::New(){
  return new rst::vision::Images();
}


