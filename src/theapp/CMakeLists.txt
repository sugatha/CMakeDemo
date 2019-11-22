

#link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(theapp main.cpp)

target_include_directories(theapp PUBLIC ${CMAKE_SOURCE_DIR}/../include)
target_include_directories(theapp PUBLIC ${CMAKE_SOURCE_DIR}/mylib_static)
target_include_directories(theapp PUBLIC ${CMAKE_SOURCE_DIR}/mylib_shared)
target_include_directories(theapp PUBLIC ${CMAKE_SOURCE_DIR}/utillib_static)

add_custom_target(mytest ALL
    DEPENDS ${CMAKE_SOURCE_DIR}/../include/mstflds.h )

ADD_CUSTOM_COMMAND(
                OUTPUT ${CMAKE_SOURCE_DIR}/../include/mstflds.h
				#TARGET test
				PRE_BUILD
				COMMAND ${CMAKE_SOURCE_DIR}/../generators/genfld.exe ARGS ${CMAKE_SOURCE_DIR}/../csvs fields.csv > ${CMAKE_SOURCE_DIR}/../include/mstflds.h 
				DEPENDS ${CMAKE_SOURCE_DIR}/../csvs/fields.csv
				COMMENT "Generating header file..."
        )


target_link_libraries(theapp debug mylib_shared utillib_static mylib_static)
target_link_libraries(theapp optimized mylib_shared utillib_static mylib_static)