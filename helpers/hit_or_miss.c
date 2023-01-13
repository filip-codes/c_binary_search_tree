#include <stdio.h>

#include "../structs/node.h"

int hit_counter = 0;

// Inorder Traversal
int hit_or_miss(struct Node *root, int number) {
    if (root != NULL) {
        // Traverse left
        hit_or_miss(root->leftNode, number);

        if (number == root->currentNumber) {
            printf("%d -> ", root->currentNumber);
            hit_counter++;
        }

        // Traverse right
        hit_or_miss(root->rightNode, number);
    }

    return hit_counter;
}