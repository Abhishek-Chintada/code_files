#include <cstdio>

// Implementation of the operator function.

struct CountIf {
    CountIf(char x) : x{ x } {};
    size_t operator()(const char *str) const {
        size_t index{}, result{};
        while(str[index]) {
            if(str[index] == x) result++;
            index++;
        }
        return result;
    }
    private:
        char x;
};

int main(void) {
    CountIf a_counter{ 'a' };
    auto name_a = a_counter("Abhishek Chintada");
    printf("Name_a : %zd\n", name_a);
    auto name_c = CountIf{ 'c' }("Abhishek Chintada");
    printf("Name_c : %zd\n", name_c);
    printf("The program ran successfully.\n");
    return 0;
}