#include "blaze_essentials.hpp"
// forward elimination for creating an upper triangular matrix. (Inspired by LU) <pivoting included>
template<typename T, typename Matrix, typename Vector>
void forward_elimination_core(Matrix &A, Vector &b, size_t n) {
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
        // swap of A
        blaze::DynamicVector<T, blaze::rowVector> temp_a(blaze::row(A, index));
        blaze::row(A, index) = blaze::row(A, i);
        blaze::row(A, i) = temp_a;
        // swap of b
        T temp_b = b[index];
        b[index] = b[i];
        b[i] = temp_b;   
    }
}