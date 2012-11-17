/* This file is generated - do not edit. */

#include "Gaussian1D.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rststochasticsGaussian1D,rst.stochastics.Gaussian1D);

// Type-independent protocol buffer API for rst::stochastics::Gaussian1D

 const rst::stochastics::Gaussian1D& rst::stochastics::Gaussian1D::default_instance(){
  static rst::stochastics::Gaussian1D*instance=NULL;
  if(!instance)instance=new Gaussian1D();
  return *instance;
}

 const std::string rst::stochastics::Gaussian1D::GetTypeName(){
  return "rst.stochastics.Gaussian1D";
}

rst::stochastics::Gaussian1D* rst::stochastics::Gaussian1D::New(){
  return new rst::stochastics::Gaussian1D();
}


