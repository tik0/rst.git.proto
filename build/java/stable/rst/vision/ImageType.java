/* This file is generated - do not edit. */

package rst.vision;


public final class ImageType {
    private ImageType(){}
    
    public static final class Image {
        public enum Depth{
          DEPTH_8U (8),
          DEPTH_16U (16),
          DEPTH_32F (32);
          
          private final int value;
          
          Depth(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum ColorMode{
          COLOR_GRAYSCALE (0),
          COLOR_RGB (1),
          COLOR_BGR (2),
          COLOR_YUV (4),
          COLOR_YUV422 (8);
          
          private final int value;
          
          ColorMode(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        public enum DataOrder{
          DATA_SEPARATE (0),
          DATA_INTERLEAVED (1);
          
          private final int value;
          
          DataOrder(int value){this.value=value;}
          private int value(){return this.value;}
          
        };
        // TODO(label) OCTET-VECTOR data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private byte[] data;
        public boolean hasdata(){return true;}
        public byte[] getdata(){return this.data;}
        
        // TODO(label) UINT32 width = TODO(number);
        public static final int WIDTHFIELD_NUMBER=1;
        
        private int width;
        public boolean haswidth(){return true;}
        public int getwidth(){return this.width;}
        
        // TODO(label) UINT32 height = TODO(number);
        public static final int HEIGHTFIELD_NUMBER=1;
        
        private int height;
        public boolean hasheight(){return true;}
        public int getheight(){return this.height;}
        
        // TODO(label) UINT32 channels = TODO(number);
        public static final int CHANNELSFIELD_NUMBER=1;
        
        private int channels;
        public boolean haschannels(){return true;}
        public int getchannels(){return this.channels;}
        
        // TODO(label)  depth = TODO(number);
        public static final int DEPTHFIELD_NUMBER=1;
        
        private rst.vision.ImageType.Image.Depth depth;
        public boolean hasdepth(){return true;}
        public rst.vision.ImageType.Image.Depth getdepth(){return this.depth;}
        
        // TODO(label)  color_mode = TODO(number);
        public static final int COLOR_MODEFIELD_NUMBER=1;
        
        private rst.vision.ImageType.Image.ColorMode color_mode;
        public boolean hascolor_mode(){return true;}
        public rst.vision.ImageType.Image.ColorMode getcolor_mode(){return this.color_mode;}
        
        // TODO(label)  data_order = TODO(number);
        public static final int DATA_ORDERFIELD_NUMBER=1;
        
        private rst.vision.ImageType.Image.DataOrder data_order;
        public boolean hasdata_order(){return true;}
        public rst.vision.ImageType.Image.DataOrder getdata_order(){return this.data_order;}
        
        
        
    };
};