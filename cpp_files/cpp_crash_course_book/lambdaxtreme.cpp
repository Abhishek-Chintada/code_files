#include <cstdio>
#include <functional>

void boss_func() {
    printf("Labbe!\n");
}

int main(void) {
    std::function<void()> baby_func {[]{printf("This is a lambda...\n");} };
    baby_func();
    baby_func = boss_func;
    baby_func();
    return 0;
}