#include "build_essentials.h"
#include "bubblesort.h"
#include "insertionsort.h"

#define SIZE 20

int main(void) {
    srand(time(NULL));
    int arr[SIZE] = {};
    for(size_t i = 0; i < SIZE; i++) {
        arr[i] = 1 + rand()%(50);
    }
    print_arr(arr, SIZE);
    // bubble_sort(arr, SIZE);
    insertion_sort(arr, SIZE);
    print_arr(arr, SIZE);
    return 0;
}