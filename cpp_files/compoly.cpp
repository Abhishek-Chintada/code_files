#include <cstdio>

template<typename T1, typename T2>
char printing(T1 a, T2 b) {
   return b+a;
}

int main(void) {
    char ch =  printing(4, 'a');
    printf("%c\n", ch);
    return 0;
}