/* This file is generated - do not edit. */

package rst.generic;


public final class ValueType {
    private ValueType(){}
    
    public static final class Value {
        public enum Type{
          VOID (1),
          INT (2),
          DOUBLE (3),
          STRING (4),
          BOOL (5),
          BINARY (6),
          ARRAY (7);
          
          private final int value;
          
          Type(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  type = TODO(number);
        public static final int TYPEFIELD_NUMBER=1;
        
        private rst.generic.ValueType.Value.Type type;
        public boolean hastype(){return true;}
        public rst.generic.ValueType.Value.Type gettype(){return this.type;}
        
        // TODO(label) INT64 int_ = TODO(number);
        public static final int INT_FIELD_NUMBER=1;
        
        private int int_;
        public boolean hasint_(){return true;}
        public int getint_(){return this.int_;}
        
        // TODO(label) FLOAT64 double_ = TODO(number);
        public static final int DOUBLE_FIELD_NUMBER=1;
        
        private float double_;
        public boolean hasdouble_(){return true;}
        public float getdouble_(){return this.double_;}
        
        // TODO(label) ASCII-STRING string = TODO(number);
        public static final int STRINGFIELD_NUMBER=1;
        
        private String string;
        public boolean hasstring(){return true;}
        public String getstring(){return this.string;}
        
        // TODO(label) BOOL bool = TODO(number);
        public static final int BOOLFIELD_NUMBER=1;
        
        private boolean bool;
        public boolean hasbool(){return true;}
        public boolean getbool(){return this.bool;}
        
        // TODO(label) OCTET-VECTOR binary = TODO(number);
        public static final int BINARYFIELD_NUMBER=1;
        
        private byte[] binary;
        public boolean hasbinary(){return true;}
        public byte[] getbinary(){return this.binary;}
        
        
        
    };
};