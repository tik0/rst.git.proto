/* This file is generated - do not edit. */

package rst.kinematics;


public final class JointStateType {
    private JointStateType(){}
    
    public static final class JointState {
        // TODO(label) OCTET-VECTOR name = TODO(number);
        public static final int NAMEFIELD_NUMBER=1;
        
        private byte[] name;
        public boolean hasname(){return true;}
        public byte[] getname(){return this.name;}
        
        // TODO(label) FLOAT32 value = TODO(number);
        public static final int VALUEFIELD_NUMBER=1;
        
        private float value;
        public boolean hasvalue(){return true;}
        public float getvalue(){return this.value;}
        
        // TODO(label) FLOAT32 stiffness = TODO(number);
        public static final int STIFFNESSFIELD_NUMBER=1;
        
        private float stiffness;
        public boolean hasstiffness(){return true;}
        public float getstiffness(){return this.stiffness;}
        
        // TODO(label) FLOAT32 command = TODO(number);
        public static final int COMMANDFIELD_NUMBER=1;
        
        private float command;
        public boolean hascommand(){return true;}
        public float getcommand(){return this.command;}
        
        // TODO(label) FLOAT32 temperature = TODO(number);
        public static final int TEMPERATUREFIELD_NUMBER=1;
        
        private float temperature;
        public boolean hastemperature(){return true;}
        public float gettemperature(){return this.temperature;}
        
        
        
    };
};