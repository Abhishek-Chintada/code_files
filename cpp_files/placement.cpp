#include <cstdio>
#include <new>
#include <cstddef>
#include <stdexcept>

struct Point {
    Point() : x{}, y{}, z{} {
        printf("The point at %p has been constructed.\n", this);
    }
    ~Point() {
        printf("The point at %p has been destructed.\n", this);
    }
    private:
        double x, y, z;
};

int main(void) {
    return 0;
}