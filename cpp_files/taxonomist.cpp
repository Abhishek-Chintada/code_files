#include <cstdio>

struct Taxonomist
{
    Taxonomist()
    {
        printf("(no arigument was given.)\n");
    }
    Taxonomist(char x)
    {
        printf("Char : %c\n", x);
    }
    Taxonomist(int x)
    {
        printf("Int : %d\n", x);
    }
    Taxonomist(float x)
    {
        printf("Float : %f\n", x);
    }
};

int main(void)
{
    Taxonomist tax;
    Taxonomist tax1{'x'};
    Taxonomist tax2{12};
    Taxonomist tax3{1.2f};
    return 0;
}