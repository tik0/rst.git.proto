CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT("RST")

SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE)

# --- dependency handling ---

FIND_PACKAGE(RSC REQUIRED)
SET(CMAKE_MODULE_PATH ${CMAKE_INSTALL_PREFIX}/share/cmake/Modules ${CMAKE_MODULE_PATH} ${RSC_CMAKE_MODULE_PATH})

FIND_PACKAGE(ProtocolBuffers REQUIRED)
IF(NOT PROTOBUF_LIBRARY)
    MESSAGE(FATAL_ERROR "protobuf library not found")
ENDIF()
IF(NOT PROTOBUF_PROTOC_EXECUTABLE)
    MESSAGE(FATAL_ERROR "protoc executable not found")
ENDIF()

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

#MESSAGE(STATUS "stable protos: ${STABLE_PROTOS}")
#MESSAGE(STATUS "sandbox protos: ${SANDBOX_PROTOS}")

SET(STABLE_ROOT "${CMAKE_SOURCE_DIR}/proto/stable")
SET(SANDBOX_ROOT "${CMAKE_SOURCE_DIR}/proto/sandbox")

# --- language bindings ---

ADD_SUBDIRECTORY(cpp)
ADD_SUBDIRECTORY(java)
ADD_SUBDIRECTORY(python)

# --- install protocol anyways for backwards compatibility ---

ADD_SUBDIRECTORY(proto)


# --- package ---

# backwards-compatibility with older RSC versions
IF(${RSC_VERSION} VERSION_GREATER "0.5.0" OR ${RSC_VERSION} VERSION_EQUAL "0.5.0")

    INCLUDE(CheckLSBTypes)

    # --------------------------------------------------------------------
    # !!! Do not change these two lines !!!
    # jwienke: I did ;)
    SET(CPACK_PACKAGE_VERSION   "trunk")
    SET(CPACK_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}-${LSB_CODENAME}_${LSB_PROCESSOR_ARCH}")
    # --------------------------------------------------------------------

ELSE()
    MESSAGE(STATUS "Skipping standardizes package name because RSC is too old.")
ENDIF()

SET(CPACK_GENERATOR "TGZ")
SET(CPACK_PACKAGE_VENDOR "CoR-Lab Bielefeld University")

IF(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    SET(CPACK_GENERATOR "${CPACK_GENERATOR};DEB")
    SET(CPACK_DEBIAN_PACKAGE_NAME "rst")
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
