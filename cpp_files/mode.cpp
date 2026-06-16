#include <cstdio>
#include <stdexcept>

int mode(const int* values, size_t length) {
    if(length == 0) {
        throw std::runtime_error("The length of the array cannot be zero.");
    }
    int modalNo {};
    int arr[length];
    for(size_t i{}; i < length; i++) {
        arr[i] = 0;
    }
    for(size_t i{}; i < length; i++) {
        for(size_t j{i}; j < length; j++) {
            if(values[i] == values[j]) {
                arr[i]++;
            }
        }
    }
    int max{arr[0]};
    for(size_t i{1}; i < length; i++) {
        if(arr[i] > max) {
            modalNo = values[i];
        }
    }
    return modalNo;
}

int main(void) {
    int arr[] {1, 2, 7, 4, 4, 9, 0, 2, 4, 3, 1, 7, 6, 6, 1, 10};
    auto result = mode(arr, size_t(sizeof(arr)/sizeof(arr[0])));
    printf("This is the mode of the data set : %d.\n", result);
    return 0;
}