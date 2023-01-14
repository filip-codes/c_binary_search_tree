#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "all.h"
#include "../helpers/all.h"

void self_implemented();
void library();

void execute_task_three() {
    self_implemented();

    printf("\n");

    library();

    // free noch schreiben
}

void self_implemented() {
    printf("Self Implemented:\n");
    int count = 300000;
    struct Node *p_root = NULL;

    clock_t start_time = clock();

    for (int i = 0; i < count; i++)
        p_root = initialize_node(p_root, (rand() % 1000));

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Init:\t\t\t\t\t%.2fs\n", total_time);

    start_time = clock();

    inorder_traversal_node(p_root, 0);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sort:\t\t\t\t\t%.2fs\n", total_time);

    printf("\n");
    printf("Enter a number and search for it:\n");
    int number = 0;
    scanf("%d", &number);

    start_time = clock();

    int hit_counter = hit_or_miss(p_root, number, 0);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Search:\t\t\t\t\t%.2fs\n\n", total_time);

    printf("\n");

    if (hit_counter != 0)
        printf("%d -> Hit!\n", number);
    else
        printf("%d -> Miss\n", number);
}

void library() {
    printf("Library Implemented:\n");

    int count = 300000;
    struct Node *p_root = NULL;

    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL)
        return;

    clock_t start_time = clock();

    for (int i = 0; i < count; i++)
        p_root = initialize_node(p_root, (rand() % 1000));

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Init:\t\t\t\t\t%.2fs\n", total_time);

    int nmb = 0;

    start_time = clock();

    // Convert numbers from struct
    add_to_array(p_root, &numbers, &nmb);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Add:\t\t\t\t\t%.2fs\n", total_time);

    start_time = clock();

    qsort(numbers, count, sizeof(int), cmpfunc);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sort:\t\t\t\t\t%.2fs\n\n", total_time);

    printf("Enter a number and search for it:\n");
    int number = 0;
    scanf("%d", &number);

    start_time = clock();
    int *item = bsearch(&number, numbers, count, sizeof(int), cmpfunc);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Search:\t\t\t\t\t%.2fs\n\n", total_time);

    if(item != NULL) {
        printf("%d -> Hit!\n", *item);
    } else {
        printf("%d -> Miss\n", *item);
    }
}