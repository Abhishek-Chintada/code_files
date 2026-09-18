#include "blaze_essentials.hpp"
#include "forward_elim.hpp"
// contains mostly the test code.
int main(void) {
    blaze::setNumThreads(8);
    auto start = std::chrono::high_resolution_clock::now();
    size_t n = 100;
    blaze::DynamicMatrix<double> a(n, n);
    blaze::DynamicVector<double, blaze::columnVector> b(n);
    // defining 'random' shit
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(1, 50);
    for(size_t i{}; i < n; i++) {
        b[i] = dist(gen);
        for(size_t j{}; j < n; j++) {
            a(i, j) = dist(gen);
        }
    }
    /*std::cout << "Check" << std::endl << a << std::endl;
    std::cout << std::endl << b << std::endl;
    auto [A_res, b_res] = forward_elimination_core<double, blaze::DynamicMatrix<double>, blaze::DynamicVector<double, blaze::columnVector>>(a, b, n);
    std::cout << "Og" << std::endl << a << std::endl;
    std::cout << std::endl << b << std::endl;
    std::cout << "res" << std::endl << A_res << std::endl;
    std::cout << b_res << std::endl;*/
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << duration.count() << std::endl;
    return 0;
}


/* Apple Compiler:
  clang++ \
  -std=c++20 \
  -O3 \
  -march=native \
  -I/opt/homebrew/include \
  -I/opt/homebrew/opt/libomp/include \
  -L/opt/homebrew/opt/libomp/lib \
  -Xpreprocessor -fopenmp \
  test.cpp \
  -o executable \
  -framework Accelerate -lomp
*/

// ----------------------------// 

/*Linux(Debian) Compiler:
clang++ -std=c++20 -O3 -march=native -fopenmp -lblas test.cpp -o executable*/