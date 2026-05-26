#include <cstdio>

int add_one(int x) {
    x++;
    return x;
}

int main(void) {
    int x = 10;
    printf("This is the value retruned by the function : %d\n", add_one(x));
    printf("This is the value stored in the x variable : %d\n", x);
    return 0;
}
