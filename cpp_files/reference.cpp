#include <cstdio>

void add(int& target) {
    target = target + 5;
}

int main(void) {
    int a = 10;
    printf("This is the value before the function : %d\n", a);
    add(a);
    printf("This is the value after function : %d\n", a);
    return 0;
}