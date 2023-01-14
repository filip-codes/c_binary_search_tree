#include <stdio.h>
#include <stdlib.h>

#include "../structs/node.h"

#include "all.h"
#include "../helpers/all.h"

void add_to_array(struct Node *p_root, int **numbers, int *i);

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

void execute_task_two() {
    int count = 400;
    struct Node *p_root = NULL;

    for (int i = 0; i < count; i++)
        p_root = initialize_node(p_root, (rand() % 1000));

    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL)
        return;

    int nmb = 0;

    // Convert numbers from struct
    add_to_array(p_root, &numbers, &nmb);

    qsort(numbers, count, sizeof(int), cmpfunc);

    for(int i = 0; i < count; i++)
        printf("%d ", numbers[i]);

    printf("\n");
    printf("Enter a number and search for it:\n");
    int number = 0;
    scanf("%d", &number);
    int *item = bsearch(&number, numbers, count, sizeof(int), cmpfunc);
    if(item != NULL) {
        printf("Hit = %d\n", *item);
    } else {
        printf("Item = %d could not be found\n", *item);
    }

    // free noch schreiben
}

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