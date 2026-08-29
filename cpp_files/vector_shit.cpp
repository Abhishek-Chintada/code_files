#include <iostream>
#include <vector> // this is essential for the usage of vectors.

int main(void) {
    // Declaration of a standard vector.
    std::vector<int> v1;
    // We can also declare and init at the same time.
    std::vector<int> v2(3, 5);
    std::vector<int> v3 = {1, 2, 3};

    for(auto x : v2) {
        std::cout << x << " " ;
    }
    std::cout << std::endl;
    for(auto y : v3) {
        std::cout << y << " ";
    }
    std::cout << std::endl;
    std::vector<char> v4{'a', 'b', 'c'};
    v4.push_back('z'); // Adds an element to the end.
    for(auto x : v4) {
        std::cout << x << " " << std::endl;
    }
    v4.insert(v4.begin() + 1, 'd'); // adds an element to the specified position.
    for(auto x : v4) {
        std::cout << x << " " << std::endl;
    }
    std::cout << "This is the end of the program" << std::endl;
    return 0;
}
