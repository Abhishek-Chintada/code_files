#include <iostream>
#include <cstdint>

__attribute__((noinline))
uint64_t perfkiller(uint64_t x) {
    for (size_t i = 0; i < 400000000; i++) {
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
    }
    return x;
}

__attribute__((noinline))
uint64_t perfnonaffect(uint64_t x) {
    for (size_t i = 0; i < 100000000; i++) {
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
    }
    return x;
}

int main() {
    uint64_t a = 88172645463325252ULL;
    a = perfkiller(a);
    std::cout << a << "\n";
    a = perfnonaffect(a);
    std::cout << a << "\n";
}
