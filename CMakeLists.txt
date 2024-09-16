cmake_minimum_required(VERSION 3.22)
project(huawei-test)
set(CMAKE_C_STANDART 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

add_executable(task1 src/task1.c)
add_executable(task2 src/task2.c)
add_executable(task3 src/task3.cpp)

