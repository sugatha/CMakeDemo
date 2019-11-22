cmake_minimum_required(VERSION 3.8...3.16)

project(cmakedemo 
		VERSION 1.0
		DESCRIPTION "CMake demo project"
		LANGUAGES CXX)
			   

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")
 
 include(macros.txt)
 include(master_cmake_flags.txt)

 #file(READ "master_cmake_flags.txt" SOURCES)

 #[[FOREACH(child ${SOURCES})    
       message(STATUS ${child})    
	   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${child}")
  ENDFOREACH()
  ]]

 #SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
 #SET(${SOURCES})


 #SUBDIRLIST(SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(mylib_static)
add_subdirectory(utillib_static)
add_subdirectory(mylib_shared)
add_subdirectory(theapp)

add_dependencies(mylib_shared mylib_static utillib_static)
add_dependencies(theapp mylib_shared)

#set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT theapp)