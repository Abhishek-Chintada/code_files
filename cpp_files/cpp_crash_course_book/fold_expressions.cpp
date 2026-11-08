#include <cstdio>
// extension to the variadic templates.
template<typename... Args>
constexpr int sum(Args... args) {
   return (... + args); 
}

int main(void) {
    printf("This is the result : %d\n", sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
    return 0;
}