/* This file is generated - do not edit. */

#include "FloatSoundArray.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionFloatSoundArray,rst.audition.FloatSoundArray);

// Type-independent protocol buffer API for rst::audition::FloatSoundArray

 const rst::audition::FloatSoundArray& rst::audition::FloatSoundArray::default_instance(){
  static rst::audition::FloatSoundArray*instance=NULL;
  if(!instance)instance=new FloatSoundArray();
  return *instance;
}

 const std::string rst::audition::FloatSoundArray::GetTypeName(){
  return "rst.audition.FloatSoundArray";
}

rst::audition::FloatSoundArray* rst::audition::FloatSoundArray::New(){
  return new rst::audition::FloatSoundArray();
}


