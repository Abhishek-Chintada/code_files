#include <cstdio>
#include <cstdint>

struct LambdaFactory {
    LambdaFactory(char x) : to_count{x}, tally{} {printf("The shit is initialized.\n");};
    
    private:
        const char to_count;
        size_t tally;
};

int main(void) {
    return 0;
}