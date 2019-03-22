cmake_minimum_required(VERSION 3.13)
project(Example_02 C)

set(CMAKE_C_STANDARD 99)

set(HEADERS "header")
set(SOURCE "source")
include_directories(${HEADERS})
include_directories(${SOURCE})

add_executable(Example_02 main.c header/example-02.h source/example-02.c header/functions-01.h source/functions-01.c header/game.h source/game.c header/recursion.h source/recursion.c)