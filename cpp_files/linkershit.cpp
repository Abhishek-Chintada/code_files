#include <iostream>

void Log(const char* message) {
    std::cout << message << std::endl;
}

int multiply(int a, int b) {
    Log("multiplying a and b,i.e the entered numbers");
    return a*b;
}
