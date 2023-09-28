cmake_minimum_required(VERSION 3.26)
project(0x07_pointers_arrays_strings C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x07_pointers_arrays_strings
        0-memset.c
        1-memcpy.c
        100-set_string.c
        2-strchr.c
        3-strspn.c
        4-strpbrk.c
        5-strstr.c
        7-print_chessboard.c
        8-print_diagsums.c
        main.h)
