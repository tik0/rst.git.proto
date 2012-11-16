/* This file is generated - do not edit. */

package rst.math;


public final class MatrixDoubleType {
    private MatrixDoubleType(){}
    
    public static final class MatrixDouble {
        public static final class Size {
            // TODO(label) UINT32 m = TODO(number);
            public static final int MFIELD_NUMBER=1;
            
            private int m;
            public boolean hasm(){return true;}
            public int getm(){return this.m;}
            
            // TODO(label) UINT32 n = TODO(number);
            public static final int NFIELD_NUMBER=1;
            
            private int n;
            public boolean hasn(){return true;}
            public int getn(){return this.n;}
            
            
            
        };
        public static final class Data {
            // TODO(label)  value = TODO(number);
            public static final int VALUEFIELD_NUMBER=1;
            
            private float value;
            public boolean hasvalue(){return true;}
            public float getvalue(){return this.value;}
            
            
            
        };
        // TODO(label)  size = TODO(number);
        public static final int SIZEFIELD_NUMBER=1;
        
        private rst.math.MatrixDoubleType.MatrixDouble.Size size;
        public boolean hassize(){return true;}
        public rst.math.MatrixDoubleType.MatrixDouble.Size getsize(){return this.size;}
        
        // TODO(label)  data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private rst.math.MatrixDoubleType.MatrixDouble.Data data;
        public boolean hasdata(){return true;}
        public rst.math.MatrixDoubleType.MatrixDouble.Data getdata(){return this.data;}
        
        
        
    };
};