/* This file is generated - do not edit. */

#include "CpuMemory.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rstdevicesgenericCpuMemory,rst.devices.generic.CpuMemory);
DEFINE_WIRE_SCHEMA(rstdevicesgenericCpuMemoryCpu,rst.devices.generic.CpuMemory.Cpu);

// Type-independent protocol buffer API for rst::devices::generic::cpuMemory::Cpu

 const rst::devices::generic::CpuMemory::Cpu& rst::devices::generic::CpuMemory::Cpu::default_instance(){
  static rst::devices::generic::CpuMemory::Cpu*instance=NULL;
  if(!instance)instance=new Cpu();
  return *instance;
}

 const std::string rst::devices::generic::CpuMemory::Cpu::GetTypeName(){
  return "rst.devices.generic.cpuMemory.Cpu";
}

rst::devices::generic::CpuMemory::Cpu* rst::devices::generic::CpuMemory::Cpu::New(){
  return new rst::devices::generic::CpuMemory::Cpu();
}



// Type-independent protocol buffer API for rst::devices::generic::CpuMemory

 const rst::devices::generic::CpuMemory& rst::devices::generic::CpuMemory::default_instance(){
  static rst::devices::generic::CpuMemory*instance=NULL;
  if(!instance)instance=new CpuMemory();
  return *instance;
}

 const std::string rst::devices::generic::CpuMemory::GetTypeName(){
  return "rst.devices.generic.CpuMemory";
}

rst::devices::generic::CpuMemory* rst::devices::generic::CpuMemory::New(){
  return new rst::devices::generic::CpuMemory();
}


