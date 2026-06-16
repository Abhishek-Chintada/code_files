#include <cstdio>
#include <stdexcept>

void get(int (&arr)[10], size_t index) {
    printf("The get function is called.\n");
    if(index >= 10 || index < 0) {
        throw std::runtime_error("The get index is out of range.");
    } else {
        printf("The element at the index of %zu is : %d\n", index, arr[index]);
    }
}

bool change(int (&arr)[10], size_t index, int to_change) {
    printf("The changer function is called.\n");
    if(index >= 10 || index < 0) {
        throw std::runtime_error("The change index is out of range.");
        return false;
    } else {
        arr[index] = to_change;
        return true;
    }
}

int main() {
    int arr[] {1, 2, 3, 4, 5 ,6 , 7, 8, 9, 10};
    try {
        get(arr, 2);
    } catch(std::exception& err) {
        printf("Exception : %s\n", err.what());
    }
    try {
       if(change(arr, 12, 0)) {
        printf("The value has been changed successfully.\n");
        get(arr, 1);
       } else {
        printf("Error occured. Refer log.\n");
       }
    } catch(std::exception& e) {
        printf("Error : %s\n", e.what());
    }
    printf("The program ended.\n");
    return 0;
}