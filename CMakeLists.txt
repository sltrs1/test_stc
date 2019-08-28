cmake_minimum_required(VERSION 3.14)
project(test_stc)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_stc main.cpp fib.cpp fib.h)