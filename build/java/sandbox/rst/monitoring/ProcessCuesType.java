/* This file is generated - do not edit. */

package rst.monitoring;


public final class ProcessCuesType {
    private ProcessCuesType(){}
    
    public static final class ProcessCues {
        public static final class Cues {
            // TODO(label) OCTET-VECTOR source = TODO(number);
            public static final int SOURCEFIELD_NUMBER=1;
            
            private byte[] source;
            public boolean hassource(){return true;}
            public byte[] getsource(){return this.source;}
            
            // TODO(label) UINT64 utime = TODO(number);
            public static final int UTIMEFIELD_NUMBER=1;
            
            private int utime;
            public boolean hasutime(){return true;}
            public int getutime(){return this.utime;}
            
            // TODO(label) UINT64 stime = TODO(number);
            public static final int STIMEFIELD_NUMBER=1;
            
            private int stime;
            public boolean hasstime(){return true;}
            public int getstime(){return this.stime;}
            
            // TODO(label) INT64 num_threads = TODO(number);
            public static final int NUM_THREADSFIELD_NUMBER=1;
            
            private int num_threads;
            public boolean hasnum_threads(){return true;}
            public int getnum_threads(){return this.num_threads;}
            
            // TODO(label) UINT64 vsize = TODO(number);
            public static final int VSIZEFIELD_NUMBER=1;
            
            private int vsize;
            public boolean hasvsize(){return true;}
            public int getvsize(){return this.vsize;}
            
            // TODO(label) INT64 rss = TODO(number);
            public static final int RSSFIELD_NUMBER=1;
            
            private int rss;
            public boolean hasrss(){return true;}
            public int getrss(){return this.rss;}
            
            // TODO(label) UINT64 wall_time = TODO(number);
            public static final int WALL_TIMEFIELD_NUMBER=1;
            
            private int wall_time;
            public boolean haswall_time(){return true;}
            public int getwall_time(){return this.wall_time;}
            
            // TODO(label) UINT64 virtual_time = TODO(number);
            public static final int VIRTUAL_TIMEFIELD_NUMBER=1;
            
            private int virtual_time;
            public boolean hasvirtual_time(){return true;}
            public int getvirtual_time(){return this.virtual_time;}
            
            // TODO(label) UINT64 etime = TODO(number);
            public static final int ETIMEFIELD_NUMBER=1;
            
            private int etime;
            public boolean hasetime(){return true;}
            public int getetime(){return this.etime;}
            
            // TODO(label) UINT64 utime_scaled = TODO(number);
            public static final int UTIME_SCALEDFIELD_NUMBER=1;
            
            private int utime_scaled;
            public boolean hasutime_scaled(){return true;}
            public int getutime_scaled(){return this.utime_scaled;}
            
            // TODO(label) UINT64 stime_scaled = TODO(number);
            public static final int STIME_SCALEDFIELD_NUMBER=1;
            
            private int stime_scaled;
            public boolean hasstime_scaled(){return true;}
            public int getstime_scaled(){return this.stime_scaled;}
            
            // TODO(label) UINT64 wall_time_scaled = TODO(number);
            public static final int WALL_TIME_SCALEDFIELD_NUMBER=1;
            
            private int wall_time_scaled;
            public boolean haswall_time_scaled(){return true;}
            public int getwall_time_scaled(){return this.wall_time_scaled;}
            
            // TODO(label) UINT64 rchar = TODO(number);
            public static final int RCHARFIELD_NUMBER=1;
            
            private int rchar;
            public boolean hasrchar(){return true;}
            public int getrchar(){return this.rchar;}
            
            // TODO(label) UINT64 wchar = TODO(number);
            public static final int WCHARFIELD_NUMBER=1;
            
            private int wchar;
            public boolean haswchar(){return true;}
            public int getwchar(){return this.wchar;}
            
            // TODO(label) UINT64 read_bytes = TODO(number);
            public static final int READ_BYTESFIELD_NUMBER=1;
            
            private int read_bytes;
            public boolean hasread_bytes(){return true;}
            public int getread_bytes(){return this.read_bytes;}
            
            // TODO(label) UINT64 write_bytes = TODO(number);
            public static final int WRITE_BYTESFIELD_NUMBER=1;
            
            private int write_bytes;
            public boolean haswrite_bytes(){return true;}
            public int getwrite_bytes(){return this.write_bytes;}
            
            
            
        };
        // TODO(label) UINT32 pid = TODO(number);
        public static final int PIDFIELD_NUMBER=1;
        
        private int pid;
        public boolean haspid(){return true;}
        public int getpid(){return this.pid;}
        
        // TODO(label) OCTET-VECTOR name = TODO(number);
        public static final int NAMEFIELD_NUMBER=1;
        
        private byte[] name;
        public boolean hasname(){return true;}
        public byte[] getname(){return this.name;}
        
        // TODO(label) OCTET-VECTOR host_name = TODO(number);
        public static final int HOST_NAMEFIELD_NUMBER=1;
        
        private byte[] host_name;
        public boolean hashost_name(){return true;}
        public byte[] gethost_name(){return this.host_name;}
        
        // TODO(label)  cues = TODO(number);
        public static final int CUESFIELD_NUMBER=1;
        
        private rst.monitoring.ProcessCuesType.ProcessCues.Cues cues;
        public boolean hascues(){return true;}
        public rst.monitoring.ProcessCuesType.ProcessCues.Cues getcues(){return this.cues;}
        
        
        
    };
};