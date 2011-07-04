
FIND_PACKAGE(PythonInterp)

IF(PYTHONINTERP_FOUND)

    
    SET(EGG_FOLDER "rst.egg-info")

    PROTOBUF_GENERATE(PYTHON PYTHON_PROTO_FILES
                      PROTOFILES ${RSTFILES}
                      PROTOROOT ${CMAKE_SOURCE_DIR}
                      OUTPATH ${CMAKE_CURRENT_BINARY_DIR})
                      
    # to have a valid python package, an __init__.py must be present
    SET(PACKAGE_FILE "${CMAKE_CURRENT_BINARY_DIR}/rst/__init__.py")
    ADD_CUSTOM_COMMAND(OUTPUT ${PACKAGE_FILE}
                       COMMAND ${CMAKE_COMMAND} -E touch ${PACKAGE_FILE}
                       DEPENDS ${PYTHON_PROTO_FILES}
                       COMMENT "Fixing python package")

    CONFIGURE_FILE("${CMAKE_CURRENT_SOURCE_DIR}/setup.py.in" "${CMAKE_CURRENT_BINARY_DIR}/setup.py" @ONLY)
    
    ADD_CUSTOM_COMMAND(OUTPUT ${EGG_FOLDER}
                       COMMAND ${PYTHON_EXECUTABLE} setup.py bdist_egg -d ${CMAKE_CURRENT_BINARY_DIR}
                       DEPENDS ${PYTHON_PROTO_FILES} ${PACKAGE_FILE}
                       COMMENT "Creating python egg")
    ADD_CUSTOM_TARGET(python ALL DEPENDS ${EGG_FOLDER})

    # find out the correct install location:
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(prefix='')" OUTPUT_VARIABLE EGG_INSTALL_FOLDER)
    STRING(STRIP ${EGG_INSTALL_FOLDER} EGG_INSTALL_FOLDER)
    MESSAGE(STATUS "Python egg install folder: ${EGG_INSTALL_FOLDER}")
    
    INSTALL(DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/."
            DESTINATION ${EGG_INSTALL_FOLDER}
            FILES_MATCHING PATTERN "*.egg"
            PATTERN "CMake*" EXCLUDE
            PATTERN "build" EXCLUDE
            PATTERN "${EGG_FOLDER}" EXCLUDE
            PATTERN "rst" EXCLUDE)

ELSE()
    MESSAGE(STATUS "Python not found. Not installing python bindings.")
ENDIF()
