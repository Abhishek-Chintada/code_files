#include <iostream>

int main(void) {
    int input {};
    std::cin >> input;
    if(input % 2 == 0 && input != 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}