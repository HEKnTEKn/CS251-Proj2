cmake_minimum_required(VERSION 3.8)
project(prog2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        SAMPLE-TESTS/t1.cpp
        SAMPLE-TESTS/t2.cpp
        driver.cpp
        GridWorld.h
        GWInterface.h)

add_executable(prog2 ${SOURCE_FILES})