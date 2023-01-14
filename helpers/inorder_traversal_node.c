#include <stdio.h>

#include "../structs/node.h"

// Inorder Traversal
void inorder_traversal_node(struct Node *root, int show_numbers) {
    if (root != NULL) {
        // Traverse left
        inorder_traversal_node(root->leftNode, show_numbers);

        // Traverse root
        if (show_numbers == 1)
            printf("%d -> ", root->currentNumber);

        // Traverse right
        inorder_traversal_node(root->rightNode, show_numbers);
    }
}