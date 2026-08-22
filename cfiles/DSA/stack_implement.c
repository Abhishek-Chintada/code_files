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
    s->arr[s->current_top+1] = x;
    printf("<console> arr[%d] is init to %d\n", s->current_top, x);
    s->current_top += 1;
}

void pop_stack(stack *s) {
    int tmp = s->arr[s->current_top];
    s->arr[s->current_top] = 0;
    s->current_top -= 1;
    printf("<console> %d is popped from the stack. Current top element is %d\n", tmp, s->arr[s->current_top]);
}

int count_stack(stack s) {
    return s.current_top + 1;
}

int main(void) {
    size_t size = 0; // holds the size of the stack.
    printf("Enter the size of the arr that represents the stack. : \n");
    scanf("%d", &size);
    int *arr = (int*)malloc(sizeof(int)*size);
    srand(time(NULL));
    stack s = {arr, -1};
    for(size_t i = 0; i < size; i++) s.arr[i] = 0;
    printf("arr is init.\n");
    print_arr(s.arr, size);
    for(size_t i = 0; i < size; i++) {
        push_stack(rand()%100 + 1, &s);
    }
    printf("This is the stack pushed through.\n");
    size_t count = count_stack(s);
    printf("This is the count of the stack - %d\n", count);
    print_arr(s.arr, size);
    for(size_t i = 0; i < size; i++) {
        pop_stack(&s);
        print_arr(s.arr, size);
    }
    free(arr);
    return 0;
}