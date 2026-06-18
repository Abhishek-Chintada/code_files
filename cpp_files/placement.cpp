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
    const auto point_size {sizeof(Point)};
    std::byte data[3*point_size];
    printf("Data starts at %p\n", data);
    auto point1 = new(&data[0*point_size]) Point;
    auto point2 = new(&data[1*point_size]) Point;
    auto point3 = new(&data[2*point_size]) Point;
    point1->~Point();
    point2->~Point();
    point3->~Point();
    printf("All the points have been destructed successfully.\n");
    return 0;
}