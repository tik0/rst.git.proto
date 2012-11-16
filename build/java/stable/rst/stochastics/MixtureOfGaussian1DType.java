/* This file is generated - do not edit. */

package rst.stochastics;

import rst.stochastics.Gaussian1DType;

public final class MixtureOfGaussian1DType {
    private MixtureOfGaussian1DType(){}
    
    public static final class MixtureOfGaussian1D {
        public static final class GaussianComponent1D {
            // TODO(label)  gaussian = TODO(number);
            public static final int GAUSSIANFIELD_NUMBER=1;
            
            private rst.stochastics.Gaussian1DType.Gaussian1D gaussian;
            public boolean hasgaussian(){return true;}
            public rst.stochastics.Gaussian1DType.Gaussian1D getgaussian(){return this.gaussian;}
            
            // TODO(label) FLOAT32 weight = TODO(number);
            public static final int WEIGHTFIELD_NUMBER=1;
            
            private float weight;
            public boolean hasweight(){return true;}
            public float getweight(){return this.weight;}
            
            // TODO(label) FLOAT32 probability_state = TODO(number);
            public static final int PROBABILITY_STATEFIELD_NUMBER=1;
            
            private float probability_state;
            public boolean hasprobability_state(){return true;}
            public float getprobability_state(){return this.probability_state;}
            
            
            
        };
        // TODO(label)  components = TODO(number);
        public static final int COMPONENTSFIELD_NUMBER=1;
        
        private rst.stochastics.MixtureOfGaussian1DType.MixtureOfGaussian1D.GaussianComponent1D components;
        public boolean hascomponents(){return true;}
        public rst.stochastics.MixtureOfGaussian1DType.MixtureOfGaussian1D.GaussianComponent1D getcomponents(){return this.components;}
        
        
        
    };
};