cmake_minimum_required(VERSION 3.26)
project(0x13_more_singly_linked_lists C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x13_more_singly_linked_lists
        0-print_listint.c
        1-listint_len.c
        10-delete_nodeint.c
        100-reverse_listint.c
        101-print_listint_safe.c
        102-free_listint_safe.c
        103-find_loop.c
        2-add_nodeint.c
        3-add_nodeint_end.c
        4-free_listint.c
        5-free_listint2.c
        6-pop_listint.c
        7-get_nodeint.c
        8-sum_listint.c
        9-insert_nodeint.c
        lists.h
        main.c)
