cmake_minimum_required(VERSION 3.19)
project(3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(3
        Lab.3.3.cpp
        Node.h
        Queue.h)
