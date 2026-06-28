#include <cstdio>
#include <stdexcept>

template<typename To, typename From>
struct Narrowing {
    static To cast(From var) {
        To reVar = static_cast<To>(var);
        From checkVar = static_cast<From>(reVar);
        if(var == checkVar) {
            printf("<Conversion valid>");
            return reVar;
        } else {
            throw std::runtime_error("<Exception : Narrowing done>");
        }
    }
};

template<typename From>
using intCaster = Narrowing<int, From>;

int main(void) {
    double a = 1.0;
    int x = 0;
    try {
        x = intCaster<double>::cast(a);
    } catch(std::exception& e) {
        printf("%s\n", e.what());
    }
    printf("This is the integer : %d\n", x);
    return 0;
}