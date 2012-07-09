
INCLUDE(PedanticCompilerWarnings)
INCLUDE(InstallFilesRecursive)

SET(STABLE_NAME "rst")
SET(SANDBOX_NAME "rstsandbox")
SET(SO_VERSION "${RST_VERSION_MAJOR}.${RST_VERSION_MINOR}")

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

# --- user options ---

OPTION(EXPORT_TO_CMAKE_PAKAGE_REGISTRY "If set to ON, RST will be exported to the CMake user package registry so that downstream projects automatically find the workspace location in find_package calls." OFF)

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

IF(EXPORT_TO_CMAKE_PAKAGE_REGISTRY)
    MESSAGE(STATUS "Exported RST to CMake package registry")
    EXPORT(PACKAGE RST)
ENDIF()

CONFIGURE_FILE(RSTBuildTreeSettings.cmake.in
               "${CMAKE_CURRENT_BINARY_DIR}/RSTBuildTreeSettings.cmake" @ONLY)

FILE(TO_CMAKE_PATH "${RSC_DIR}" RSC_DIR)
FILE(TO_CMAKE_PATH "${PROTOBUF_ROOT}" PROTOBUF_ROOT)
CONFIGURE_FILE(RSTConfig.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/RSTConfig.cmake" @ONLY)
INSTALL(FILES "${CMAKE_CURRENT_BINARY_DIR}/RSTConfig.cmake" DESTINATION share/rst)
CONFIGURE_FILE(RSTConfigVersion.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/RSTConfigVersion.cmake" @ONLY)
INSTALL(FILES "${CMAKE_CURRENT_BINARY_DIR}/RSTConfigVersion.cmake" DESTINATION share/rst)

EXPORT(TARGETS ${STABLE_NAME} ${SANDBOX_NAME} FILE "${CMAKE_CURRENT_BINARY_DIR}/RSTDepends.cmake")
INSTALL(EXPORT RSTDepends
        DESTINATION "share/rst")
