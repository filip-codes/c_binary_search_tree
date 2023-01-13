#include <stdio.h>
#include <stdlib.h>

#include "../structs/node.h"

struct Node *create_node(int element) {
    struct Node *temp = malloc(sizeof(struct Node));
    temp->currentNumber = element;
    temp->leftNode = temp->rightNode = NULL;
    return temp;
}