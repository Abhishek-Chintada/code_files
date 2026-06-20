#include <cstdio>
#include <limits>
#include <cstdint>

void print_addr(void* p) {
    printf("%p\n", p);
}

int main(void) {
    int x{10};
    printf("This is the address of x in main function : %p\n", &x);
    print_addr(&x);
    print_addr(nullptr);
    // Difference between narrowing and non-narrowing
    // 1 -> Non-Narrowing safe conversion.
    int32_t a = std::numeric_limits<int32_t>::max();
    int64_t b{ a };
    if(b != a) {
        printf("Narrowed Conversion.\n");
    } else {
        printf("The conversion did not incur any loss in information.\n");
    }
    // 2 -> Narrowed Conversion.
    int64_t a_n = std::numeric_limits<int64_t>::max();
    int32_t b_n (a); // if curly braced initialisation is used, the compiler would have thrown an error.
    printf("%lld\n%d\n", a_n, b_n);
    if( b_n != a_n) {
        printf("Narrowed Conversion.\n");
    } else {
        printf("The conversion did not incur any loss in information.\n");
    }
    return 0;
}