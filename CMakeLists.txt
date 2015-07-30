cmake_minimum_required(VERSION 3.2)
cmake_policy(VERSION 3.2)

project(libtest)

include(GenerateExportHeader)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(a a.h a.cpp)

generate_export_header(a
                       BASE_NAME a
                       EXPORT_MACRO_NAME a_EXPORT
                       EXPORT_FILE_NAME aexport.h
                       STATIC_DEFINE a_BUILT_AS_STATIC)

add_library(b b.h b.cpp)

generate_export_header(b
                       BASE_NAME b
                       EXPORT_MACRO_NAME b_EXPORT
                       EXPORT_FILE_NAME bexport.h
                       STATIC_DEFINE b_BUILT_AS_STATIC)

add_library(c c.h c.cpp c2.h c2.cpp)

generate_export_header(c
                       BASE_NAME c
                       EXPORT_MACRO_NAME c_EXPORT
                       EXPORT_FILE_NAME cexport.h
                       STATIC_DEFINE c_BUILT_AS_STATIC)

add_library(d d.h d.cpp d2.h d2.cpp)

generate_export_header(d
                       BASE_NAME d
                       EXPORT_MACRO_NAME d_EXPORT
                       EXPORT_FILE_NAME dexport.h
                       STATIC_DEFINE d_BUILT_AS_STATIC)

add_executable(testa testa.cpp)
target_link_libraries(testa a)

add_executable(testb testb.cpp)
target_link_libraries(testb a b)

add_executable(testc testc.cpp)
target_link_libraries(testc c)

add_executable(testd testd.cpp)
target_link_libraries(testd c d)

add_executable(testall testall.cpp)
target_link_libraries(testall a b c d)
