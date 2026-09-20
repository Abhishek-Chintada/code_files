#include "build_essentials.h"

void insertion_sort(int* arr, size_t size) {
    if(size == 0 || sizeof(arr) == 0) {
        printf("<console> the list is empty.\n");
        return;
    }
    for(size_t i = 0; i < size; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}