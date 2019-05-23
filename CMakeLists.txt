cmake_minimum_required(VERSION 3.14)
project(helloworld C)

set(CMAKE_C_STANDARD 99)

add_executable(helloworld main.c char_io.c mypoint.c mystruct.c mystruct.h mytypedef.c mytypedef.h)