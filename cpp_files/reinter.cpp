#include <cstdio>

// Lets check.

int main(void) {
    char ch = 'A';
    char* ch_ptr = &ch;
    auto converted = reinterpret_cast<unsigned int*>(ch_ptr);
    printf("The value of the char in integers is : %u\n", *converted);
    return 0;
}