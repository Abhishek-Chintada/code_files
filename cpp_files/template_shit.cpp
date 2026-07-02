#include <cstdio>

template<typename T>
constexpr int sum_func(T x) {
    return x;
}

template<typename T, typename... Args>
constexpr int sum_func(T x, Args... args) {
    return x + sum_func(args...);
}

int main(void) {
    printf("The answer is %d\n", sum_func(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
    return 0;
}