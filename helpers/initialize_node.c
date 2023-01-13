#include <stdlib.h>

#include "all.h"

// Generate numbers between 0 - 999
struct Node *initialize_node(struct Node *node, int number) {
    // Return a new node if the tree is empty
    if (node == NULL) return create_node(number);

    // Traverse to the right place and insert the node
    if (number < node->currentNumber)
        node->leftNode = initialize_node(node->leftNode, number);
    else
        node->rightNode = initialize_node(node->rightNode, number);

    return node;
}
