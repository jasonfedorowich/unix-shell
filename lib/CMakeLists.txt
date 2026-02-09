cmake_minimum_required(VERSION 3.13)

project(lib)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

set(HEADER_FILES inc/InputHandler.h
        inc/BuiltIns.h
        src/Action.cpp
        inc/Action.h
        src/ExitAction.cpp
        inc/ExitAction.h)

set(SOURCE_FILES src/InputHandler.cpp
        src/Action.cpp
        inc/Action.h
        src/ExitAction.cpp
        inc/ExitAction.h
        inc/Garbage.h
)

add_library(lib STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# Debug: Print the path being shared to the console during 'Reload CMake'
message(STATUS "SHELL-LIB PATH: ${CMAKE_CURRENT_SOURCE_DIR}")