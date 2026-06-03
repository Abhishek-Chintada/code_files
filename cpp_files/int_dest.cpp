#include <cstdio>

struct Base {
    virtual ~Base() = default; // without this, the destructor does not get called for either the base or the derived.
};
struct Derived : Base {
    Derived() {
        printf("Derived class is constructed.\n");
    }
    ~Derived() {
        printf("Derived class is destructed.\n");
    }
};

int main(void) {
    printf("Derived class is to be invoked now.\n");
    Base* base{ new Derived{}};
    printf("Derived class is to be deleted now.\n");
    delete base;
    return 0;
}