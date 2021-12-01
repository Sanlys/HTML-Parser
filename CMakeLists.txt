cmake_minimum_required(VERSION 3.10)

project(Tutorial)

set (src main.cpp)
add_executable(Tutorial ${src})
execute_process(COMMAND cmake --build .)
execute_process(COMMAND echo hei)