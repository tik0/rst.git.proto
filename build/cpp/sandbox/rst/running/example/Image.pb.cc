/* This file is generated - do not edit. */

#include "Image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstrunningexampleImage,rst.running.example.Image);

// Type-independent protocol buffer API for rst::running::example::Image

 const rst::running::example::Image& rst::running::example::Image::default_instance(){
  static rst::running::example::Image*instance=NULL;
  if(!instance)instance=new Image();
  return *instance;
}

 const std::string rst::running::example::Image::GetTypeName(){
  return "rst.running.example.Image";
}

rst::running::example::Image* rst::running::example::Image::New(){
  return new rst::running::example::Image();
}


