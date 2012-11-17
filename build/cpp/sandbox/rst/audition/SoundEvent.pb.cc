/* This file is generated - do not edit. */

#include "SoundEvent.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionSoundEvent,rst.audition.SoundEvent);

// Type-independent protocol buffer API for rst::audition::SoundEvent

 const rst::audition::SoundEvent& rst::audition::SoundEvent::default_instance(){
  static rst::audition::SoundEvent*instance=NULL;
  if(!instance)instance=new SoundEvent();
  return *instance;
}

 const std::string rst::audition::SoundEvent::GetTypeName(){
  return "rst.audition.SoundEvent";
}

rst::audition::SoundEvent* rst::audition::SoundEvent::New(){
  return new rst::audition::SoundEvent();
}


