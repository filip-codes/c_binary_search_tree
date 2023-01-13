#ifndef HELPERS__ALL_H
#define HELPERS__ALL_H

#include "../structs/node.h"

struct Node *create_node(int element);
struct Node *initialize_node(struct Node *node, int number);

void inorder_traversal_node(struct Node *root);
int hit_or_miss(struct Node *root, int number);
/*double sort(enum SortType sort_type, enum SortDirection sort_direction, int *numbers, int number_of_elements);
int check_order(enum SortDirection sort_direction, int *numbers, int number_of_elements);
void push_to_node(int number);
void show_numbers(int *numbers, int number_of_elements);*/
#endif //HELPERS__ALL_H
