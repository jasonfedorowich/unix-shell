cmake_minimum_required(VERSION 3.13)

project(lib)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

set(HEADER_FILES inc/input/InputHandler.h
        inc/action/BuiltIns.h
        inc/action/Action.h
        inc/garbage/Garbage.h
        inc/action/ExitAction.h
        inc/action/EchoAction.h
        inc/action/TypeAction.h
        inc/command/Context.h
        inc/token/Tokenizer.h
        inc/action/PwdAction.h
        inc/token/Token.h
        inc/action/TypeAction.h
        inc/file/File.h
        inc/action/PwdAction.h
        inc/action/FileAction.h
)

set(SOURCE_FILES src/input/InputHandler.cpp
        src/action/ExitAction.cpp
        src/action/TypeAction.cpp
        src/action/FileAction.cpp
        src/action/PwdAction.cpp
        src/action/Action.cpp
        src/action/ExitAction.cpp
        src/action/EchoAction.cpp
        src/command/Context.cpp
        src/token/Tokenizer.cpp
        src/token/Token.cpp
        src/action/TypeAction.cpp
        src/file/File.cpp
        src/action/FileAction.cpp
        src/action/PwdAction.cpp
        src/process/Process.cpp
        inc/process/Process.h

)

add_library(lib STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# Debug: Print the path being shared to the console during 'Reload CMake'
message(STATUS "SHELL-LIB PATH: ${CMAKE_CURRENT_SOURCE_DIR}")