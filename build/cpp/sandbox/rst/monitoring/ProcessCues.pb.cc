/* This file is generated - do not edit. */

#include "ProcessCues.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstmonitoringProcessCues,rst.monitoring.ProcessCues);
DEFINE_WIRE_SCHEMA(rstmonitoringProcessCuesCues,rst.monitoring.ProcessCues.Cues);

// Type-independent protocol buffer API for rst::monitoring::processCues::Cues

 const rst::monitoring::ProcessCues::Cues& rst::monitoring::ProcessCues::Cues::default_instance(){
  static rst::monitoring::ProcessCues::Cues*instance=NULL;
  if(!instance)instance=new Cues();
  return *instance;
}

 const std::string rst::monitoring::ProcessCues::Cues::GetTypeName(){
  return "rst.monitoring.processCues.Cues";
}

rst::monitoring::ProcessCues::Cues* rst::monitoring::ProcessCues::Cues::New(){
  return new rst::monitoring::ProcessCues::Cues();
}



// Type-independent protocol buffer API for rst::monitoring::ProcessCues

 const rst::monitoring::ProcessCues& rst::monitoring::ProcessCues::default_instance(){
  static rst::monitoring::ProcessCues*instance=NULL;
  if(!instance)instance=new ProcessCues();
  return *instance;
}

 const std::string rst::monitoring::ProcessCues::GetTypeName(){
  return "rst.monitoring.ProcessCues";
}

rst::monitoring::ProcessCues* rst::monitoring::ProcessCues::New(){
  return new rst::monitoring::ProcessCues();
}


