/* This file is generated - do not edit. */

#include "TrackingInfo.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttrackingTrackingInfo,rst.tracking.TrackingInfo);

// Type-independent protocol buffer API for rst::tracking::TrackingInfo

 const rst::tracking::TrackingInfo& rst::tracking::TrackingInfo::default_instance(){
  static rst::tracking::TrackingInfo*instance=NULL;
  if(!instance)instance=new TrackingInfo();
  return *instance;
}

 const std::string rst::tracking::TrackingInfo::GetTypeName(){
  return "rst.tracking.TrackingInfo";
}

rst::tracking::TrackingInfo* rst::tracking::TrackingInfo::New(){
  return new rst::tracking::TrackingInfo();
}

int rst::tracking::TrackingInfo::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(*this);

}

bool rst::tracking::TrackingInfo::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::tracking::TrackingInfo::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::tracking::TrackingInfo::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::tracking::TrackingInfo::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttrackingTrackingInfo>(temp,*this,0,size);
  return true;
  

}


