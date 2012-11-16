/* This file is generated - do not edit. */

package rst.xml;

import rst.xml.AttachmentType;

public final class XOPType {
    private XOPType(){}
    
    public static final class XOP {
        // TODO(label) ASCII-STRING xml = TODO(number);
        public static final int XMLFIELD_NUMBER=1;
        
        private String xml;
        public boolean hasxml(){return true;}
        public String getxml(){return this.xml;}
        
        // TODO(label)  attachments = TODO(number);
        public static final int ATTACHMENTSFIELD_NUMBER=1;
        
        private rst.xml.AttachmentType.Attachment attachments;
        public boolean hasattachments(){return true;}
        public rst.xml.AttachmentType.Attachment getattachments(){return this.attachments;}
        
        
        
    };
};