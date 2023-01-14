cmake_minimum_required(VERSION 3.23)
project(ti_projekt_search C)

set(CMAKE_C_STANDARD 99)

add_executable(ti_projekt_search structs/node.h helpers/all.h helpers/cmpfunc.c helpers/add_to_array.c helpers/create_node.c helpers/hit_or_miss.c helpers/initialize_node.c helpers/inorder_traversal_node.c tasks/all.h tasks/one.c tasks/two.c tasks/three.c main.c)
