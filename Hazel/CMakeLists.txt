cmake_minimum_required(VERSION 3.9)
#naming the project and giving it a version
project(Hazel VERSION 1.0)

#making the output Directory for the GAME-Engine(Shared Lib) and the Game (Sandbox)
set (OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})


set(CMAKE_CROSS_CONFIGS all)

#Making the output of the Dynamic Lib going to the output directory
#set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/bin/Debug/${PROJECT_NAME})
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/bin/Release/${PROJECT_NAME})

#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})


include_directories(include/Hazel)

#creating the Shared Lib
add_library(engine SHARED src/Application.cpp)

if(WIN32)

add_compile_definitions(HZ_PLATFORM_WINDOWS HZ_DLL_API)
    
endif(WIN32)



#including PUBLIC(can be used outside the lib as well) directories for the engine
target_include_directories(engine PUBLIC include/Hazel)

