#include "vector.h"

Vector::Vector(int s) : elem{new double[s]}, sz{s} {};
auto Vector::operator[](int i) -> double {
    return elem[i];
}
auto Vector::size() -> int {
    return sz;
}
