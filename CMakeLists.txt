cmake_minimum_required(VERSION 3.24)
project(DZ3)

set(CMAKE_CXX_STANDARD 14)

include_directories(DZ3)

add_executable(runner
        include/DZ3.hpp
        main/main.cpp
        source/source.cpp)
