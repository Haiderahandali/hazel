cmake_minimum_required(VERSION 3.9)
project(Sandbox VERSION 1.0)

#setting the output Directory for the GAME-Engine(Shared Lib) and the Game (Sandbox)
set (OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})

#Creating the output drectory so it won't generate an error of not finding such Directory
file(MAKE_DIRECTORY ${OUTPUT_DIRECTORY})

#setting the Standard of C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#including the header directory
include_directories(include)

#Making the output of the Dynamic Lib going to the output directory
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

#creating the Sandbox (Game) 
add_executable(Sandbox MACOSX_BUNDLE src/main.cpp)

#adding our game engine to the game and link it
add_subdirectory(Hazel)
target_link_libraries(Sandbox PRIVATE engine)





