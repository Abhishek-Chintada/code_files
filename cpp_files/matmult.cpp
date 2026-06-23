#include <cstdio>
#include <chrono>
#include <random>

void print_arr(int* arr, size_t size) {
    printf("[");
    for(size_t i{}; i < size; i++) {
        for(size_t j{}; j < size; j++) {
            printf("%d ,", arr[i*size + j]);
        }
        if(i != size-1) {
            printf("\n");
        }
    }
    printf("]\n");
}

void MatrixMultiplication(int* arr1, int* arr2, int* pro, int size) {
    for(size_t i{}; i < size; i++) {
        for(size_t j{}; j < size; j++) {
            int sum = 0;
            for(size_t k{}; k < size; k++) {
                int a = arr1[i*size + k];
                int b = arr2[k*size + j];
                sum = sum+(a*b);
            }
            pro[i*size + j] = sum;
        }
    }
}

int main(void) {
    auto start_time = std::chrono::high_resolution_clock::now();
    std::random_device rd; // Obtain a seed from hardware.
    std::mt19937 gen(rd());
    size_t size = 3; // size of the matrix
    std::uniform_int_distribution<int>random(1, 100);
    int* arr1 = (int *)malloc(size*size*sizeof(int)); // dynamically allocating an array.
    int* arr2 = (int *)malloc(size*size*sizeof(int));
    int* product = (int *)malloc(size*size*sizeof(int));
    for(size_t i{}; i < size; i++) {
        for(size_t j{}; j < size; j++) {
            arr1[i*size + j] = random(gen);
            arr2[i*size + j] = random(gen);
        }
    }
    print_arr(arr1, size);
    print_arr(arr2, size);
    // Carry out the multiplication.
    MatrixMultiplication(arr1, arr2, product, size);
    print_arr(product, size); // Printing the product here. 
    free(arr1);
    free(arr2);
    return 0;
}