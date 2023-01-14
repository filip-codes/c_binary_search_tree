#include <stdio.h>

#include "../structs/node.h"

int hit_counter = 0;

// Inorder Traversal
int hit_or_miss(struct Node *root, int number, int show_numbers) {
    if (root != NULL) {
        // Traverse left
        hit_or_miss(root->leftNode, number, show_numbers);

        if (number == root->currentNumber) {
            if (show_numbers == 1)
                printf("%d -> ", root->currentNumber);

            hit_counter++;
        }

        // Traverse right
        hit_or_miss(root->rightNode, number, show_numbers);
    }

    return hit_counter;
}