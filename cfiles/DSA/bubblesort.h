#pragma once
#include "build_essentials.h"
void bubble_sort(int *arr, size_t size) {
    if(size == 0) {
        printf("<console> the list is empty.\n");
        return;
    }
    for(size_t i = 0; i < size-1; i++) {
        for(size_t j = 0; j < size-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }    
    }
}