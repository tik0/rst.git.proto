/* This file is generated - do not edit. */

#include "output.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(pf3dtrackeroutput,pf3dtracker.output);

// Type-independent protocol buffer API for pf3dtracker::output

 const pf3dtracker::output& pf3dtracker::output::default_instance(){
  static pf3dtracker::output*instance=NULL;
  if(!instance)instance=new output();
  return *instance;
}

 const std::string pf3dtracker::output::GetTypeName(){
  return "pf3dtracker.output";
}

pf3dtracker::output* pf3dtracker::output::New(){
  return new pf3dtracker::output();
}


