#include <iostream>

enum class Color {red, green, blue};

int main(void) {
    Color c = Color{0};
    std::cout << static_cast<int>(c) << "\n";
    return 0;
}
