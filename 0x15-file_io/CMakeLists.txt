cmake_minimum_required(VERSION 3.26)
project(0x15_file_io C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x15_file_io
        0-main.c
        0-read_textfile.c
        100-elf_header.c
        2-append_text_to_file.c
        3-cp.c
        main.h)
