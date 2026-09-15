cmake_minimum_required(VERSION 4.2)
project(ex01 C)

set(CMAKE_C_STANDARD 11)

add_executable(ex01 main.c
        calculadora.c
        calculadora.h)
