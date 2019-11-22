cmake_minimum_required( VERSION 3.8...3.16 )

project( mylib_static
         VERSION 1.0.0
         DESCRIPTION "The static library" )

add_definitions(-DEXPMODULE)

add_library(mylib_static STATIC myclass.cpp myclass.h)

target_include_directories(mylib_static PUBLIC ${CMAKE_SOURCE_DIR}/../include)
