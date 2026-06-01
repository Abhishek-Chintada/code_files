#include <cstdio>
#include <utility>
void ref_type(int &x) {
    printf("lvalue reference: %d\n", x);   // lvalue -> variable with a name;
}

void ref_type(int &&x) {
    printf("rvalue reference: %d\n", x);   // rvalue -> anything other than an lvalue;
} 


int main(void) {
    int a = 12;
    ref_type(std::move(a));
    ref_type(2);
    ref_type(3);
    return 0;
}