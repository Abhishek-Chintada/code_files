#include "blaze_essentials.hpp"
// forward elimination for creating an upper triangular matrix. (Inspired by LU) <pivoting included>
template<typename Matrix, typename Vector>
struct PivotElimination {
    Matrix A;
    Vector b;
};
template<typename T, typename Matrix, typename Vector>
PivotElimination<Matrix, Vector> forward_elimination_core(Matrix &A_og, Vector &b_og, size_t n) {
    Matrix A = A_og;
    Vector b = b_og;
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

        // implementing the elimination
        for(size_t j{i+1}; j < n; j++) {
            T factor = A(j, i)/A(i, i);
            blaze::row(A, j) -= factor*blaze::row(A, i);
            for(auto it{A.begin(j)}; it < A.end(j); it++) {
                if(abs(*it) < 1e-12) {
                    *it = 0;
                }
            }
            b[j] -= factor*b[i];
        }
    }
    return {A, b};
}