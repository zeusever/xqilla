lemon_c_cxx_files(SRC)

IF(WIN32)
    ADD_DEFINITIONS(/wd"4996" /wd"4127" /wd"4267" /wd"4251" /wd"4100" /wd"4297" /wd"4189" /wd"4063" /wd"4800" /wd"4819" /wd"4610" /wd"4510" /wd"4701" /wd"4101" /wd"4244" /wd"4245" /wd"4702" /wd"4310" /wd"4355" /wd"4512" /D_CRT_SECURE_NO_WARNINGS)
ENDIF()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lexer)

lemon_library_project(xqilla ${SRC})

target_link_libraries(xqilla xercesc)