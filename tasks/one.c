#include <stdio.h>
#include <stdlib.h>

#include "../structs/node.h"

#include "all.h"
#include "../helpers/all.h"

void execute_task_one() {
    int count = 400;
    struct Node *p_root = NULL;

    for (int i = 0; i < count; i++)
        p_root = initialize_node(p_root, (rand() % 1000));

    printf("Inorder traversal: ");
    inorder_traversal_node(p_root, 1);

    printf("\n");
    printf("Enter a number and search for it:\n");
    int number = 0;
    scanf("%d", &number);

    int hit_counter = hit_or_miss(p_root, number, 1);

    printf("\n");

    if (hit_counter != 0)
        printf("%d was hit %d times!\n", number, hit_counter);
    else
        printf("miss...\n");

    // free noch schreiben
}