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

int rst::audition::FormattedSoundChunk::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(*this);

}

bool rst::audition::FormattedSoundChunk::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::audition::FormattedSoundChunk::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::audition::FormattedSoundChunk::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::audition::FormattedSoundChunk::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstauditionFormattedSoundChunk>(temp,*this,0,size);
  return true;
  

}


