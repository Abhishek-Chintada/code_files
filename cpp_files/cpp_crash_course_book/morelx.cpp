#include <cstdio>
#include <cstdint>
#include <functional>

struct countIf {
    countIf(const char x) : to_check{ x } {
        printf("The character to check : %c\n", to_check);
    }
    size_t operator()(const char* str) const {
        size_t result{}, index{};
        while(str[index]) {
            if(str[index] == to_check) result++;
            index++;
        }
        return result;
    }
    private:
        char to_check;
};

size_t count_spaces(const char *str) {
    size_t index{}, result{};
    while(str[index]) {
        if(str[index] == ' ') result++;
        index++;
    }
    return result;
}

std::function<size_t(const char*)>funcs[] {
    count_spaces,
    countIf{'e'},
    [](const char* str)->size_t {
        size_t index{};
        while(str[index]) index++;
        return index;
    }
};
auto text = "lorem ipsum girgneqiebgibqwibiwbgoeb";
int main(void) {
    size_t index{};
    for(const auto& func : funcs) {
        printf("func #%zd : %zd\n", index++, func(text));
    }
    return 0;
}