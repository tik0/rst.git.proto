/* This file is generated - do not edit. */

package rst.xml;


public final class AttachmentType {
    private AttachmentType(){}
    
    public static final class Attachment {
        // TODO(label) ASCII-STRING url = TODO(number);
        public static final int URLFIELD_NUMBER=1;
        
        private String url;
        public boolean hasurl(){return true;}
        public String geturl(){return this.url;}
        
        // TODO(label) OCTET-VECTOR wire_schema = TODO(number);
        public static final int WIRE_SCHEMAFIELD_NUMBER=1;
        
        private byte[] wire_schema;
        public boolean haswire_schema(){return true;}
        public byte[] getwire_schema(){return this.wire_schema;}
        
        // TODO(label) OCTET-VECTOR data = TODO(number);
        public static final int DATAFIELD_NUMBER=1;
        
        private byte[] data;
        public boolean hasdata(){return true;}
        public byte[] getdata(){return this.data;}
        
        
        
    };
};