#include <cstdio>
int sum(int a, int b) {
    return a+b;
}
int main() {
    typedef int(*fp)(int, int);
    fp f = sum;
    int s = f(8, 9);
    printf("the sum of the numbers is %d\n", s);
    return 0;
}