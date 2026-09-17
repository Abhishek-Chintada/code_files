#include <iostream>

int main(void) {
    try {
        int *lots_of_ints {new int[100000000000000000]};
        for(size_t i{}; i < 10000000000; i++) {
            int *labbe {new int[1000000000]};
        }
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}