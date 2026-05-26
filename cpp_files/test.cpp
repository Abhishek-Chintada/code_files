#include <cstdio>
#include <cstring>

int main(void) {
    const char *a = new char[10];
    a = "lavada";
    printf("%s\n", a);
    char *b = new char[10];
    std::strncpy(b, a, size_t(10));
    printf("%s\n", b);
    return 0;
}