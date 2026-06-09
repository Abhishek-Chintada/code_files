#include <cstdio>

short converter(void* point) {
    auto shortshit = static_cast<short*>(point);
    (*shortshit) = *(shortshit) + 15;
    return *shortshit;
}

int main(void) {
    short a = 23;
    void* nu = &a;
    short result = converter(nu);
    printf("The result of the converter is : %d\n", result);
    return 0;
}