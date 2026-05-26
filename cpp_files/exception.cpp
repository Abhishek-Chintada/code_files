#include <cstdio>
#include <stdexcept>
struct Groucho {
    void forget(int x) {
        if (x == 23) {
            throw std::runtime_error{"I'd be glad to make an exception."};
        }
        printf("forgot %d\n", x);
    }
};
int main(void) {
    Groucho groucho;
    try {
        for(int i = 0; i < 25; i++) {
            groucho.forget(i);
        }
    } catch (const std::runtime_error& e) {
        printf("exception caught with the message : %s\n", e.what());
    }
    try {
    throw std::logic_error{"Just a test throw of exception."};
    } catch (std::exception& error) {
        printf("excpetion is caught : %s\n", error.what());
    }
        printf("The program is executed successfully.\n");

    // special exceptional handler.
    try {
        throw 'z'; // not advisable to do.
    } catch (...) {
        printf("Here, any exception can be handled this way but it is not advisable to do.\n");
        printf("This will give rise to a major cyber security issue and bug bounty possibly.!\n");
    }
    return 0;
}