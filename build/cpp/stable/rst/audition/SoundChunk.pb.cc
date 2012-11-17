/* This file is generated - do not edit. */

#include "SoundChunk.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunk,rst.audition.SoundChunk);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunkSampleType,rst.audition.SoundChunk.SampleType);
DEFINE_WIRE_SCHEMA(rstauditionSoundChunkEndianNess,rst.audition.SoundChunk.EndianNess);





// Type-independent protocol buffer API for rst::audition::SoundChunk

 const rst::audition::SoundChunk& rst::audition::SoundChunk::default_instance(){
  static rst::audition::SoundChunk*instance=NULL;
  if(!instance)instance=new SoundChunk();
  return *instance;
}

 const std::string rst::audition::SoundChunk::GetTypeName(){
  return "rst.audition.SoundChunk";
}

rst::audition::SoundChunk* rst::audition::SoundChunk::New(){
  return new rst::audition::SoundChunk();
}


