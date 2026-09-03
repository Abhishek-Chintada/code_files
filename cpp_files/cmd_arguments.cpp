#include <cstdio>
#include <cstdint>
// sanka naaki pondi bro!
int main(int argc, char** argv) {
    printf("No. of arguments : %d\n", argc);
    for(size_t i{}; i < argc; i++) {
        printf("Argument No : %zd -> %s\n", i, argv[i]);
    }
    printf("<End>\n");
}