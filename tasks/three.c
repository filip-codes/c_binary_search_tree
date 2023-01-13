#include <stdio.h>
#include <stdlib.h>


#include "all.h"
#include "../helpers/all.h"

void execute_task_three() {
    /*int *numbers;

    const int array_size = 2000;

    // total_time is needed to print measured time in seconds
    double total_time, min_time, max_time, avg_time;

    for (int i = 0; i < 20; i++) {
        // Allocate memory for X numbers
        numbers = malloc(array_size * sizeof(int));
        // Initialize numbers - numbers are generated between -32.768 - +32767
        initialize_numbers(array_size, numbers);

        // Array is randomized - sort it ascending
        printf("sort on randomized array of size %d:\n", array_size);
        total_time = sort(BUBBLESORT, RANDOM, numbers, array_size);
        avg_time = (avg_time + total_time) / 2;
        if (i == 0)
            min_time = total_time;
        if (total_time < min_time)
            min_time = total_time;
        if (total_time > max_time)
            max_time = total_time;

        // Array is already sorted in ascending order - sort it ascending
        printf("sort on ascending array of size %d:\n", array_size);
        total_time = sort(BUBBLESORT, ASCENDING, numbers, array_size);
        avg_time = (avg_time + total_time) / 2;
        if (total_time < min_time)
            min_time = total_time;
        if (total_time > max_time)
            max_time = total_time;

        // Array is sorted in ascending order - sort it descending
        printf("sort on descending array of size %d:\n", array_size);
        total_time = sort(BUBBLESORT, DESCENDING, numbers, array_size);
        avg_time = (avg_time + total_time) / 2;
        if (total_time < min_time)
            min_time = total_time;
        if (total_time > max_time)
            max_time = total_time;

        // Set numbers to NULL to clean up numbers
        numbers = NULL;
    }
    printf("\n");
    printf("Minimal runtime: %fs\n", min_time);
    printf("Maximal runtime: %fs\n", max_time);
    printf("Average runtime: %fs\n", avg_time);
    free(numbers);*/
}