/* This file is generated - do not edit. */

#include "FormattedSoundChunk.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstauditionFormattedSoundChunk,rst.audition.FormattedSoundChunk);
DEFINE_WIRE_SCHEMA(rstauditionFormattedSoundChunkChannelType,rst.audition.FormattedSoundChunk.ChannelType);



// Type-independent protocol buffer API for rst::audition::FormattedSoundChunk

 const rst::audition::FormattedSoundChunk& rst::audition::FormattedSoundChunk::default_instance(){
  static rst::audition::FormattedSoundChunk*instance=NULL;
  if(!instance)instance=new FormattedSoundChunk();
  return *instance;
}

 const std::string rst::audition::FormattedSoundChunk::GetTypeName(){
  return "rst.audition.FormattedSoundChunk";
}

rst::audition::FormattedSoundChunk* rst::audition::FormattedSoundChunk::New(){
  return new rst::audition::FormattedSoundChunk();
}


