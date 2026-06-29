#include <cstdio>
#include <stdexcept>

struct Fibonacci_iterator {
    bool operator!=(int x) const {
        return x >= current;
    }
    
    private:
        int current;
};