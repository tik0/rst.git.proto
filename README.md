# ###############################################################
# #Create new protobuffer file
# ###############################################################

# git clone https://code.cor-lab.org/git/rst.proto.git -b 0.11
# Go to rst.proto.git
# # Add you protobuffer in the following folder:
# mkdir proto/sandbox/rst/myPackage
# cd proto/sandbox/rst/myPackage
# # Edit your myProtoBuffer.proto with the following preamble
# myEditor myProtoBuffer.proto

# # ::::::::::::::::::::::::::myProtoBuffer.proto start::::::::::::::::::::::::::
# # package rst.myPackage;
# #
# # option java_outer_classname = "myProtoBufferType";
# #
# # message myProtoBuffer {
# # ...
# # }
# #
# # ::::::::::::::::::::::::::myProtoBuffer.proto end::::::::::::::::::::::::::

# cd - && mkdir build && cd build
# cmake .. && make
# # Two rst*.jar files appear in the subfolder "java"
# cd java
# # Install the jar files to the temporary maven folder
# mvn -B install:install-file -Dfile="rstsandbox-*.jar" -DgeneratePom=false -DpomFile="pom-sandbox*.xml" -Dpackaging=jar
# mvn -B install:install-file -Dfile="rst-*.jar" -DgeneratePom=false -DpomFile="pom-stable*.xml" -Dpackaging=jar


# ###############################################################
# #Building rsbm with new protobuffer files
# ###############################################################

# git clone https://code.cor-lab.org/git/rsb.git.matlab -b 0.11
# cd rsb.git.matlab
# # Add your new queue "myProtoBufferQueue.java" in /src/rsb/matlab from another file as template
# ./mvnprep.sh
# Edit the pom.xml file, because there seems to be a bug with the protobuffer version
# #pom.xml.patch
# #-        <pbuf.version>2.5.0</pbuf.version>
# #+        <pbuf.version>2.4.1</pbuf.version>
# mvn compile
# mvn package
# # If an error accures, maybe the temporary jar packages have been overwritten. Execute the last to commands from "Create new protobuffer file"
# # The new rsb-matlab*.jar files appear in the subfolder target


# ###############################################################
# #Using the updated version in Matlab
# ###############################################################

# # Source your created rsb-matlab*.jar and rst*.jar