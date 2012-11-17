/* This file is generated - do not edit. */

#include "JointImpedance.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdynamicsJointImpedance,rst.dynamics.JointImpedance);

// Type-independent protocol buffer API for rst::dynamics::JointImpedance

 const rst::dynamics::JointImpedance& rst::dynamics::JointImpedance::default_instance(){
  static rst::dynamics::JointImpedance*instance=NULL;
  if(!instance)instance=new JointImpedance();
  return *instance;
}

 const std::string rst::dynamics::JointImpedance::GetTypeName(){
  return "rst.dynamics.JointImpedance";
}

rst::dynamics::JointImpedance* rst::dynamics::JointImpedance::New(){
  return new rst::dynamics::JointImpedance();
}


