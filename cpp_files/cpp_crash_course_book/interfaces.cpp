#include <cstdio>
#include <stdexcept>
// an interface is just an abstract base class containing only pure virtual functions.
// fkn shit.
struct BaseClass{};
struct DerivedClass : BaseClass {};
bool are_belong_to_us(BaseClass& base) {
    return true;
}

int main(void) {
    bool result;
    DerivedClass derived;
    result = are_belong_to_us(derived);
    if (result) {
        printf("Boom\n");
    } else {
        printf("Shit\n");
    }
    return 0;
}