#include <cstdio>

template<typename T>
T square(T var) {
    return var*var;
}
 
int main(void) {
    char ch = 'A';
    auto result = square(ch);
    printf("This is the result : %c\n", result);
    return 0;
}