#include <iostream>

int main(void) {
    const size_t size{10};
    double *p_salaries {new double[size]};
    int *p_students{new(std::nothrow) int[size]{}};
    double *p_scores {new(std::nothrow) double[size]{1, 2, 3, 4, 5}};
    return 0;
}