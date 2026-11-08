#include <cstdio>

template<typename Fn>
void devoidOfBrain(Fn f, int *in, int *out, size_t length) {
    for(size_t i{}; i < length; i++) {
        out[i] = f(in[i]);
    }
}

int main(void) {
    const size_t len = 3;
    int base[]{1, 2, 3}, a[len], b[len], c[len];
    devoidOfBrain([](int x){return x*x;}, base, a, len);
    devoidOfBrain([](int x){return x*2;}, base, b, len);
    devoidOfBrain([](int x){return x*3;}, base, c, len);
    for(size_t i{}; i < len; i++) {
        printf("%zu : %d %d %d\n", i, a[i], b[i], c[i]);
    }
    auto increment = [](auto x, int y = 1){return x+y;};
    printf("%d\n", increment(10));
    printf("%d\n", increment(10, 5));
    return 0;
}