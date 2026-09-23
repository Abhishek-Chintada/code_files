#include "build_essentials.h"

#define SIZE 10

int main(void) {
    srand((unsigned int)time(0));
    cArray input = {(int *)malloc(SIZE*sizeof(int)), SIZE};
    cArray result;
    for(int i = 0; i < input.size; i++) {
        input.core[i] = ran_gen();
    }
    print_arr(&input);
    result = bubble_sort(&input);
    print_arr(&result);
    free(input.core);
    free(result.core);
    return 0;
}