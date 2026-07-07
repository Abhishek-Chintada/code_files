#include <cstdio>
#include <functional>

std::function<void()> func;

int main(void) {
    try {
        func();
    } catch(std::bad_function_call& e) {
        printf("%s\n", e.what());
    }
    return 0;
}