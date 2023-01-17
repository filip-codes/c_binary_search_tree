#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "all.h"
#include "../helpers/all.h"

void self_implemented(struct Node *p_root);
int *library(struct Node *p_root, int count);

void self_implemented_search(struct Node *p_root);
void library_search(int *numbers, int count);

int number_to_find = -1;

void execute_task_three() {
    int count = 300000;
    struct Node *p_root = NULL;

    clock_t start_time = clock();

    for (int i = 0; i < count; i++)
        p_root = initialize_node(p_root, (rand() % 1000));

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Init %d nodes:\t\t\t%.2fs\n\n", count, total_time);

    printf("Self Implemented:\n");
    self_implemented(p_root);

    printf("Library Implemented:\n");
    int *numbers = library(p_root, count);

    printf("Enter a number and search for it:\n");
    scanf("%d", &number_to_find);

    self_implemented_search(p_root);
    library_search(numbers, count);

    // free noch schreiben
}

void self_implemented(struct Node *p_root) {
    clock_t start_time = clock();

    inorder_traversal_node(p_root, 0);

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sort time:\t\t\t\t%.2fs\n", total_time);

    printf("\n");
}

int *library(struct Node *p_root, int count) {
    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL)
        return NULL;

    int nmb = 0;

    clock_t start_time = clock();

    // Convert numbers from struct
    add_to_array(p_root, &numbers, &nmb);

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Add to array:\t\t\t\t%.2fs\n", total_time);

    start_time = clock();

    qsort(numbers, count, sizeof(int), cmpfunc);

    end_time = clock();
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sort time:\t\t\t\t%.2fs\n\n", total_time);

    return numbers;
}

void self_implemented_search(struct Node *p_root) {
    clock_t start_time = clock();

    int hit_counter = hit_or_miss(p_root, number_to_find, 0);

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Search time:\t\t\t\t%.2fs\n", total_time);

    if (hit_counter != 0)
        printf("%d -> Hit!\n\n", number_to_find);
    else
        printf("%d -> Miss...\n\n", number_to_find);
}

void library_search(int *numbers, int count) {
    clock_t start_time = clock();
    int *item = bsearch(&number_to_find, numbers, count, sizeof(int), cmpfunc);

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Search time:\t\t\t\t%.2fs\n", total_time);

    if(item != NULL) {
        printf("%d -> Hit!\n\n", *item);
    } else {
        printf("%d -> Miss...\n\n", *item);
    }
}