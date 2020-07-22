cmake_minimum_required(VERSION 3.9)
#naming the project and giving it a version
project(Hazel VERSION 1.0)

#making the output Directory for the GAME-Engine(Shared Lib) and the Game (Sandbox)
set (OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})

#Creating the output drectory so it won't generate an error of not finding such Directory
file(MAKE_DIRECTORY ${OUTPUT_DIRECTORY})

#Making the output of the Dynamic Lib going to the output directory
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})



#creating the Shared Lib
add_library(engine SHARED src/eng.cpp)

#including PUBLIC(can be used outside the lib as well) directories for the engine
target_include_directories(engine PUBLIC include)

