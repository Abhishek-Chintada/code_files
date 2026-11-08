#include <iostream>

auto two_sum(int a,int b) -> int {
    return a + b;
}

int main(void) {
    int x = 10, y = 50;
    int result = two_sum(x, y);
    std::cout << "This is the sum of the variables : " << result << "\n";
    return 0;
}
