#include <cstdio>
#include <stdexcept>
#include <type_traits>

template<size_t index, typename T, size_t length>
T& get(T (&arr)[length]) {
    static_assert(index < length, "Out of bounds access is not allowed.\n");
    return arr[index];
}

template<size_t index, typename T, size_t length>
bool change(T (&arr)[length], T change_to_this) {
    static_assert(index < length, "Out of bounds access is not allowed.\n");
    arr[index] = change_to_this;
    return true;
}

int main(void) {
    int arr[] {1, 2, 3, 4, 5};
    auto a = get<2>(arr);
    printf("This is the element : %d\n", a);
    if(change<2>(arr, 20)) {
        printf("The value at the index %zu is changed successfully\n", size_t(2));
        printf("The value of the index no %zu of arr is : %d\n", size_t(2), arr[2]);
    } else {
        printf("Error occured.\n");
    }
    return 0;
}