cmake_minimum_required(VERSION 3.3)
project(cpp-primer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 main)
add_executable(sizeof source/ch4/sizeof.cpp)