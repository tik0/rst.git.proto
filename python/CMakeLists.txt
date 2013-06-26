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

    SET(STABLE_CMAKE_FILE "${CMAKE_CURRENT_BINARY_DIR}/stable/CreatePythonPackagesStable.cmake")
    SET(STABLE_PYTHON_FILE "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py")
    IF(UNIX)
        SET(STABLE_CMAKE_FILE "'${STABLE_CMAKE_FILE}'")
        SET(STABLE_PYTHON_FILE "'${STABLE_PYTHON_FILE}'")
    ENDIF()
    ADD_CUSTOM_COMMAND(OUTPUT ${STABLE_EGG}
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P ${STABLE_CMAKE_FILE}
                       COMMAND ${PYTHON_EXECUTABLE} ${STABLE_PYTHON_FILE} bdist_egg
                       DEPENDS ${PYTHON_STABLE_FILES} "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py"
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/stable"
                       COMMENT "Creating stable python egg")
    ADD_CUSTOM_TARGET(python-stable ALL DEPENDS ${STABLE_EGG})

    SET(SANDBOX_CMAKE_FILE "${CMAKE_CURRENT_BINARY_DIR}/sandbox/CreatePythonPackagesSandbox.cmake")
    SET(SANDBOX_INIT_HACK "${CMAKE_CURRENT_SOURCE_DIR}/init-hack.py")
    SET(SANDBOX_INIT_PY "${CMAKE_CURRENT_BINARY_DIR}/sandbox/rstsandbox/__init__.py")
    SET(SANDBOX_SETUP_PY "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py")
    IF(UNIX)
        SET(SANDBOX_CMAKE_FILE "'${SANDBOX_CMAKE_FILE}'")
        SET(SANDBOX_INIT_HACK "'${SANDBOX_INIT_HACK}'")
        SET(SANDBOX_INIT_PY "'${SANDBOX_INIT_PY}'")
        SET(SANDBOX_SETUP_PY "'${SANDBOX_SETUP_PY}'")
    ENDIF()
    ADD_CUSTOM_COMMAND(OUTPUT ${SANDBOX_EGG}
                       # first part of the hack: namespace of proto files is rst but we want a module rstsandbox, so move the generated files to the right place
                       COMMAND ${CMAKE_COMMAND} -E remove_directory rstsandbox
                       COMMAND ${CMAKE_COMMAND} -E copy_directory rst rstsandbox
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P ${SANDBOX_CMAKE_FILE}
                       # second part of the hack: install a patches __init__.py for rstsandbox which installs rstsandbox in the rst namespace
                       COMMAND ${CMAKE_COMMAND} -E copy ${SANDBOX_INIT_HACK}
                                                        ${SANDBOX_INIT_PY}
                       COMMAND ${PYTHON_EXECUTABLE} ${SANDBOX_SETUP_PY} bdist_egg
                       DEPENDS ${PYTHON_SANDBOX_FILES} "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py"
                                                       "${CMAKE_CURRENT_SOURCE_DIR}/init-hack.py"
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/sandbox"
                       COMMENT "Creating sandbox python egg")
    ADD_CUSTOM_TARGET(python-sandbox ALL DEPENDS ${SANDBOX_EGG})

    # find out the correct install location:
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; import os.path; print os.path.relpath(get_python_lib(prefix='${CMAKE_INSTALL_PREFIX}'), '${CMAKE_INSTALL_PREFIX}')" OUTPUT_VARIABLE EGG_INSTALL_FOLDER)
    STRING(STRIP ${EGG_INSTALL_FOLDER} EGG_INSTALL_FOLDER)
    MESSAGE(STATUS "Python egg install folder: ${EGG_INSTALL_FOLDER}")

    # generate pth file for easy-install
    GET_FILENAME_COMPONENT(STABLE_EGG_NAME ${STABLE_EGG} NAME)
    GET_FILENAME_COMPONENT(SANDBOX_EGG_NAME ${SANDBOX_EGG} NAME)
    CONFIGURE_FILE(rst.pth.in "${CMAKE_CURRENT_BINARY_DIR}/${INSTALL_PREFIX}.pth" @ONLY)

    INSTALL(FILES ${STABLE_EGG} ${SANDBOX_EGG} "${CMAKE_CURRENT_BINARY_DIR}/${INSTALL_PREFIX}.pth"
            DESTINATION ${EGG_INSTALL_FOLDER})

ELSE()
    MESSAGE(STATUS "Python 2 not found or setuptools not available. Not installing python bindings.")
ENDIF()
