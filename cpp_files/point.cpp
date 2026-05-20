#include <iostream>
# define LOG(x) std::cout << x << std::endl

int main() {
    LOG("Welcome to the pointer hell!");
    int a = 8;
    void* ptr = &a;
    printf("The value of the pointer is %p\n", ptr);
    std::cin.get();
    return 0;
}