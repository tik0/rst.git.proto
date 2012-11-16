/* This file is generated - do not edit. */

package rst.generic;

import rst.generic.ValueType;

public final class KeyValuePairType {
    private KeyValuePairType(){}
    
    public static final class KeyValuePair {
        // TODO(label) ASCII-STRING key = TODO(number);
        public static final int KEYFIELD_NUMBER=1;
        
        private String key;
        public boolean haskey(){return true;}
        public String getkey(){return this.key;}
        
        // TODO(label)  value = TODO(number);
        public static final int VALUEFIELD_NUMBER=1;
        
        private rst.generic.ValueType.Value value;
        public boolean hasvalue(){return true;}
        public rst.generic.ValueType.Value getvalue(){return this.value;}
        
        
        
    };
};