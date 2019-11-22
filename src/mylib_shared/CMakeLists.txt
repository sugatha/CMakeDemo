include_directories(${CMAKE_SOURCE_DIR}/mylib_static)
include_directories(${CMAKE_SOURCE_DIR}/utillib_static)
include_directories(${CMAKE_SOURCE_DIR}/../include)
link_directories("C:\\Users\\sugathan.anandan\\Desktop\\cmakedemo\\bin")

message(STATUS "OOps!" )
message(STATUS "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")

file(GLOB headers *.h)
add_library(mylib_shared SHARED mylibshared.cpp ${headers})

#SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-DEXPMODULE")

#target_include_directories(mylib_shared PUBLIC ${CMAKE_SOURCE_DIR}/mylib_static)
#target_include_directories(mylib_shared PUBLIC ${CMAKE_SOURCE_DIR}/utillib_static)
#target_include_directories(mylib_shared PUBLIC ${CMAKE_SOURCE_DIR}/../include)
#link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

target_link_libraries(mylib_shared ALL "c:/temp/basic.lib")
target_link_libraries(mylib_shared debug "C:\\Users\\sugathan.anandan\\Desktop\\cmakedemo\\bin\\mylib_static.lib" "C:\\Users\\sugathan.anandan\\Desktop\\cmakedemo\\bin\\utillib_static.lib")
target_link_libraries(mylib_shared optimized mylib_static utillib_static)