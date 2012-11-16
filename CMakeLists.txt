CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT("RST")

SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE)

SET(VERSION_MAJOR 0 CACHE STRING "Major project version part")
SET(VERSION_MINOR 8 CACHE STRING "Minor project version part")

# --- user options ---

OPTION(BUILD_CPP "Decide whether to build the CPP bindings." ON)
OPTION(BUILD_JAVA "Decide whether to build the Java bindings." ON)
OPTION(BUILD_PYTHON "Decide whether to build the Python bindings." ON)
OPTION(BUILD_MATLAB "Decide whether to build the Matlab bindings." ON)

# --- dependency handling ---

FIND_PACKAGE(RSC "${VERSION_MAJOR}.${VERSION_MINOR}" REQUIRED)
LIST(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_INSTALL_PREFIX}/share/cmake/Modules" ${RSC_CMAKE_MODULE_PATH})

INCLUDE(DefineProjectVersion)
INCLUDE(PadString)

FIND_PROGRAM(ROSETTA_COMPILER rs-compiler rs-compilercl0.2)

# --- final version definition ---

# finally we can deduce the real project version with the RSC macros
DEFINE_PROJECT_VERSION(RST_ ${VERSION_MAJOR} ${VERSION_MINOR} 0 "archive")

MESSAGE(STATUS "This is rst version ${RST_VERSION}")

# --- data definition files ---

SET(SCHEMA_DIR   "${CMAKE_CURRENT_SOURCE_DIR}/schema")
SET(STABLE_ROOT  "${SCHEMA_DIR}/stable")
SET(SANDBOX_ROOT "${SCHEMA_DIR}/sandbox")

SET(DOMAINS      "STABLE" "SANDBOX")
SET(FORMATS      "PROTO" "BOTTLE-SCHEMA" "LCM" "MSG"
                 "MAPPING")

FUNCTION(FIND_SCHEMA_FILES FORMAT DOMAIN)
    STRING(TOLOWER "${FORMAT}" FORMAT_LOWER)
    STRING(TOLOWER "${DOMAIN}" DOMAIN_LOWER)
    SET(OUTPUT ${FORMAT}_${DOMAIN}_FILES)

    FILE(GLOB_RECURSE FILES_RELATIVE
         RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
         "${SCHEMA_DIR}/${DOMAIN_LOWER}/[^.]*.${FORMAT_LOWER}")
    SET(${OUTPUT})
    FOREACH(FILE ${FILES_RELATIVE})
        GET_FILENAME_COMPONENT(FILE_ABSOLUTE ${FILE} ABSOLUTE)
        SET(${OUTPUT} "${${OUTPUT}};${FILE_ABSOLUTE}")
    ENDFOREACH()
    SET(${OUTPUT} "${${OUTPUT}}" PARENT_SCOPE)
ENDFUNCTION()

MESSAGE(STATUS "Collecting schema files")
FOREACH(FORMAT ${FORMATS})
    FOREACH(DOMAIN ${DOMAINS})
        FIND_SCHEMA_FILES(${FORMAT} ${DOMAIN})

        LIST(LENGTH ${FORMAT}_${DOMAIN}_FILES COUNT)
        MESSAGE(STATUS "  ${DOMAIN} ${FORMAT} (${COUNT} file(s))")
    ENDFOREACH()
ENDFOREACH()

