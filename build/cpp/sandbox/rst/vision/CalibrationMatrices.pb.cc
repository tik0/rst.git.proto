/* This file is generated - do not edit. */

#include "CalibrationMatrices.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstvisionCalibrationMatrices,rst.vision.CalibrationMatrices);

// Type-independent protocol buffer API for rst::vision::CalibrationMatrices

 const rst::vision::CalibrationMatrices& rst::vision::CalibrationMatrices::default_instance(){
  static rst::vision::CalibrationMatrices*instance=NULL;
  if(!instance)instance=new CalibrationMatrices();
  return *instance;
}

 const std::string rst::vision::CalibrationMatrices::GetTypeName(){
  return "rst.vision.CalibrationMatrices";
}

rst::vision::CalibrationMatrices* rst::vision::CalibrationMatrices::New(){
  return new rst::vision::CalibrationMatrices();
}


