#include <cstdio>

template<typename Fn, typename T>
void transform(Fn f, const T* in, T* out, size_t length) {
    for(size_t i{}; i < length; i++) {
        out[i] = f(in[i]);
    }
}

int main(void) {
    constexpr size_t len = 3;
    int base_int[]{1, 2, 3}, res_int[len];
    float base_float[]{1, 2, 3}, res_float[len];
    auto func = [](auto x){return 10*x+5;};
    transform(func, base_int, res_int, len);
    transform(func, base_float, res_float, len);
    for(size_t i{}; i < len; i++) {
        printf("Element %zu : %d %f\n", i, res_int[i], res_float[i]);
    }
    return 0;
}