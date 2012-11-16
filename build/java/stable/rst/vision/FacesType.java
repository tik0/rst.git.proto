/* This file is generated - do not edit. */

package rst.vision;

import rst.vision.FaceType;
import rst.geometry.BoundingBoxType;
import rst.math.Vec2DIntType;

public final class FacesType {
    private FacesType(){}
    
    public static final class Faces {
        // TODO(label)  faces = TODO(number);
        public static final int FACESFIELD_NUMBER=1;
        
        private rst.vision.FaceType.Face faces;
        public boolean hasfaces(){return true;}
        public rst.vision.FaceType.Face getfaces(){return this.faces;}
        
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
        
        
        
    };
};