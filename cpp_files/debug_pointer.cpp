#include <cstdio>

int main(void)
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    printf("Address of lower: %p (size: %zu)\n", (void*)lower, sizeof(lower));
    printf("Address of upper: %p (size: %zu)\n", (void*)upper, sizeof(upper));

    *(lower+3) = 'd';
    *(upper+3) = 'D';
    
    printf("Before 'silly' write:\n");
    printf("lower : %s\n", lower);
    printf("upper : %s\n", upper);

    // This is the "silly" part. lower has size 6 (indices 0-5).
    // lower+7 is index 7.
    *(lower+7) = 'x';

    printf("After 'silly' write (lower+7 = 'x'):\n");
    printf("lower : %s\n", lower);
    printf("upper : %s\n", upper);
    
    // Let's check if we hit 'upper' or something else
    for(int i=0; i<12; i++) {
        printf("lower[%d] at %p: %c (%d)\n", i, (void*)(lower+i), *(lower+i), *(lower+i));
    }

    return 0;
}
