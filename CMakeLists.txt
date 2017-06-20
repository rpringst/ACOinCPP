cmake_minimum_required(VERSION 3.7)
project(ACO)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp graph.cpp graph.h vertex.cpp vertex.h edge.cpp edge.h)
add_executable(ACO ${SOURCE_FILES})