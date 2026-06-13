#include <cstdio>
#include <cstddef>
#include <stdexcept>
#include <type_traits>
#include <concepts>

template<typename T>
concept Averageable = std::is_default_constructible<T>::value && requires(T a, T b) {
    {a + b} -> std::same_as<T>;  // # 1
    {a/size_t(1)} -> std::same_as<T>;  // # 2
};

template<Averageable T>
T mean(const T* values, size_t length) {
    if(length == 0) {
        throw std::logic_error("Cannot divide by zero");
    }
    T result{}; // default_constructible is checked because of this.
    for(size_t i{}; i < length; i++) {
        result = result + values[i];  // 1 is checked for this.
    }
    return result/length; // 2 is checked for this.
}

template<typename T>
T mean_static(const T* values, size_t length) {
    static_assert(std::is_default_constructible<T>(),
    "Assert : Type must be default constructible.");
    static_assert(std::is_constructible<T, size_t>(),
    "Assert : Type must be constructible with size_t.");
    static_assert(std::is_copy_constructible<T>(),
    "Assert : Type must be copy constructible.");
    static_assert(std::is_arithmetic<T>(),
    "Assert : Type must be arithmetic compatible.");
    if(length == 0) {
        throw std::logic_error("The length cannot be zero.");
    }
    T result{};
    for(size_t i{}; i < length; i++) {
        result = result + values[i];
    }
    return result/length;
}

int main(void) {
    const double values[] {1, 2, 3, 4, 5};
    auto result = mean(values, size_t(sizeof(values)/sizeof(values[0])));
    printf("This is the result of the mean calculation : %lf\n", result);
    const unsigned long int val[] {1, 2, 3, 4, 5};
    auto res = mean(val, size_t(sizeof(val)/sizeof(val[0])));
    printf("This is the second result : %lu\n", res);
    const float val0[] {1, 2, 3, 4, 5};
    auto res0 = mean_static(val0, size_t(sizeof(val0)/sizeof(val0[0])));
    printf("This is the result of the mean cal 3 : %f\n", res0);
    return 0;
}
