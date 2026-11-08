#include <cstdio>

int main(void) {
    const char to_count_small = 's';
    const char to_count_capital = 'S';
    size_t result{};
    auto s_counter = [to_count_small, to_count_capital, &result](const char* str) {
        size_t index{};
        while(str[index]) {
            if(str[index] == to_count_small || str[index] == to_count_capital) result++;
            index++;
        }
        return result;
    };
    const char* str = "Sally is a bloody dumb arse.";
    s_counter(str);
    printf("These are the number of s's in the str : %zu\n", result);
    return 0;
}