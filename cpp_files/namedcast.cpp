#include <cstdio>

void name_cast(const int& original) {
    auto& reference = const_cast<int&>(original);
    reference = 23;
    printf("This is the pointer to original : %p\n", &original);
    printf("This is the pointer to the test : %p\n", &reference);
}

int main(void) {
    const int& a = 20;  // This is no joke but a crafted compiler cheater!
    printf("The value of the variable a before name_cast : %d\n", a);
    name_cast(a);
    printf("The value of a is %d\n", a);
    return 0;
}