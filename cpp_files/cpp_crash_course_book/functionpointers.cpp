#include <cstdio>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

int main(void) {
    float a = 10;
    float b = 20;
    float(*operation)(float a, float b) = nullptr;
    printf("operation : 0x%p\n", operation);
    operation = &add;
    printf("&add = 0x%p\n", operation);
    printf("Sum of a and b : %lf\n", operation(a, b));
    operation = &subtract;
    printf("&subtract : 0x%p\n", operation);
    printf("Difference of a and b : %lf\n", operation(b, a));
    return 0;
}