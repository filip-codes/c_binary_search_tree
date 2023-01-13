#include <stdio.h>
#include <stdlib.h>

#include "../structs/node.h"

#include "all.h"
#include "../helpers/all.h"

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

    for (int i = 0; i < count; i++) {
        numbers[i] = p_root->currentNumber;
    }

    qsort(numbers, count, sizeof(int), cmpfunc);

    for(int i = 0; i < count; i++)
        printf("%d ", numbers[i]);

    /*printf("\n");
    printf("Enter a number and search for it:\n");
    int number = 0;
    scanf("%d", &number);

    hit_or_miss(p_root, number);*/

    // free noch schreiben
}