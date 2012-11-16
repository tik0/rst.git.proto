/* This file is generated - do not edit. */

package rst.running.example;

import rst.running.example.MetaDataType;

public final class ImageType {
    private ImageType(){}
    
    public static final class Image {
        // TODO(label)  meta_data = TODO(number);
        public static final int META_DATAFIELD_NUMBER=1;
        
        private rst.running.example.MetaDataType.MetaData meta_data;
        public boolean hasmeta_data(){return true;}
        public rst.running.example.MetaDataType.MetaData getmeta_data(){return this.meta_data;}
        
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
        
        // TODO(label)  depths = TODO(number);
        public static final int DEPTHSFIELD_NUMBER=1;
        
        private int depths;
        public boolean hasdepths(){return true;}
        public int getdepths(){return this.depths;}
        
        // TODO(label) OCTET-VECTOR data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private byte[] data;
        public boolean hasdata(){return true;}
        public byte[] getdata(){return this.data;}
        
        
        
    };
};