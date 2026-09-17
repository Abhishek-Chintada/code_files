#include "blaze_essentials.hpp"
#include "forward_elim.hpp"
// contains mostly the test code.
int main(void) {
    size_t n = 3;
    blaze::DynamicMatrix<double> a(n, n);
    blaze::DynamicVector<double> b(n);
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
    std::cout << a << std::endl;
    std::cout << std::endl << b << std::endl;
    blaze::DynamicVector<double, blaze::columnVector> ex(3);
    std::cout << std::endl << ex << std::endl;
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