cmake_minimum_required(VERSION 3.10)

# Set the project name
project(OSLabs)

# Include directories for header files
include_directories(include)


# Add the executable
add_executable(OSLabs
    src/FillDateStruct.c
    src/functions.c
)

target_link_libraries(OSLabs m)
# Set compilation flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG -s")
