#pragma once

#include "build_essentials.h"

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
    return output;
}
