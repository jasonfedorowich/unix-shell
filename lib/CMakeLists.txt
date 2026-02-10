cmake_minimum_required(VERSION 3.13)

project(lib)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

set(HEADER_FILES inc/input/InputHandler.h
        inc/action/BuiltIns.h
        src/action/Action.cpp
        inc/action/Action.h
        src/action/ExitAction.cpp
        inc/action/ExitAction.h)

set(SOURCE_FILES src/input/InputHandler.cpp
        src/action/Action.cpp
        inc/action/Action.h
        src/action/ExitAction.cpp
        inc/action/ExitAction.h
        inc/garbage/Garbage.h
        src/action/EchoAction.cpp
        inc/action/EchoAction.h
        src/command/Context.cpp
        inc/command/Context.h
        src/action/DefaultAction.cpp
        inc/action/DefaultAction.h
        src/token/Tokenizer.cpp
        inc/token/Tokenizer.h
        src/token/Token.cpp
        inc/token/Token.h
)

add_library(lib STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# Debug: Print the path being shared to the console during 'Reload CMake'
message(STATUS "SHELL-LIB PATH: ${CMAKE_CURRENT_SOURCE_DIR}")