FUNCTION(GENERATE_CODE LANGUAGE DOMAIN)
    SET(DEPENDENCY_DOMAINS ${ARGN})

    STRING(TOLOWER "${DOMAIN}" DOMAIN_LOWER)

    STRING(TOUPPER ${LANGUAGE} LANGUAGE_UPPER)
    STRING(REGEX REPLACE "\\+" "P" LANGUAGE_SAFE ${LANGUAGE_UPPER})
    SET(${LANGUAGE_SAFE}_${DOMAIN}_SOURCES)
    SET(${LANGUAGE_SAFE}_${DOMAIN}_HEADERS)
    SET(OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/${DOMAIN_LOWER}")

    SET(FILES)
    SET(INCLUDES)
    FOREACH(FORMAT ${FORMATS})
        STRING(TOLOWER "${FORMAT}" FORMAT_LOWER)

        SET(FILES "${FILES};${${FORMAT}_${DOMAIN}_FILES}")

        SET(INCLUDES "${INCLUDES};-I;${${DOMAIN}_ROOT}/${FORMAT_LOWER}")
        FOREACH(DOMAIN ${DEPENDENCY_DOMAINS})
            SET(INCLUDES "${INCLUDES};-I;${${DOMAIN}_ROOT}/${FORMAT_LOWER}")
        ENDFOREACH()

        LIST(LENGTH ${FORMAT}_${DOMAIN}_FILES COUNT)
        MESSAGE(STATUS "  Configuring ${LANGUAGE}/${DOMAIN_LOWER}/${FORMAT_LOWER} (${COUNT} files)")
    ENDFOREACH()

    LIST(LENGTH FILES COUNT)
    # ADD_CUSTOM_TARGET(${LANGUAGE_SAFE}-${DOMAIN_LOWER} ALL
    #                   COMMAND "${ROSETTA_COMPILER}"
    #                           --load "/homes/jmoringe/code/cor-lab/rosetta/cl/rosetta/src/model/language/python.lisp"
    #                           --load "/homes/jmoringe/code/cor-lab/rosetta/cl/rosetta/src/model/language/java.lisp"
    #                           --language         "${LANGUAGE}"
    #                           --mechanism        ros-msg
    #                           --output-directory "${OUTPUT_DIR}"
    #                           ${INCLUDES}
    #                           ${FILES} > /dev/null
    #                   SOURCES ${FILES}
    #                   COMMENT "Generating ${LANGUAGE}/${DOMAIN_LOWER} (${FORMATS}, ${COUNT} files)")

    FILE(GLOB_RECURSE TEMP "${OUTPUT_DIR}/*.pb.cc")
    SET(${LANGUAGE_SAFE}_${DOMAIN}_SOURCES ${TEMP})
    SET(${LANGUAGE_SAFE}_${DOMAIN}_SOURCES ${${LANGUAGE_SAFE}_${DOMAIN}_SOURCES} PARENT_SCOPE)

    FILE(GLOB_RECURSE TEMP "${OUTPUT_DIR}/*.pb.h")
    SET(${LANGUAGE_SAFE}_${DOMAIN}_HEADERS ${TEMP})
    SET(${LANGUAGE_SAFE}_${DOMAIN}_HEADERS ${${LANGUAGE_SAFE}_${DOMAIN}_HEADERS} PARENT_SCOPE)
ENDFUNCTION()

# --- language bindings ---

MESSAGE(STATUS "Configuring code generation")
IF(BUILD_CPP)
    ADD_SUBDIRECTORY(cpp)
ENDIF()
IF(BUILD_JAVA)
    ADD_SUBDIRECTORY(java)
ENDIF()
IF(BUILD_PYTHON)
    ADD_SUBDIRECTORY(python)
ENDIF()
# IF(BUILD_MATLAB)
#     ADD_SUBDIRECTORY(matlab)
# ENDIF()

# --- install protocol anyways for backwards compatibility ---

ADD_SUBDIRECTORY(schema)

# --- package ---

SET(CPACK_PACKAGE_VERSION_MAJOR ${RST_VERSION_MAJOR})
SET(CPACK_PACKAGE_VERSION_MINOR ${RST_VERSION_MINOR})
SET(CPACK_PACKAGE_VERSION_PATCH ${RST_VERSION_PATCH})
SET(CPACK_PACKAGE_VERSION       "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")

SET(CPACK_PACKAGE_VENDOR "CoR-Lab Bielefeld University")
SET(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/COPYING.txt")

INCLUDE(ProvideFlexibleCPack)
