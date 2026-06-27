#include <cstdio>
#include <stdexcept>
#include <limits>

template<typename To, typename From>
struct NarrowCast {
    To cast(From var) const {
        const To revar = static_cast<To>(var);
        const From checkvar = static_cast<From>(revar);
        if(checkvar == var) {
            printf("The cast is valid.\n");
            return revar; 
        } else {
            throw std::runtime_error("Warning : Narrowing is done.\n");
        }
    }
};

template<typename From>
using short_caster = NarrowCast<short, From>;


int main(void) {
    const int a = std::numeric_limits<int>::max();
    printf("This is the value of the integer : %g\n", double(a));
    short x{};
    try {
        short_caster<int> caster;
        x = caster.cast(a);
    } catch(std::exception& err) {
        printf("%s\n", err.what());
    }
    printf("This is the value of the short variable : %d\n", x);
    printf("The program ran successfully.\n");
    return 0;
}