cmake_minimum_required(VERSION 3.15)
project(libasm)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(libasm
        ft_strlen.s
        main.c)
