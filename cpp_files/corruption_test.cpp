#include <cstdio>

int main(void)
{
    // Declaring them in a way that might make them adjacent
    char upper[] = "ABCDE"; // size 6
    char lower[] = "abcde"; // size 6

    printf("upper: %p, lower: %p\n", (void*)upper, (void*)lower);

    // If lower is at a lower address, lower+N might hit upper
    // On this system, lower was HIGHER than upper.
    // Let's try to find which one is which and then overflow.

    char *first = (upper < lower) ? upper : lower;
    char *second = (upper < lower) ? lower : upper;

    printf("First: %p, Second: %p, Diff: %ld\n", (void*)first, (void*)second, (long)(second - first));

    printf("Second before overflow: %s\n", second);
    
    // Overflow the first one to hit the second one?
    // We need to know the gap.
    long gap = (long)(second - first);
    printf("Writing to first + %ld\n", gap);
    first[gap] = 'X';

    printf("Second after overflow: %s\n", second);

    return 0;
}
