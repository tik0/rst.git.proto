/* This file is generated - do not edit. */

#include "Point2DTimeseries.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rsttimingPoint2DTimeseries,rst.timing.Point2DTimeseries);

// Type-independent protocol buffer API for rst::timing::Point2DTimeseries

 const rst::timing::Point2DTimeseries& rst::timing::Point2DTimeseries::default_instance(){
  static rst::timing::Point2DTimeseries*instance=NULL;
  if(!instance)instance=new Point2DTimeseries();
  return *instance;
}

 const std::string rst::timing::Point2DTimeseries::GetTypeName(){
  return "rst.timing.Point2DTimeseries";
}

rst::timing::Point2DTimeseries* rst::timing::Point2DTimeseries::New(){
  return new rst::timing::Point2DTimeseries();
}

int rst::timing::Point2DTimeseries::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(*this);

}

bool rst::timing::Point2DTimeseries::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::timing::Point2DTimeseries::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::timing::Point2DTimeseries::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::timing::Point2DTimeseries::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rsttimingPoint2DTimeseries>(temp,*this,0,size);
  return true;
  

}


