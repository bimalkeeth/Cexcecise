cmake_minimum_required(VERSION 3.13)
project(ex01 C)

set(CMAKE_C_STANDARD 99)

set(HEADERS "sample01")
include_directories(${HEADERS})
add_executable(ex01 main.c sample01/main.h)