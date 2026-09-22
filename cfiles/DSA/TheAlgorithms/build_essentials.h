#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "bubblesort.h"
#include "array.h"

void print_arr(cArray *arr) {
    printf("[ ");
    for(int i = 0; i < arr->size; i++) {
        if(i != arr->size - 1) printf("%d ", arr->core[i]);
        else printf("%d ]\n", arr->core[i]);
    }
}

int ran_gen(void) {
    int min = 1;
    int max = 500;
    return min + rand()%(max - min + 1);
}