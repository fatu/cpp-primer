cmake_minimum_required(VERSION 3.3)
project(cpp-primer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 main)
add_executable(vector_examples source/ch3/vector_examples.cc)