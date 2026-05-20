#include <stdio.h>

int main(void) {
    static int a = 10;
    int* p = &a;
    printf("The pointer is %p and the value is %d\n",p, *p);
    return 0;
}