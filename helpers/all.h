#ifndef HELPERS__ALL_H
#define HELPERS__ALL_H

#include "../structs/node.h"

struct Node *create_node(int element);
struct Node *initialize_node(struct Node *node, int number);

int cmpfunc(const void *a, const void *b);
void inorder_traversal_node(struct Node *root, int show_numbers);
int hit_or_miss(struct Node *root, int number, int show_numbers);
void add_to_array(struct Node *p_root, int **numbers, int *i);
#endif //HELPERS__ALL_H
