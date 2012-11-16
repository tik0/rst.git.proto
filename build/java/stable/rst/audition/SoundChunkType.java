/* This file is generated - do not edit. */

package rst.audition;


public final class SoundChunkType {
    private SoundChunkType(){}
    
    public static final class SoundChunk {
        public enum SampleType{
          SAMPLE_S8 (0),
          SAMPLE_U8 (1),
          SAMPLE_S16 (2),
          SAMPLE_U16 (4),
          SAMPLE_S24 (8),
          SAMPLE_U24 (16);
          
          private final int value;
          
          SampleType(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum EndianNess{
          ENDIAN_LITTLE (0),
          ENDIAN_BIG (1);
          
          private final int value;
          
          EndianNess(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label) OCTET-VECTOR data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private byte[] data;
        public boolean hasdata(){return true;}
        public byte[] getdata(){return this.data;}
        
        // TODO(label) UINT32 sample_count = TODO(number);
        public static final int SAMPLE_COUNTFIELD_NUMBER=1;
        
        private int sample_count;
        public boolean hassample_count(){return true;}
        public int getsample_count(){return this.sample_count;}
        
        // TODO(label) UINT32 channels = TODO(number);
        public static final int CHANNELSFIELD_NUMBER=1;
        
        private int channels;
        public boolean haschannels(){return true;}
        public int getchannels(){return this.channels;}
        
        // TODO(label) UINT32 rate = TODO(number);
        public static final int RATEFIELD_NUMBER=1;
        
        private int rate;
        public boolean hasrate(){return true;}
        public int getrate(){return this.rate;}
        
        // TODO(label)  sample_type = TODO(number);
        public static final int SAMPLE_TYPEFIELD_NUMBER=1;
        
        private rst.audition.SoundChunkType.SoundChunk.SampleType sample_type;
        public boolean hassample_type(){return true;}
        public rst.audition.SoundChunkType.SoundChunk.SampleType getsample_type(){return this.sample_type;}
        
        // TODO(label)  endianness = TODO(number);
        public static final int ENDIANNESSFIELD_NUMBER=1;
        
        private rst.audition.SoundChunkType.SoundChunk.EndianNess endianness;
        public boolean hasendianness(){return true;}
        public rst.audition.SoundChunkType.SoundChunk.EndianNess getendianness(){return this.endianness;}
        
        
        
    };
};