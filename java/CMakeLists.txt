
SET(JAR_FILE "${CMAKE_CURRENT_BINARY_DIR}/rst.jar")

FIND_PROGRAM(ANT_EXECUTABLE ant)
IF(ANT_EXECUTABLE AND PROTOBUF_JAVA_LIBRARY)

    PROTOBUF_GENERATE(JAVA JAVA_PROTO_FILES
                      PROTOFILES ${RSTFILES}
                      PROTOROOT ${PROTO_ROOT}
                      OUTPATH ${CMAKE_CURRENT_BINARY_DIR})

    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/build.xml.in" "${CMAKE_CURRENT_BINARY_DIR}/build.xml" @ONLY)
    
    ADD_CUSTOM_COMMAND(OUTPUT ${JAR_FILE}
                       COMMAND ${ANT_EXECUTABLE} dist
                       DEPENDS ${JAVA_PROTO_FILES}
                       COMMENT "Creating jar file")
    ADD_CUSTOM_TARGET(java ALL DEPENDS ${JAR_FILE})

    INSTALL(FILES ${JAR_FILE} DESTINATION share/java)

ELSE()
    MESSAGE(STATUS "ant not found or protobuf java library not available. Java bindings will not be created")
ENDIF()
