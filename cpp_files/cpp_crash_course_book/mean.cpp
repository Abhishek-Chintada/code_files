#include <cstdio>
#include <stdexcept>
#include <cstddef>

template<typename T>
T mean(T* values, size_t len) {
    T result{};
    if(len == 0) {
        throw std::logic_error("The length of the aray cannot be zero.");
    }
    for(size_t i{}; i < len; i++) {
        result += values[i];
    }
    return result/len;
}

int main(void) {
    double arr[] {1, 2, 3, 4, 5};
    float arr0[] {1, 2, 3, 4 ,5};
    auto res = mean<double>(arr, size_t(sizeof(arr)/sizeof(arr[0])));
    auto res0 = mean(arr0, size_t(sizeof(arr0)/sizeof(arr0[0])));  // This is the template type deduction in built to cpp.
    printf("%lf\n", res);
    printf("%f\n", res0);
    return 0;
}