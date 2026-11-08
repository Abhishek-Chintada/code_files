#include <cstdio>
#include <cstdint>
#include <type_traits>

const char* as_str(bool x) {   // Convenience Function.
    if(x) {
        return "True";
    } else {
        return "False";
    }
}

int main(void) {
    printf("%s\n", as_str(std::is_integral<int>::value));
    printf("%s\n", as_str(std::is_integral<const int>::value));
    printf("%s\n", as_str(std::is_integral<char>::value));
    printf("%s\n", as_str(std::is_integral<uint64_t>::value));
    printf("%s\n", as_str(std::is_integral<int&>::value));
    printf("%s\n", as_str(std::is_integral<int*>::value));
    printf("%s\n", as_str(std::is_integral<float>::value));
    return 0;
}