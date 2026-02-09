cmake_minimum_required(VERSION 3.13)

project(shell-starter-cpp)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

add_subdirectory(lib)
include_directories("${CMAKE_SOURCE_DIR}/lib")

add_executable(shell ${SOURCE_FILES}
        lib/src/InputHandler.cpp
        lib/inc/InputHandler.h)

target_link_libraries(shell
        PRIVATE
        readline
        lib
)

#add_subdirectory(tests)
