cmake_minimum_required(VERSION 3.26)
project(Lab)

set(CMAKE_C_STANDARD 11)

add_executable(Lab
        main.c
        libs/data_structures/vector/vector.h
        libs/data_structures/vector/vector.c)
