#include <stdio.h>

#include "../structs/node.h"

void add_to_array(struct Node *p_root, int **numbers, int *i) {
    if (p_root == NULL || i == NULL)
        return;

    // Traverse root
    (*numbers)[*i] = p_root->currentNumber;
    (*i)++;

    // Traverse left
    add_to_array(p_root->leftNode, numbers, i);
    // Traverse right
    add_to_array(p_root->rightNode, numbers, i);
}