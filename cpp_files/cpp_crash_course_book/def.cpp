#include <cstdio>

struct Highlander {
    int *x = new int;
    Highlander(int new_int) {
        *x = new_int;
        printf("The value of x is %d and the address of x is %p\n", x, x);
    }
    Highlander(const Highlander& other) = delete;
    Highlander& operator=(const Highlander& other) = delete;
    ~Highlander() {
        printf("The struct variable is destroyed....\n");
    }
};

int main(void) {
    Highlander a{23};
    Highlander b{a};
    printf("The value of x in b is %d and the address of x in b is %p\n", *b.x, b.x);
    return 0;
}