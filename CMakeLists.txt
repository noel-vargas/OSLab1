cmake_minimum_required(VERSION 3.10)

# Set the project name
project(HelloWorld)

# Include directories for header files
include_directories(include)

# Add the executable
add_executable(hello_world
    src/main.c
    src/functions.c
)

# Set compilation flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG -s")
