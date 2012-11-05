IF(PROTOBUF_PROTOC_MATLAB)

    SET_DIRECTORY_PROPERTIES(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "stable;sandbox")

    PROTOBUF_GENERATE(MATLAB MATLAB_STABLE_FOLDER
                      PROTOFILES ${STABLE_PROTOS}
                      PROTOROOT ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/stable")

    PROTOBUF_GENERATE(MATLAB MATLAB_SANDBOX_FOLDER
                      PROTOFILES ${SANDBOX_PROTOS}
                      PROTOROOT ${SANDBOX_ROOT}
                      INCLUDES ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/sandbox")

    ADD_CUSTOM_TARGET(matlab-stable ALL DEPENDS ${MATLAB_STABLE_FOLDER})
    ADD_CUSTOM_TARGET(matlab-sandbox ALL DEPENDS ${MATLAB_SANDBOX_FOLDER})

    INSTALL(DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/stable"
                      "${CMAKE_CURRENT_BINARY_DIR}/sandbox"
            DESTINATION share/rst/matlab)

ELSE()
    MESSAGE(STATUS "Matlab not supported by protoc. Not generating matlab bindings.")
ENDIF()
