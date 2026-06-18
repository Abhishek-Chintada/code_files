#include <cstdio>

void print_addr(void* p) {
    printf("%p\n", p);
}

int main(void) {
    int x{10};
    printf("This is the address of x in main function : %p\n", &x);
    print_addr(&x);
    print_addr(nullptr);
    return 0;
}