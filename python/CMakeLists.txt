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

    #SET_DIRECTORY_PROPERTIES(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "stable;sandbox")

    SET(STABLE_EGG_FOLDER "stable/rst.egg-info")
    SET(SANDBOX_EGG_FOLDER "sandbox/rstsandbox.egg-info")

    PROTOBUF_GENERATE(PYTHON PYTHON_STABLE_FILES
                      PROTOFILES ${STABLE_PROTOS}
                      PROTOROOT ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/stable")
    PROTOBUF_GENERATE(PYTHON PYTHON_SANDBOX_FILES
                      PROTOFILES ${SANDBOX_PROTOS}
                      PROTOROOT ${SANDBOX_ROOT}
                      INCLUDES ${STABLE_ROOT}
                      OUTPATH "${CMAKE_CURRENT_BINARY_DIR}/sandbox")

    CONFIGURE_FILE(CreatePythonPackages.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackagesStable.cmake" @ONLY)
    CONFIGURE_FILE(CreatePythonPackages.cmake.in "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackagesSandbox.cmake" @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup-stable.py.in" "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py" @ONLY)
    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup-sandbox.py.in" "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py" @ONLY)

    ADD_CUSTOM_COMMAND(OUTPUT ${STABLE_EGG_FOLDER}
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -P "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackagesStable.cmake"
                       COMMAND ${PYTHON_EXECUTABLE} "${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py" bdist_egg -d "${CMAKE_CURRENT_BINARY_DIR}"
                       DEPENDS ${PYTHON_STABLE_FILES}
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/stable"
                       COMMENT "Creating stable python egg")
    ADD_CUSTOM_TARGET(python-stable ALL DEPENDS ${STABLE_EGG_FOLDER})

    ADD_CUSTOM_COMMAND(OUTPUT ${SANDBOX_EGG_FOLDER}
                       # to have a valid python package, an __init__.py must be present for every directory
                       COMMAND ${CMAKE_COMMAND} -E remove_directory rstsandbox
                       COMMAND ${CMAKE_COMMAND} -E copy_directory rst rstsandbox
                       COMMAND ${CMAKE_COMMAND} -P "${CMAKE_CURRENT_BINARY_DIR}/CreatePythonPackagesSandbox.cmake"
                       COMMAND ${PYTHON_EXECUTABLE} "${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py" bdist_egg -d "${CMAKE_CURRENT_BINARY_DIR}"
                       DEPENDS ${PYTHON_SANDBOX_FILES}
                       WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/sandbox"
                       COMMENT "Creating sandbox python egg")
    ADD_CUSTOM_TARGET(python-sandbox ALL DEPENDS ${SANDBOX_EGG_FOLDER})


    # find out the correct install location:
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(prefix='')" OUTPUT_VARIABLE EGG_INSTALL_FOLDER)
    STRING(STRIP ${EGG_INSTALL_FOLDER} EGG_INSTALL_FOLDER)
    MESSAGE(STATUS "Python egg install folder: ${EGG_INSTALL_FOLDER}")

    # first, install using python to have a valid egg registration
    INSTALL(CODE "EXECUTE_PROCESS(COMMAND \"${PYTHON_EXECUTABLE}\" \"${CMAKE_CURRENT_BINARY_DIR}/stable/setup.py\" install \"--prefix=${CMAKE_INSTALL_PREFIX}\" -f WORKING_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/stable\")")
    INSTALL(CODE "EXECUTE_PROCESS(COMMAND \"${PYTHON_EXECUTABLE}\" \"${CMAKE_CURRENT_BINARY_DIR}/sandbox/setup.py\" install \"--prefix=${CMAKE_INSTALL_PREFIX}\" -f WORKING_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/sandbox\")")

    # second, also pseudo-install using cmake for the generated cmake package
    INSTALL(DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/."
            DESTINATION ${EGG_INSTALL_FOLDER}
            FILES_MATCHING PATTERN "*.egg"
            PATTERN "CMake*" EXCLUDE
            PATTERN "build" EXCLUDE
            PATTERN "${EGG_FOLDER}" EXCLUDE
            PATTERN "stable" EXCLUDE
            PATTERN "sandbox" EXCLUDE)

ELSE()
    MESSAGE(STATUS "Python not found or setuptools not available. Not installing python bindings.")
ENDIF()
