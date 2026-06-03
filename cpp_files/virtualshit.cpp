#include <cstdio>
#include <stdexcept>

struct Baseclass { // Abstract class.
    virtual const char* message() const = 0;  // pure virtual method.
};

struct Derivedclass : Baseclass {
    const char* message() const override {
        return "Boom\n";
    }
};

int main(void) {
    // Baseclass base; // Cannot instantiate abstract class.
    Derivedclass derived;
    Baseclass& ref = derived;
    printf("Baseclass msg : %s\n", ref.message());   // Hare Rama Moment!!!
    printf("Derivedclass msg : %s\n", derived.message());
    return 0; // execution successful.
}