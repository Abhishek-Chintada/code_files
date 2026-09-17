#include "blaze_essentials.hpp"
// forward elimination for creating an upper triangular matrix. (Inspired by LU)
template<typename Matrix, typename Vector>
void forward_elimination_core(Matrix *A, Vector *b, size_t n) {
    blaze::DynamicVector<double, blaze::columnVector> result (n);
    for(size_t i {}; i < n; i++) {
        std::cout << result[i] << std::endl;
    }
}