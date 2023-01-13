#include <stdio.h>

#include "../structs/node.h"

// Inorder Traversal
void inorder_traversal_node(struct Node *root) {
    if (root != NULL) {
        // Traverse left
        inorder_traversal_node(root->leftNode);

        // Traverse root
        printf("%d -> ", root->currentNumber);

        // Traverse right
        inorder_traversal_node(root->rightNode);
    }
}