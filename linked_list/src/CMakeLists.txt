cmake_minimum_required(VERSION 3.12)
project (linked_list)
add_executable(app main.c)

enable_testing()

add_executable(check_init check_list.c linked_list.c)

add_test(check_init check_init)
