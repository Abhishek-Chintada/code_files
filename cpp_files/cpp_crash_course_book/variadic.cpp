#include <cstdio>
#include <cstdarg>

int sum_var(size_t n, ...) {
    va_list args;
    va_start(args, n);
    int result{};
    while(n--) {
        auto val = va_arg(args, int);
        result += val;
    }
    va_end(args); // important
    return result;
}

int main(void) {
    auto res = sum_var(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("This is the result : %d\n", res);
    return 0;
}