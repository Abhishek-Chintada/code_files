#include "/home/abhishekchintada/slanderishCode/DeformativeMatter/cpp_source/blaze_essentials.hpp"
#include <chrono>
#include <random>

template<typename matrixType>
void upperConverter(const matrixType& A, size_t N) {

}

int main(void) {
    // blaze implementation.
    blaze::setNumThreads(8);
    auto start = std::chrono::high_resolution_clock::now();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<double> distri(1, 20);
    size_t N = 10000;
    blaze::DynamicMatrix<double, blaze::rowMajor> A (N, N);
    for(size_t i {}; i < N; i++) {
        for(size_t j {}; j < N; j++) {
            A(i, j) = distri(gen);
        }
    }
    // print_Matrix(A, N);
    for(size_t i{}; i < N-1; i++) {
        for(size_t j{i+1}; j < N; j++) {
            blaze::row(A, j) = blaze::row(A, j) - blaze::row(A, i)*(A(j, i)/A(i, i));
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    // print_Matrix(A, N);
    std::cout << "<console> Time elapsed : " << elapsed.count() << std::endl;
    return 0;
}