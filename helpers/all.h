#ifndef HELPERS__ALL_H
#define HELPERS__ALL_H

#include "../structs/node.h"

struct Node *create_node(int element);
struct Node *initialize_node(struct Node *node, int number);

void inorder_traversal_node(struct Node *root);
int hit_or_miss(struct Node *root, int number);
void add_to_array(struct Node *p_root, int **numbers, int *i);
#endif //HELPERS__ALL_H
