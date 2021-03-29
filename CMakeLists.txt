cmake_minimum_required(VERSION 3.17)
project(lab_10)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_10 header.hpp/list.hpp list.cpp stack.cpp header.hpp/stack.hpp queue.cpp header.hpp/queue.hpp main.cpp)