#include <cstdio>
// testing the backup again and again
int main(void)
{
    int a = 10;
    int &b = a;
    printf("The value : a->%d\nThe reference value : %d\n", a, b);

    int c = 15;
    b = c;
    printf("The value : a->%d, b->%d\nThe reference value : %d\n", a, c, b);
    return 0;
}
