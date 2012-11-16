/* This file is generated - do not edit. */

package rst.devices.generic;


public final class CpuMemoryType {
    private CpuMemoryType(){}
    
    public static final class CpuMemory {
        public static final class Cpu {
            // TODO(label) INT32 index = TODO(number);
            public static final int INDEXFIELD_NUMBER=1;
            
            private int index;
            public boolean hasindex(){return true;}
            public int getindex(){return this.index;}
            
            // TODO(label) UINT64 user = TODO(number);
            public static final int USERFIELD_NUMBER=1;
            
            private int user;
            public boolean hasuser(){return true;}
            public int getuser(){return this.user;}
            
            // TODO(label) UINT64 user_low = TODO(number);
            public static final int USER_LOWFIELD_NUMBER=1;
            
            private int user_low;
            public boolean hasuser_low(){return true;}
            public int getuser_low(){return this.user_low;}
            
            // TODO(label) UINT64 system = TODO(number);
            public static final int SYSTEMFIELD_NUMBER=1;
            
            private int system;
            public boolean hassystem(){return true;}
            public int getsystem(){return this.system;}
            
            // TODO(label) UINT64 idle = TODO(number);
            public static final int IDLEFIELD_NUMBER=1;
            
            private int idle;
            public boolean hasidle(){return true;}
            public int getidle(){return this.idle;}
            
            
            
        };
        // TODO(label) FLOAT32 memory_free = TODO(number);
        public static final int MEMORY_FREEFIELD_NUMBER=1;
        
        private float memory_free;
        public boolean hasmemory_free(){return true;}
        public float getmemory_free(){return this.memory_free;}
        
        // TODO(label) FLOAT32 memory_total = TODO(number);
        public static final int MEMORY_TOTALFIELD_NUMBER=1;
        
        private float memory_total;
        public boolean hasmemory_total(){return true;}
        public float getmemory_total(){return this.memory_total;}
        
        // TODO(label) FLOAT32 memory_used = TODO(number);
        public static final int MEMORY_USEDFIELD_NUMBER=1;
        
        private float memory_used;
        public boolean hasmemory_used(){return true;}
        public float getmemory_used(){return this.memory_used;}
        
        // TODO(label) UINT32 jiffy_length = TODO(number);
        public static final int JIFFY_LENGTHFIELD_NUMBER=1;
        
        private int jiffy_length;
        public boolean hasjiffy_length(){return true;}
        public int getjiffy_length(){return this.jiffy_length;}
        
        // TODO(label) OCTET-VECTOR host_name = TODO(number);
        public static final int HOST_NAMEFIELD_NUMBER=1;
        
        private byte[] host_name;
        public boolean hashost_name(){return true;}
        public byte[] gethost_name(){return this.host_name;}
        
        // TODO(label)  cpus = TODO(number);
        public static final int CPUSFIELD_NUMBER=1;
        
        private rst.devices.generic.CpuMemoryType.CpuMemory.Cpu cpus;
        public boolean hascpus(){return true;}
        public rst.devices.generic.CpuMemoryType.CpuMemory.Cpu getcpus(){return this.cpus;}
        
        
        
    };
};