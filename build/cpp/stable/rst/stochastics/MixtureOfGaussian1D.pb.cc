/* This file is generated - do not edit. */

#include "MixtureOfGaussian1D.pb.h"


DEFINE_MECHANISM(MechanismRosMsg);
DEFINE_WIRE_SCHEMA(rststochasticsMixtureOfGaussian1D,rst.stochastics.MixtureOfGaussian1D);
DEFINE_WIRE_SCHEMA(rststochasticsMixtureOfGaussian1DGaussianComponent1D,rst.stochastics.MixtureOfGaussian1D.GaussianComponent1D);

// Type-independent protocol buffer API for rst::stochastics::mixtureOfGaussian1D::GaussianComponent1D

 const rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D& rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::default_instance(){
  static rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D*instance=NULL;
  if(!instance)instance=new GaussianComponent1D();
  return *instance;
}

 const std::string rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::GetTypeName(){
  return "rst.stochastics.mixtureOfGaussian1D.GaussianComponent1D";
}

rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D* rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D::New(){
  return new rst::stochastics::MixtureOfGaussian1D::GaussianComponent1D();
}



// Type-independent protocol buffer API for rst::stochastics::MixtureOfGaussian1D

 const rst::stochastics::MixtureOfGaussian1D& rst::stochastics::MixtureOfGaussian1D::default_instance(){
  static rst::stochastics::MixtureOfGaussian1D*instance=NULL;
  if(!instance)instance=new MixtureOfGaussian1D();
  return *instance;
}

 const std::string rst::stochastics::MixtureOfGaussian1D::GetTypeName(){
  return "rst.stochastics.MixtureOfGaussian1D";
}

rst::stochastics::MixtureOfGaussian1D* rst::stochastics::MixtureOfGaussian1D::New(){
  return new rst::stochastics::MixtureOfGaussian1D();
}


