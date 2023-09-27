cmake_minimum_required(VERSION 3.26)
project(CS203_Lab3 C)

set(CMAKE_C_STANDARD 11)

add_executable(CS203_Lab3 main.c
        bit_manip.c
        bit_manip.h
)


add_executable(test_bitmanip bit_manip.c test_bitmanip.c
        test_bitmanip.c

)
