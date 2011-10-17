
INCLUDE(PedanticCompilerWarnings)
INCLUDE(InstallFilesRecursive)

SET(STABLE_NAME "rst")
SET(SANDBOX_NAME "rstsandbox")

INCLUDE_DIRECTORIES(BEFORE SYSTEM ${PROTOBUF_INCLUDE_DIRS})

ADD_SUBDIRECTORY(stable)
ADD_SUBDIRECTORY(sandbox)

# --- decide on export macros for config files ---

IF(WIN32)
    SET(RST_CFLAGS "/DRST_EXPORT=__declspec(dllimport)")
    SET(RSTSANDBOX_CFLAGS "/DRSTSANDBOX_EXPORT=__declspec(dllimport)")
ELSE()
    SET(RST_CFLAGS "-DRST_EXPORT=")
    SET(RSTSANDBOX_CFLAGS "-DRSTSANDBOX_EXPORT=")
ENDIF()

# --- pkgconfig files ---

CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/${STABLE_NAME}.pc.in"
               "${CMAKE_CURRENT_BINARY_DIR}/${STABLE_NAME}.pc"
               @ONLY)
CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/${SANDBOX_NAME}.pc.in"
               "${CMAKE_CURRENT_BINARY_DIR}/${SANDBOX_NAME}.pc"
               @ONLY)
INSTALL(FILES "${CMAKE_CURRENT_BINARY_DIR}/${STABLE_NAME}.pc"
              "${CMAKE_CURRENT_BINARY_DIR}/${SANDBOX_NAME}.pc"
        DESTINATION lib/pkgconfig)

# --- cmake export ---

CONFIGURE_FILE(RSTConfig.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/RSTConfig.cmake" @ONLY)
INSTALL(FILES "${CMAKE_CURRENT_BINARY_DIR}/RSTConfig.cmake" DESTINATION share/rst)

INSTALL(EXPORT RSTDepends
        DESTINATION "share/rst")
