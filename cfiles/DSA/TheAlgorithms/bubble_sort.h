#pragma once

#include "array.h"

cArray bubble_sort(cArray *input) {
    if(input->size == 0) {
        printf("The input array is empty!\n");
        return *input;
    }
    cArray output = {(int *)malloc(input->size*sizeof(int)), input->size};
    if(output.core == NULL) {
        printf("mem-allocation failed.\n");
        return (cArray){NULL, 0};
    }
    // block transfer - byte level for optimum performance
    memcpy(output.core, input->core, input->size*sizeof(int));

    // bubble sort algo implementation
    for(int k = 0; k < output.size-1; k++) {
        for(int i = 0; i < output.size-k-1; i++) {
            if(output.core[i] > output.core[i+1]) {
                int temp = output.core[i];
                output.core[i] = output.core[i+1];
                output.core[i+1] = temp;
            }
        }
    }

    return output;
}
