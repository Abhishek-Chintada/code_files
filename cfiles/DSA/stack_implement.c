#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int* arr;
    size_t current_top; // note that the current top is uninit.
} stack;

void print_arr(int *arr, size_t size) {
    printf("[ ");
    for(size_t i = 0; i < size; i++) {
       printf("%d ", arr[i]); 
    }
    printf("]\n");
}

void push_stack(int x, stack *s) {
    s->arr[s->current_top] = x;
    printf("<console> arr[%d] is init to %d\n", s->current_top, x);
    s->current_top += 1;
}

int main(void) {
    size_t size = 0; // holds the size of the stack.
    printf("Enter the size of the arr that represents the stack. : \n");
    scanf("%d", &size);
    int *arr = (int*)malloc(sizeof(int)*size);
    srand(time(NULL));
    stack s = {arr, 0};
    for(size_t i = 0; i < size; i++) {
        s.arr[i] = rand()%100 + 1;
    }
    free(arr);
    return 0;
}