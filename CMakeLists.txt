cmake_minimum_required(VERSION 3.20)
project(bubble_sort)

set(CMAKE_CXX_STANDARD 20)

add_executable(bubble_sort main.cpp
        reverse.cpp
        reverse.h
        unique.cpp
        unique.h)