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


