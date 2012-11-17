/* This file is generated - do not edit. */

#include "image.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(icubimage,icub.image);
DEFINE_WIRE_SCHEMA(icubimageINNER9462,icub.image.INNER9462);
DEFINE_WIRE_SCHEMA(icubimageINNER9463,icub.image.INNER9463);
DEFINE_WIRE_SCHEMA(icubimageINNER9464,icub.image.INNER9464);





// Type-independent protocol buffer API for icub::image::INNER9464

 const icub::image::INNER9464& icub::image::INNER9464::default_instance(){
  static icub::image::INNER9464*instance=NULL;
  if(!instance)instance=new INNER9464();
  return *instance;
}

 const std::string icub::image::INNER9464::GetTypeName(){
  return "icub.image.INNER9464";
}

icub::image::INNER9464* icub::image::INNER9464::New(){
  return new icub::image::INNER9464();
}



// Type-independent protocol buffer API for icub::image

 const icub::image& icub::image::default_instance(){
  static icub::image*instance=NULL;
  if(!instance)instance=new image();
  return *instance;
}

 const std::string icub::image::GetTypeName(){
  return "icub.image";
}

icub::image* icub::image::New(){
  return new icub::image();
}


