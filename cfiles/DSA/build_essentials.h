#pragma once
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

void print_arr(int *arr, size_t size) {
    printf("[ ");
    for(size_t i = 0; i < size; i++) {
        if(i != size-1) printf("%d, ", arr[i]);
        else printf("%d ]\n", arr[i]);
    }
}