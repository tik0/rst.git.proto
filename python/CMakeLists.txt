FIND_PACKAGE(PythonInterp)

# also check that setuptools is available
IF(PYTHONINTERP_FOUND AND NOT SETUPTOOLS_FOUND)
    MESSAGE(STATUS "Checking wether setuptools for python is available")
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "import setuptools" RESULT_VARIABLE SETUPTOOLS_RESULT)
    IF(SETUPTOOLS_RESULT EQUAL 0)
        SET(SETUPTOOLS_FOUND TRUE CACHE BOOL "Indicates wether python can run setuptools" FORCE)
    ELSE()
        SET(SETUPTOOLS_FOUND FALSE CACHE BOOL "Indicates wether python can run setuptools")
    ENDIF()
    MESSAGE(STATUS "setuptools available: ${SETUPTOOLS_FOUND}")
ENDIF()

IF(PYTHONINTERP_FOUND AND SETUPTOOLS_FOUND)

    SET(EGG_FOLDER "proto/rst.egg-info")

    PROTOBUF_GENERATE(PYTHON PYTHON_PROTO_FILES
                      PROTOFILES ${RSTFILES}
                      PROTOROOT ${PROTO_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/proto")

    CONFIGURE_FILE(CreatePythonPackages.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackages.cmake" @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup.py.in" "${CMAKE_CURRENT_BINARY_DIR}/proto/setup.py" @ONLY)

    ADD_CUSTOM_COMMAND(OUTPUT ${EGG_FOLDER}
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackages.cmake"
                       COMMAND ${PYTHON_EXECUTABLE} "${CMAKE_CURRENT_BINARY_DIR}/proto/setup.py" bdist_egg -d "${CMAKE_CURRENT_BINARY_DIR}"
                       DEPENDS ${PYTHON_PROTO_FILES}
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/proto"
                       COMMENT "Creating python egg")
    ADD_CUSTOM_TARGET(python ALL DEPENDS ${EGG_FOLDER})

    # find out the correct install location:
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(prefix='')" OUTPUT_VARIABLE EGG_INSTALL_FOLDER)
    STRING(STRIP ${EGG_INSTALL_FOLDER} EGG_INSTALL_FOLDER)
    MESSAGE(STATUS "Python egg install folder: ${EGG_INSTALL_FOLDER}")

    # first, install using python to have a valid egg registration
    INSTALL(CODE "EXECUTE_PROCESS(COMMAND \"${PYTHON_EXECUTABLE}\" \"${CMAKE_CURRENT_BINARY_DIR}/proto/setup.py\" install \"--prefix=${CMAKE_INSTALL_PREFIX}\" -f WORKING_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/proto\")")

    # second, also pseudo-install using cmake for the generated cmake package
    INSTALL(DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/."
            DESTINATION ${EGG_INSTALL_FOLDER}
            FILES_MATCHING PATTERN "*.egg"
            PATTERN "CMake*" EXCLUDE
            PATTERN "build" EXCLUDE
            PATTERN "${EGG_FOLDER}" EXCLUDE
            PATTERN "proto" EXCLUDE)

ELSE()
    MESSAGE(STATUS "Python not found or setuptools not available. Not installing python bindings.")
ENDIF()
