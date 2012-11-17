/* This file is generated - do not edit. */

#include "InputPort.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstcbseInputPort,rst.cbse.InputPort);

// Type-independent protocol buffer API for rst::cbse::InputPort

 const rst::cbse::InputPort& rst::cbse::InputPort::default_instance(){
  static rst::cbse::InputPort*instance=NULL;
  if(!instance)instance=new InputPort();
  return *instance;
}

 const std::string rst::cbse::InputPort::GetTypeName(){
  return "rst.cbse.InputPort";
}

rst::cbse::InputPort* rst::cbse::InputPort::New(){
  return new rst::cbse::InputPort();
}


