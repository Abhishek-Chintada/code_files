#include <cstdio>
#include <cstdint>
#include <limits>

int main(void) {
    // Overloading type conversions !
    uint8_t x = 0b111111111;
    int8_t y = 0b111111111;
    printf("x(uint8_t) : %u\ny(int8_t) : %d\n", x, y);
    // Floating point conversions !
    double p = std::numeric_limits<float>::max();
    long double q = std::numeric_limits<double>::max();
    float undef = std::numeric_limits<long double>::max();
    printf("p(float -> double) : %g\nq(double -> long double) : %lg\nundef(long double -> float) : %f\n", p, q, undef);
    return 0;
}