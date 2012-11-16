/* This file is generated - do not edit. */

package rst.audition;

import rst.audition.FloatSoundArrayType;

public final class FormattedSoundChunkType {
    private FormattedSoundChunkType(){}
    
    public static final class FormattedSoundChunk {
        public enum ChannelType{
          ALL (0),
          LEFT (1),
          RIGHT (2),
          FRONT (3),
          REAR (4);
          
          private final int value;
          
          ChannelType(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label)  data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private rst.audition.FloatSoundArrayType.FloatSoundArray data;
        public boolean hasdata(){return true;}
        public rst.audition.FloatSoundArrayType.FloatSoundArray getdata(){return this.data;}
        
        // TODO(label) UINT32 rate = TODO(number);
        public static final int RATEFIELD_NUMBER=1;
        
        private int rate;
        public boolean hasrate(){return true;}
        public int getrate(){return this.rate;}
        
        // TODO(label) UINT32 channels = TODO(number);
        public static final int CHANNELSFIELD_NUMBER=1;
        
        private int channels;
        public boolean haschannels(){return true;}
        public int getchannels(){return this.channels;}
        
        
        
    };
};