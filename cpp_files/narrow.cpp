#include <cstdio>
#include <stdexcept>

template<typename To, typename From>
struct NarrowCaster {
    static To Caster(From var) {
        To reVar = static_cast<To>(var);
        From checkVar = static_cast<From>(reVar);
        if(var == checkVar) {
            printf("<conversion valid>\n");
            return reVar;
        } else {
            throw std::runtime_error("<Exception : Narrowing done>");
        }
    }
};

int main(void) {
    double a = 1.23;
    try {
        printf("This is the og value : %lf\n", a);
        auto x = NarrowCaster<int, double>::Caster(a);
        printf("This is the int var : %d\n", x);
    } catch(std::exception& err) {
        printf("%s\n", err.what());
    }
    return 0;
} 