/* This file is generated - do not edit. */

#include "ViSpeaking.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionViSpeaking,rst.vision.ViSpeaking);

// Type-independent protocol buffer API for rst::vision::ViSpeaking

 const rst::vision::ViSpeaking& rst::vision::ViSpeaking::default_instance(){
  static rst::vision::ViSpeaking*instance=NULL;
  if(!instance)instance=new ViSpeaking();
  return *instance;
}

 const std::string rst::vision::ViSpeaking::GetTypeName(){
  return "rst.vision.ViSpeaking";
}

rst::vision::ViSpeaking* rst::vision::ViSpeaking::New(){
  return new rst::vision::ViSpeaking();
}


