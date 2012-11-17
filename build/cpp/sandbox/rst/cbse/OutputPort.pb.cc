/* This file is generated - do not edit. */

#include "OutputPort.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseOutputPort,rst.cbse.OutputPort);

// Type-independent protocol buffer API for rst::cbse::OutputPort

 const rst::cbse::OutputPort& rst::cbse::OutputPort::default_instance(){
  static rst::cbse::OutputPort*instance=NULL;
  if(!instance)instance=new OutputPort();
  return *instance;
}

 const std::string rst::cbse::OutputPort::GetTypeName(){
  return "rst.cbse.OutputPort";
}

rst::cbse::OutputPort* rst::cbse::OutputPort::New(){
  return new rst::cbse::OutputPort();
}


