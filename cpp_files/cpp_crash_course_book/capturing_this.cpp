#include <cstdio>
#include <cstdint>

struct LambdaFactory {
    LambdaFactory(char x) : to_count{x}, tally{} {printf("The shit is initialized.\n");};
    auto make_lambda() { // Custom Lambda Function bro.
        return [this](const char* str) {
            size_t result {}, index {}; // counts the number of to_count's
            while(str[index]) {
                if(str[index] == to_count) result++;
                index++;
            }
            tally += result;
            return result;
        };
    }
    size_t get_tally() {
        return tally;
    }
    private:
        const char to_count;
        size_t tally;
};

int main(void) {
    LambdaFactory fac{'a'};
    auto lambda = fac.make_lambda();
    auto a = lambda("na lavadalo pachayathi.");
    printf("a : %zu; tally : %zu\n", a, fac.get_tally());
    auto b = lambda("sanka naakipoindhi jeevitham.");
    printf("b : %zu; tally : %zu\n", b, fac.get_tally());
    printf("<Program End>\n");
    return 0;
}