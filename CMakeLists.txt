cmake_minimum_required(VERSION 3.24)
project(DZ3)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(DZ3
        include/DZ3.hpp
        main/main.cpp
        source/bruh.cpp)
