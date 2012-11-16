/* This file is generated - do not edit. */

package rst.classification;


public final class ClassificationResultType {
    private ClassificationResultType(){}
    
    public static final class ClassificationResult {
        public static final class ClassWithProbability {
            // TODO(label) OCTET-VECTOR name = TODO(number);
            public static final int NAMEFIELD_NUMBER=1;
            
            private byte[] name;
            public boolean hasname(){return true;}
            public byte[] getname(){return this.name;}
            
            // TODO(label) FLOAT32 confidence = TODO(number);
            public static final int CONFIDENCEFIELD_NUMBER=1;
            
            private float confidence;
            public boolean hasconfidence(){return true;}
            public float getconfidence(){return this.confidence;}
            
            
            
        };
        // TODO(label) OCTET-VECTOR decided_class = TODO(number);
        public static final int DECIDED_CLASSFIELD_NUMBER=1;
        
        private byte[] decided_class;
        public boolean hasdecided_class(){return true;}
        public byte[] getdecided_class(){return this.decided_class;}
        
        // TODO(label)  classes = TODO(number);
        public static final int CLASSESFIELD_NUMBER=1;
        
        private rst.classification.ClassificationResultType.ClassificationResult.ClassWithProbability classes;
        public boolean hasclasses(){return true;}
        public rst.classification.ClassificationResultType.ClassificationResult.ClassWithProbability getclasses(){return this.classes;}
        
        
        
    };
};