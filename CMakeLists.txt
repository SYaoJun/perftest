cmake_minimum_required(VERSION 3.16)
project(MyProject CXX)

SET(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

add_compile_options(-lprofiler)
include_directories(/opt/homebrew/Cellar/gperftools/2.15/include)
add_executable(my_executable main.cpp)

target_link_libraries(my_executable PRIVATE /opt/homebrew/Cellar/gperftools/2.15/lib/libprofiler.dylib)
