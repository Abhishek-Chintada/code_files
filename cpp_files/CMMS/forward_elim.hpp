#include "blaze_essentials.hpp"
// forward elimination for creating an upper triangular matrix. (Inspired by LU)
template<typename T, typename Matrix, typename Vector>
void forward_elimination_core(Matrix *A, Vector *b, size_t n) {
    blaze::DynamicVector<double, blaze::columnVector> result (n);
    for(size_t i{}; i < n; i++) {
        T max = A(i, i);
        size_t index = i;
        for(size_t j{i}; j < n; j++) {
            if(A(j, i) > max) {
                max = A(j, i);
                index = j;
            }
        }
        blaze::DynamicVector<T, blaze::rowVector> temp(blaze::row(A, j));
        blaze::row(A, j) = blaze::row(A, i);
        blaze::row(A, i) = temp;
}