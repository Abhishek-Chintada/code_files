#include <cstdio>
#include <stdexcept>

// This is the implementation of the narrow_cast template.

template <typename To, typename From>
To narrow_cast(From value) {
    auto converted = static_cast<To>(value);
    auto backwards = static_cast<From>(converted);
    if(value != backwards) {
        throw std::runtime_error("Exception : Value is Narrowed");
    }
    return converted;
}

int main(void) {
    float a = 46246.1234;
    int b = 0;
    try {
        b = narrow_cast<int, float>(a);
    } catch (std::exception& e) {
        printf("%s\n", e.what());
    }
    printf("%d\n", b);
    return 0;
}