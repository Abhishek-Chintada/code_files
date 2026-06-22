#include <cstdio>
#include <stdexcept>

void trainwreck(const char* read_only) {
    char* woosh = const_cast<char*>(read_only);
    *woosh = 'b';
    printf("This is the woosh string : %c\n", *woosh);
}

int main(void) {
    char str[] = "lavada";
    const char* ptr = str;
    printf("This is the string before func : %s\n", str);
    trainwreck(ptr);
    printf("This is the string after func : %s\n", str);
    return 0;
}