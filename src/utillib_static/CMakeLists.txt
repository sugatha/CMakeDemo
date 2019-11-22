cmake_minimum_required(VERSION 3.6.2)
project(utillib_static)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHc /std:c++latest")



add_library(utillib_static STATIC myutilclass.cpp myutilclass.h)

#SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${projectDir}\\Test")

add_definitions(-DEXPMODULE)

include_directories(${CMAKE_SOURCE_DIR}/../../include)
