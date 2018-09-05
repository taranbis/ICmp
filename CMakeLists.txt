cmake_minimum_required(VERSION 3.10)

project (Virtual_ICmp)

add_executable(Virtual_ICmp ICmp.cpp CCmp1.cpp)

set(CMAKE_BUILD_TYPE Debug)

#add_compile_options ("-ggdb")

#target_link_libraries (Virtual_ICmp)
