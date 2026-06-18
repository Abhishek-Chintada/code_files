#include <cstdio>
#include <stdexcept>
#include <limits>

struct checkedInteger {
    checkedInteger(unsigned int value) : val{value} {
        printf("The value has been assigned successfully : %u\n", value);
    }
    checkedInteger operator+(unsigned int other) const {
        checkedInteger result{val + other};
        if(result.val < val) {
            throw std::runtime_error("Overflow!");
        }
        return result;
    }
    private:
        const unsigned int val;
};

int main(void) {
    checkedInteger a{100};
    auto b = a + 100;
    try {
        auto c = a + std::numeric_limits<unsigned int>::max();
    } catch(std::exception& e) {
        printf("Exception : %s\n", e.what());
    }
    return 0;
}