/* This file is generated - do not edit. */

package rst.generic;

import rst.generic.ValueType;

public final class MethodCallType {
    private MethodCallType(){}
    
    public static final class MethodCall {
        // TODO(label) OCTET-VECTOR name = TODO(number);
        public static final int NAMEFIELD_NUMBER=1;
        
        private byte[] name;
        public boolean hasname(){return true;}
        public byte[] getname(){return this.name;}
        
        // TODO(label)  arguments = TODO(number);
        public static final int ARGUMENTSFIELD_NUMBER=1;
        
        private rst.generic.ValueType.Value arguments;
        public boolean hasarguments(){return true;}
        public rst.generic.ValueType.Value getarguments(){return this.arguments;}
        
        
        
    };
};