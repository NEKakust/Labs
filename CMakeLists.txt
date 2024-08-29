cmake_minimum_required(VERSION 3.26)
project(Lab C)

set(CMAKE_C_STANDARD 11)

add_executable(Lab
        main.c
        libs/data_structures/vector/vector.h
        libs/data_structures/vector/vector.c
        libs/data_structures/vector/test.c
        libs/data_structures/vector/test.h
        libs/data_structures/vector/vectorVoid.c
        libs/data_structures/vector/vectorVoid.h)
