#pragma once

#include "array.h"

cArray insertion_sort(cArray *input) {
    if(input->size == 0) {
        printf("the input array is empty!\n");
        return *input;
    }
    cArray output = {(int *)malloc(input->size*sizeof(int)), input->size};
    // check for allocation difficulties
    if(output.core == NULL) {
        printf("unable to allocate memory!\n");
        return (cArray){NULL, 0};
    }
    // copy the mem from input to output
    memcpy(output.core, input->core, input->size*sizeof(int));

    // implement the insertion sort
    for(int i = 1; i < output.size; i++) {
        int key = output.core[i];
        for(int j = i-1; j >= 0; j--) {
            if(output.core[j] > key) {
                
            }
        }
    }
}