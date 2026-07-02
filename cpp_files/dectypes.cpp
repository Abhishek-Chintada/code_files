#include <cstdio>
#include <type_traits>
#include <utility>

template<typename X, typename Y>
auto hehe(X x, Y y) -> decltype(x + y) {
    return x+y;
}

int main(void) {
    auto res = hehe(double(12), int(2));
    return 0;
}