/* This file is generated - do not edit. */

#include "Image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionImage,rst.vision.Image);
DEFINE_WIRE_SCHEMA(rstvisionImageDepth,rst.vision.Image.Depth);
DEFINE_WIRE_SCHEMA(rstvisionImageColorMode,rst.vision.Image.ColorMode);
DEFINE_WIRE_SCHEMA(rstvisionImageDataOrder,rst.vision.Image.DataOrder);







// Type-independent protocol buffer API for rst::vision::Image

 const rst::vision::Image& rst::vision::Image::default_instance(){
  static rst::vision::Image*instance=NULL;
  if(!instance)instance=new Image();
  return *instance;
}

 const std::string rst::vision::Image::GetTypeName(){
  return "rst.vision.Image";
}

rst::vision::Image* rst::vision::Image::New(){
  return new rst::vision::Image();
}


