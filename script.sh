#!/bin/bash

gcc structs/node.h helpers/all.h helpers/cmpfunc.c helpers/add_to_array.c helpers/create_node.c helpers/hit_or_miss.c helpers/initialize_node.c helpers/inorder_traversal_node.c tasks/all.h tasks/one.c tasks/two.c tasks/three.c main.c -o ./search_everything -Wall -Wextra

echo "Program './search_everything' was compiled successfully!"

./search_everything 1 > task_one.txt
echo "'task_one.txt' was created"
./search_everything 2 > task_two.txt
echo "'task_two.txt' was created"
./search_everything 3 > task_three.txt
echo "'task_three.txt' was created"
