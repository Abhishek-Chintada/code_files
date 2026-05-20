#include <cstdio>

int main(void)
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    *(lower+3) = 'd';
    *(upper+3) = 'D';
    printf("lower : %s\nupper : %s.\n", lower, upper);
    char lower_d = *(lower+3);
    char upper_d = *(upper+3);
    printf("lower : %c\nupper : %c.\n", lower_d, upper_d);
    return 0;
}