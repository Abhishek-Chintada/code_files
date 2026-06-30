#include <cstdio>
#include <stdexcept>

struct FibonacciIterator {
    bool operator!=(int x) const {
        return x >= current;
    }
    FibonacciIterator& operator++() {
        const auto tmp = current;
        current += last;
        last = tmp;
        return *this;
    }
    int operator*() const {
        return current;
    }
    private:
        int current{1};
        int last{1};
};

struct FibonacciRange {
    explicit FibonacciRange(int max) : max{max} {};
    FibonacciIterator begin() const {
        return FibonacciIterator{};
    }
    int end() const {
        return max;
    }
    private:
        const int max;
 };

 int main(void) {
    for(const auto i : FibonacciRange{100}) {
        printf("%d ", i);
    }
    printf("\n");
    FibonacciRange range{100};
    auto end = range.end();
    for(auto x = range.begin(); x != end; ++x) {
        printf("%d ", *x);
    }
    printf("\n");
    return 0;
 }