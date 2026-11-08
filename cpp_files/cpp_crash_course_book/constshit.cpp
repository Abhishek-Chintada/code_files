#include <cstdio>
#include <type_traits>
#include <stdexcept>

template<typename T>
auto value_of(T x) {
    if constexpr(std::is_pointer<T>::value) {
        if(!x) {
            throw std::runtime_error("<Null pointer dereference>");
        } else {
            return *x;
        }
    } else {
        return x;
    }
}

int main(void) {
    int a = 10;
    int *a_ptr = &a;
    try {
        printf("This is the value of a : %d\n", value_of<int>(a));
        printf("This is the value of the a_ptr : %d\n", value_of<int*>(a_ptr));
    } catch(std::exception& e) {
        printf("%s\n", e.what());
    }
    printf("The program ran successfully.\n");
    return 0;
}