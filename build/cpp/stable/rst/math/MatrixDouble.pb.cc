/* This file is generated - do not edit. */

#include "MatrixDouble.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmathMatrixDouble,rst.math.MatrixDouble);
DEFINE_WIRE_SCHEMA(rstmathMatrixDoubleSize,rst.math.MatrixDouble.Size);
DEFINE_WIRE_SCHEMA(rstmathMatrixDoubleData,rst.math.MatrixDouble.Data);

// Type-independent protocol buffer API for rst::math::matrixDouble::Size

 const rst::math::MatrixDouble::Size& rst::math::MatrixDouble::Size::default_instance(){
  static rst::math::MatrixDouble::Size*instance=NULL;
  if(!instance)instance=new Size();
  return *instance;
}

 const std::string rst::math::MatrixDouble::Size::GetTypeName(){
  return "rst.math.matrixDouble.Size";
}

rst::math::MatrixDouble::Size* rst::math::MatrixDouble::Size::New(){
  return new rst::math::MatrixDouble::Size();
}

int rst::math::MatrixDouble::Size::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(*this);

}

bool rst::math::MatrixDouble::Size::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::MatrixDouble::Size::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::MatrixDouble::Size::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::MatrixDouble::Size::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleSize>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::math::matrixDouble::Data

 const rst::math::MatrixDouble::Data& rst::math::MatrixDouble::Data::default_instance(){
  static rst::math::MatrixDouble::Data*instance=NULL;
  if(!instance)instance=new Data();
  return *instance;
}

 const std::string rst::math::MatrixDouble::Data::GetTypeName(){
  return "rst.math.matrixDouble.Data";
}

rst::math::MatrixDouble::Data* rst::math::MatrixDouble::Data::New(){
  return new rst::math::MatrixDouble::Data();
}

int rst::math::MatrixDouble::Data::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(*this);

}

bool rst::math::MatrixDouble::Data::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::MatrixDouble::Data::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::MatrixDouble::Data::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::MatrixDouble::Data::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDoubleData>(temp,*this,0,size);
  return true;
  

}



// Type-independent protocol buffer API for rst::math::MatrixDouble

 const rst::math::MatrixDouble& rst::math::MatrixDouble::default_instance(){
  static rst::math::MatrixDouble*instance=NULL;
  if(!instance)instance=new MatrixDouble();
  return *instance;
}

 const std::string rst::math::MatrixDouble::GetTypeName(){
  return "rst.math.MatrixDouble";
}

rst::math::MatrixDouble* rst::math::MatrixDouble::New(){
  return new rst::math::MatrixDouble();
}

int rst::math::MatrixDouble::ByteSize() const{
  return rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(*this);

}

bool rst::math::MatrixDouble::SerializeToString(std::string* destination) const{
  std::vector<unsigned char> temp(rosetta::packedSize<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(*this));
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(*this,temp,0,temp.size());
  destination->resize(temp.size());
  std::copy((char*)&temp[0],(char*)(&temp[0]+temp.size()),
  destination->begin());
  return true;
  

}

bool rst::math::MatrixDouble::ParseFromString(const std::string& source){
  std::vector<unsigned char> temp((unsigned char*)&source[0],
  (unsigned char*)(&source[0]+source.size()));
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(temp,*this,0,temp.size());
  return true;
  

}



bool rst::math::MatrixDouble::SerializeToArray(void* destination,int size) const{
  std::vector<unsigned char> temp(size);
  rosetta::pack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(*this,temp,0,size);
  std::copy(temp.begin(),temp.end(),(char*)destination);
  return true;
  

}

bool rst::math::MatrixDouble::ParseFromArray(const void* source,int size){
  std::vector<unsigned char> temp((unsigned char*)source,(unsigned char*)source+size);
  rosetta::unpack<rosetta::MechanismRosMsg,rosetta::rstmathMatrixDouble>(temp,*this,0,size);
  return true;
  

}


