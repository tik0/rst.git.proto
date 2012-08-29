CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT("RST")

SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE)

SET(VERSION_MAJOR 0 CACHE STRING "Major project version part")
SET(VERSION_MINOR 6 CACHE STRING "Minor project version part")

# --- user options ---

OPTION(BUILD_CPP "Decide whether to build the CPP bindings." ON)
OPTION(BUILD_JAVA "Decide whether to build the Java bindings." ON)
OPTION(BUILD_PYTHON "Decide whether to build the Python bindings." ON)
OPTION(BUILD_MATLAB "Decide whether to build the Matlab bindings." ON)

# --- dependency handling ---

FIND_PACKAGE(RSC "${VERSION_MAJOR}.${VERSION_MINOR}" REQUIRED)
LIST(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_INSTALL_PREFIX}/share/cmake/Modules" ${RSC_CMAKE_MODULE_PATH})

FIND_PACKAGE(ProtocolBuffers REQUIRED)
IF(NOT PROTOBUF_LIBRARY)
    MESSAGE(FATAL_ERROR "protobuf library not found")
ENDIF()
IF(NOT PROTOBUF_PROTOC_EXECUTABLE)
    MESSAGE(FATAL_ERROR "protoc executable not found")
ENDIF()

# --- final version definition ---

# finally we can deduce the real project version with the RSC macros
INCLUDE(DefineProjectVersion)
DEFINE_PROJECT_VERSION(RST_ ${VERSION_MAJOR} ${VERSION_MINOR} 0 "archive")

MESSAGE(STATUS "This is rst version ${RST_VERSION}")

# --- protocol files ---

FILE(GLOB_RECURSE STABLE_PROTOS_REL
     RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
     "${CMAKE_CURRENT_SOURCE_DIR}/proto/stable/[^.]*.proto")
SET(STABLE_PROTOS)
FOREACH(FILE ${STABLE_PROTOS_REL})
    GET_FILENAME_COMPONENT(ABS_FILE ${FILE} ABSOLUTE)
    LIST(APPEND STABLE_PROTOS ${ABS_FILE})
ENDFOREACH()
FILE(GLOB_RECURSE SANDBOX_PROTOS_REL
     RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
     "${CMAKE_CURRENT_SOURCE_DIR}/proto/sandbox/[^.]*.proto")
SET(SANDBOX_PROTOS)
FOREACH(FILE ${SANDBOX_PROTOS_REL})
    GET_FILENAME_COMPONENT(ABS_FILE ${FILE} ABSOLUTE)
    LIST(APPEND SANDBOX_PROTOS ${ABS_FILE})
ENDFOREACH()

SET(STABLE_ROOT "${CMAKE_SOURCE_DIR}/proto/stable")
SET(SANDBOX_ROOT "${CMAKE_SOURCE_DIR}/proto/sandbox")

# --- language bindings ---

IF(BUILD_CPP)
    ADD_SUBDIRECTORY(cpp)
ENDIF()
IF(BUILD_JAVA)
    ADD_SUBDIRECTORY(java)
ENDIF()
IF(BUILD_PYTHON)
    ADD_SUBDIRECTORY(python)
ENDIF()
IF(BUILD_MATLAB)
    ADD_SUBDIRECTORY(matlab)
ENDIF()

# --- install protocol anyways for backwards compatibility ---

ADD_SUBDIRECTORY(proto)

# --- package ---

INCLUDE(CheckLSBTypes)

SET(CPACK_PACKAGE_VERSION_MAJOR ${RST_VERSION_MAJOR})
SET(CPACK_PACKAGE_VERSION_MINOR ${RST_VERSION_MINOR})
SET(CPACK_PACKAGE_VERSION_PATCH ${RST_VERSION_PATCH})
SET(VERSION_SUFFIX "${RST_VERSION_MAJOR}.${RST_VERSION_MINOR}")

# --------------------------------------------------------------------
# !!! Do not change these two lines !!!
SET(CPACK_PACKAGE_VERSION   "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
SET(CPACK_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}${VERSION_SUFFIX}-${CPACK_PACKAGE_VERSION}_${LSB_CODENAME}_${LSB_PROCESSOR_ARCH}")
# --------------------------------------------------------------------

SET(CPACK_GENERATOR "TGZ")
SET(CPACK_PACKAGE_VENDOR "CoR-Lab Bielefeld University")

IF(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    SET(CPACK_GENERATOR "${CPACK_GENERATOR};DEB")
    SET(CPACK_DEBIAN_PACKAGE_NAME "librst")
    SET(CPACK_DEBIAN_PACKAGE_VERSION ${CPACK_PACKAGE_VERSION})
    SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Sebastian Wrede (swrede@techfak.uni-bielefeld.de)")
    SET(CPACK_DEBIAN_PACKAGE_DESCRIPTION "Type specifications for Robotics and Cognitive Systems specified in Google Protocol Buffer's IDL format.")
    SET(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
    SET(CPACK_DEBIAN_PACKAGE_SECTION "devel")
    SET(CPACK_DEBIAN_ARCHITECTURE ${CMAKE_SYSTEM_PROCESSOR})
    SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libprotoc-dev, protobuf-compiler")
    SET(CPACK_DEBIAN_PACKAGE_SUGGESTS "python-setuptools, python-dev, cmake-data, cmake")
ENDIF(CMAKE_SYSTEM_NAME STREQUAL "Linux")

INCLUDE(CPack)
