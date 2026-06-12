#include <cstddef>
#include <cstdio>
#include <stdexcept>

template<typename T>
T mean(const T* values, size_t length) {
    double result = 0;
    for(size_t i=0;i<length;i++) {
        result += values[i];
    }
    return result/length;
}

int main(void) {
    const int arr[]{1, 2, 3, 4};
    int result = mean<int>(arr, size_t(sizeof(arr)));
    printf("This is the result of the mean : %d\n", result);
    return 0;
}