FIND_PACKAGE(PythonInterp)

# also check that setuptools is available
IF(PYTHONINTERP_FOUND AND ((NOT PYTHON_VERSION_MAJOR) OR (PYTHON_VERSION_MAJOR EQUAL 2)) AND NOT SETUPTOOLS_FOUND)
    MESSAGE(STATUS "Checking wether setuptools for python is available")
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "import setuptools" RESULT_VARIABLE SETUPTOOLS_RESULT)
    IF(SETUPTOOLS_RESULT EQUAL 0)
        SET(SETUPTOOLS_FOUND TRUE CACHE BOOL "Indicates wether python can run setuptools" FORCE)
    ELSE()
        SET(SETUPTOOLS_FOUND FALSE CACHE BOOL "Indicates wether python can run setuptools")
    ENDIF()
    MESSAGE(STATUS "setuptools available: ${SETUPTOOLS_FOUND}")
ENDIF()

FUNCTION(PARSE_EGG_NAMES OUT_VARIABLE LOG)

    STRING(REGEX MATCH "##### .*\\.egg" RAW_MATCH ${LOG})
    STRING(REPLACE "##### " "" EGG_FILE ${RAW_MATCH})
    FILE(TO_CMAKE_PATH ${EGG_FILE} EGG_FILE)
    SET(${OUT_VARIABLE} ${EGG_FILE} PARENT_SCOPE)

ENDFUNCTION()

IF(PYTHONINTERP_FOUND AND ((NOT PYTHON_VERSION_MAJOR) OR (PYTHON_VERSION_MAJOR EQUAL 2)) AND SETUPTOOLS_FOUND)

    #SET_DIRECTORY_PROPERTIES(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "stable;sandbox")

    PROTOBUF_GENERATE(PYTHON PYTHON_STABLE_FILES
                      PROTOFILES ${STABLE_PROTOS}
                      PROTOROOT ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/stable")
    PROTOBUF_GENERATE(PYTHON PYTHON_SANDBOX_FILES
                      PROTOFILES ${SANDBOX_PROTOS}
                      PROTOROOT ${SANDBOX_ROOT}
                      INCLUDES ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/sandbox")

    CONFIGURE_FILE(CreatePythonPackages.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/stable/CreatePythonPackagesStable.cmake" @ONLY)
    CONFIGURE_FILE(CreatePythonPackages.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/sandbox/CreatePythonPackagesSandbox.cmake" @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup-stable.py.in" "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py" @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup-sandbox.py.in" "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py" @ONLY)

    # determine the egg names which will be produced
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} setup.py print_outputs
                    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/stable"
                    OUTPUT_VARIABLE STABLE_EGG_RAW)
    PARSE_EGG_NAMES(STABLE_EGG ${STABLE_EGG_RAW})
    SET(STABLE_EGG "${CMAKE_CURRENT_BINARY_DIR}/stable/${STABLE_EGG}")
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} setup.py print_outputs
                    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/sandbox"
                    OUTPUT_VARIABLE SANDBOX_EGG_RAW)
    PARSE_EGG_NAMES(SANDBOX_EGG ${SANDBOX_EGG_RAW})
    SET(SANDBOX_EGG "${CMAKE_CURRENT_BINARY_DIR}/sandbox/${SANDBOX_EGG}")
    #MESSAGE("${STABLE_EGG} ${SANDBOX_EGG}")

    ADD_CUSTOM_COMMAND(OUTPUT ${STABLE_EGG}
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P "'${CMAKE_CURRENT_BINARY_DIR}/stable/CreatePythonPackagesStable.cmake'"
                       COMMAND ${PYTHON_EXECUTABLE} "'${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py'" bdist_egg
                       DEPENDS ${PYTHON_STABLE_FILES} "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py"
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/stable"
                       COMMENT "Creating stable python egg")
    ADD_CUSTOM_TARGET(python-stable ALL DEPENDS ${STABLE_EGG})

    ADD_CUSTOM_COMMAND(OUTPUT ${SANDBOX_EGG}
                       # first part of the hack: namespace of proto files is rst but we want a module rstsandbox, so move the generated files to the right place
                       COMMAND ${CMAKE_COMMAND} -E remove_directory rstsandbox
                       COMMAND ${CMAKE_COMMAND} -E copy_directory rst rstsandbox
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P "'${CMAKE_CURRENT_BINARY_DIR}/sandbox/CreatePythonPackagesSandbox.cmake'"
                       # second part of the hack: install a patches __init__.py for rstsandbox which installs rstsandbox in the rst namespace
                       COMMAND ${CMAKE_COMMAND} -E copy "'${CMAKE_CURRENT_SOURCE_DIR}/init-hack.py'"
                                                        "'${CMAKE_CURRENT_BINARY_DIR}/sandbox/rstsandbox/__init__.py'"
                       COMMAND ${PYTHON_EXECUTABLE} "'${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py'" bdist_egg
                       DEPENDS ${PYTHON_SANDBOX_FILES} "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py"
                                                       "${CMAKE_CURRENT_SOURCE_DIR}/init-hack.py"
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/sandbox"
                       COMMENT "Creating sandbox python egg")
    ADD_CUSTOM_TARGET(python-sandbox ALL DEPENDS ${SANDBOX_EGG})

    # find out the correct install location:
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(prefix='')" OUTPUT_VARIABLE EGG_INSTALL_FOLDER)
    STRING(STRIP ${EGG_INSTALL_FOLDER} EGG_INSTALL_FOLDER)
    MESSAGE(STATUS "Python egg install folder: ${EGG_INSTALL_FOLDER}")

    # generate pth file for easy-install
    GET_FILENAME_COMPONENT(STABLE_EGG_NAME ${STABLE_EGG} NAME)
    GET_FILENAME_COMPONENT(SANDBOX_EGG_NAME ${SANDBOX_EGG} NAME)
    CONFIGURE_FILE(rst.pth.in "${CMAKE_CURRENT_BINARY_DIR}/rst.pth" @ONLY)

    INSTALL(FILES ${STABLE_EGG} ${SANDBOX_EGG} "${CMAKE_CURRENT_BINARY_DIR}/rst.pth"
            DESTINATION ${EGG_INSTALL_FOLDER})

ELSE()
    MESSAGE(STATUS "Python 2 not found or setuptools not available. Not installing python bindings.")
ENDIF()
