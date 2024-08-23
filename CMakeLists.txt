cmake_minimum_required(VERSION 3.16)
project(MyProject CXX)

SET(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
# Find and include gperftools

# 根据实际的 Homebrew 安装路径进行调整
set(CMAKE_PREFIX_PATH "/opt/homebrew" CACHE PATH "Homebrew installation path")

# 添加编译选项来启用性能分析
add_compile_options(-lprofiler)
link_directories(/opt/homebrew/Cellar/gperftools/2.15/lib/)
include_directories(/opt/homebrew/Cellar/gperftools/2.15/include)
# 添加你的可执行文件
add_executable(my_executable main.cpp)


# 链接gperftools库
target_link_libraries(my_executable PRIVATE /opt/homebrew/Cellar/gperftools/2.15/lib/libprofiler.dylib)
