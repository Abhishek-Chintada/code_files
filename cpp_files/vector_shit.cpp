#include <iostream>
#include <vector> // this is essential for the usage of vectors.

int main(void) {
    // Declaration of a standard vector.
    std::vector<int> v1;
    // We can also declare and init at the same time.
    std::vector<int> v2(3, 5); // creates a vector with 3 elements each of which is 5
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
        std::cout << x << " ";
    }
    std::cout << std::endl;
    v4.insert(v4.begin() + 1, 'd'); // adds an element to the specified position.
    for(auto x : v4) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << v4[2] << std::endl; // general direct access to the vector elements.
    std::cout << v4.at(2) << std::endl; // performs boundary checks.
    try {
        std::cout << v4.at(32) << std::endl;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // here we create a multi-dimensional vector.
    std::vector <std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(const auto &row : matrix) {
        for(const auto &x: row) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "This is the end of the program. See obsidian notes for further info." << std::endl;
    return 0;
}
