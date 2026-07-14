#include <cstdio>
#include <algorithm>
#include <iterator>

constexpr char pos_A{65}, pos_Z{90}, pos_a{97}, pos_z{122};
constexpr bool is_capital(char x) {
    if(x >= pos_A && x <= pos_Z) return true;
    return false;
}
constexpr bool is_small(char x) {
    if(x >= pos_a && x <= pos_z) return true;
    return false;
}
struct Histogram {
    void ingest(const char* str);
    void print() const;
    private:
        size_t count[26] {};
};

void Histogram::ingest(const char* str) {
    size_t index{};
    while(const auto character = str[index]) {
        if(is_capital(character)) count[character - pos_A]++;
        else if(is_small(character)) count[character - pos_a]++;
        index++;
    }
}

void Histogram::print() const {
    printf("-   ");
    for(size_t i{}; i < 26; i++) {
        printf("%c/%c | ", char(i+65), char(i+97));
    }
    printf("\n");
    const size_t* ptr_max = std::max_element(std::begin(count), std::end(count));
    size_t temp[26] {};
    std::copy(count, count+26, temp);
    for(size_t i{}; i < *ptr_max; i++) {
        if(i < 10) {
            printf("%zd   ", i);
        } else if(i >= 10 && i < 100) {
            printf("%zd  ", i);
        } else if(i >= 100 && i < 1000) {
            printf("%zd ", i);
        }
        for(size_t j{}; j < 26; j++) {
            if(temp[j] != 0) {
                printf(" *  | ");
                temp[j]--;
            } else if(temp[j] == 0) {
                printf("    | ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    Histogram hist;
    const char* str = "and guess what the author just printed that histo horizontally, which is not much aura farming, but printing the histo verically does farm the aura as it is....!";
    hist.ingest(str);
    hist.print();
    return 0;
}