/* This file is generated - do not edit. */

package icub;


public final class imageType {
    private imageType(){}
    
    public static final class image {
        public enum INNER9462{
          mat (7627117);
          
          private final int value;
          
          INNER9462(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum INNER9463{
          rgb (6449010);
          
          private final int value;
          
          INNER9463(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public static final class INNER9464 {
            // TODO(label) INT32 channels = TODO(number);
            public static final int CHANNELSFIELD_NUMBER=1;
            
            private int channels;
            public boolean haschannels(){return true;}
            public int getchannels(){return this.channels;}
            
            // TODO(label) INT32 num_bytes = TODO(number);
            public static final int NUM_BYTESFIELD_NUMBER=1;
            
            private int num_bytes;
            public boolean hasnum_bytes(){return true;}
            public int getnum_bytes(){return this.num_bytes;}
            
            // TODO(label) INT32 depth = TODO(number);
            public static final int DEPTHFIELD_NUMBER=1;
            
            private int depth;
            public boolean hasdepth(){return true;}
            public int getdepth(){return this.depth;}
            
            // TODO(label) INT32 width = TODO(number);
            public static final int WIDTHFIELD_NUMBER=1;
            
            private int width;
            public boolean haswidth(){return true;}
            public int getwidth(){return this.width;}
            
            // TODO(label) INT32 height = TODO(number);
            public static final int HEIGHTFIELD_NUMBER=1;
            
            private int height;
            public boolean hasheight(){return true;}
            public int getheight(){return this.height;}
            
            
            
        };
        // TODO(label)  mat_tag = TODO(number);
        public static final int MAT_TAGFIELD_NUMBER=1;
        
        private icub.imageType.image.INNER9462 mat_tag;
        public boolean hasmat_tag(){return true;}
        public icub.imageType.image.INNER9462 getmat_tag(){return this.mat_tag;}
        
        // TODO(label)  color_space = TODO(number);
        public static final int COLOR_SPACEFIELD_NUMBER=1;
        
        private icub.imageType.image.INNER9463 color_space;
        public boolean hascolor_space(){return true;}
        public icub.imageType.image.INNER9463 getcolor_space(){return this.color_space;}
        
        // TODO(label)  geometry = TODO(number);
        public static final int GEOMETRYFIELD_NUMBER=1;
        
        private icub.imageType.image.INNER9464 geometry;
        public boolean hasgeometry(){return true;}
        public icub.imageType.image.INNER9464 getgeometry(){return this.geometry;}
        
        // TODO(label) OCTET-VECTOR pixels = TODO(number);
        public static final int PIXELSFIELD_NUMBER=1;
        
        private byte[] pixels;
        public boolean haspixels(){return true;}
        public byte[] getpixels(){return this.pixels;}
        
        
        
    };
};