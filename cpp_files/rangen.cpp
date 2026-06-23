#include <cstdio>
#include <random>

void print_arr(int* arr, size_t size) {
    for(size_t i{}; i < size; i++) {
        for(size_t j{}; j < size; j++) {
            printf("%d ", arr[i*size + j]);
        }
        printf("\n");
    }
}

int main(void) {
    std::random_device rd; // Obtain a seed from hardware.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>distribution(1, 100);
    int* arr1 = (int *)malloc(3*3*sizeof(int)); // dynamically allocating an array.
    for(size_t i{}; i < 3; i++) {
        for(size_t j{}; j < 3; j++) {
            arr1[i*3 + j] = distribution(gen);
        }
    }
    print_arr(arr1, static_cast<size_t>(3));
    return 0;
}