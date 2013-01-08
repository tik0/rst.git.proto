IF(NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
    MESSAGE(FATAL_ERROR "Cannot configure CPack to generate Debian packages on non-linux systems.")
ENDIF()

SET(VERSION_SUFFIX "${RST_VERSION_MAJOR}.${RST_VERSION_MINOR}")

INCLUDE(CheckLSBTypes)

SET(CPACK_GENERATOR "DEB")
SET(CPACK_STRIP_FILES TRUE)

SET(CPACK_DEBIAN_PACKAGE_NAME "rst${RST_VERSION_MAJOR}.${RST_VERSION_MINOR}")
SET(CPACK_DEBIAN_PACKAGE_VERSION     "${CPACK_PACKAGE_VERSION}${CPACK_PACKAGE_REVISION}")
SET(CPACK_PACKAGE_FILE_NAME "${CPACK_DEBIAN_PACKAGE_NAME}-${CPACK_DEBIAN_PACKAGE_VERSION}_${CMAKE_SYSTEM_PROCESSOR}")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Sebastian Wrede <swrede@techfak.uni-bielefeld.de>")
SET(CPACK_DEBIAN_PACKAGE_DESCRIPTION "Type specifications for Robotics and Cognitive Systems.
 Descriptions are specified in Google Protocol Buffer's IDL format.")
SET(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
SET(CPACK_DEBIAN_PACKAGE_SECTION "devel")
SET(CPACK_DEBIAN_ARCHITECTURE ${CMAKE_SYSTEM_PROCESSOR})
SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libprotobuf-dev, libc6")
SET(CPACK_DEBIAN_PACKAGE_SUGGESTS "python-setuptools, python-dev")
SET(CPACK_DEBIAN_PACKAGE_CONFLICTS "rst, rst-0.7")
