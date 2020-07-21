cmake_minimum_required(VERSION 3.9)
project(Sandbox VERSION 1.0.1)

set (OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})
file(MAKE_DIRECTORY ${OUTPUT_DIRECTORY})


set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

add_executable(Sandbox ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp)
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/Hazel)
target_link_libraries(Sandbox PRIVATE engine)



