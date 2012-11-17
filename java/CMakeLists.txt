SET(STABLE_JAR_FILE "${CMAKE_CURRENT_BINARY_DIR}/rst.jar" )
SET(SANDBOX_JAR_FILE "${CMAKE_CURRENT_BINARY_DIR}/rstsandbox.jar")
SET(JAR_FILES ${STABLE_JAR_FILE} ${SANDBOX_JAR_FILE})

FIND_PROGRAM(ANT_EXECUTABLE ant)
IF(ANT_EXECUTABLE)

    SET_DIRECTORY_PROPERTIES(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "classes-stable;classes-sandbox;stable;sandbox")

    GENERATE_CODE(java STABLE)
    GENERATE_CODE(java SANDBOX STABLE)

    # Prepare safe variables and configure ant build files.
    STRING(REPLACE "&" "&amp;" SAFE_CMAKE_CURRENT_BINARY_DIR  "${CMAKE_CURRENT_BINARY_DIR}")
    SET(JAR_FILES)
    SET(JAR_LINES)
    FOREACH(DOMAIN ${DOMAINS})
        STRING(TOLOWER ${DOMAIN} DOMAIN_LOWER)

        LIST(APPEND JAR_FILES "${${DOMAIN}_JAR_FILE}")

        STRING(REPLACE "&" "&amp;" TEMP "<jar jarfile=\"${${DOMAIN}_JAR_FILE}\" basedir=\"classes-${DOMAIN_LOWER}\" manifest=\"MANIFEST.MF\"/>")
        SET(JAR_LINES "${JAR_LINES}\n${TEMP}")
    ENDFOREACH()
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/build.xml.in"
                   "${CMAKE_CURRENT_BINARY_DIR}/build.xml"
                   @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/MANIFEST.MF.in"
                   "${CMAKE_CURRENT_BINARY_DIR}/MANIFEST.MF"
                   @ONLY)

    ADD_CUSTOM_COMMAND(OUTPUT  ${JAR_FILES}
                       COMMAND ${ANT_EXECUTABLE} dist
                       DEPENDS ${STABLE_PROTO_FILES} ${SANDBOX_PROTO_FILES}
                               "${CMAKE_CURRENT_BINARY_DIR}/build.xml" "${CMAKE_CURRENT_BINARY_DIR}/MANIFEST.MF"
                       COMMENT "Creating jar files")
    ADD_CUSTOM_TARGET(java ALL DEPENDS ${JAR_FILES})

    INSTALL(FILES ${JAR_FILES} DESTINATION share/java)

ELSE()
    MESSAGE(STATUS "ant not found or protobuf java library not available. Java bindings will not be created")
ENDIF()
