cmake_minimum_required (VERSION 3.2)

# compiler settings
set(CMAKE_CXX_COMPILER "g++")

# create the project (must have a name)
project (ex13_inline)

# add compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -p -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

# create the executable
add_executable(ex13p2 src/main.cpp)
