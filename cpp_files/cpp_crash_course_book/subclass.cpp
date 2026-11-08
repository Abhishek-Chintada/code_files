#include <cstdio>
struct SuperClass {
    int x_class;
};
struct SubClass : SuperClass {
    SubClass(int x, int y) {
        x_class = x;
        y_class = y;
    }
    void get_result() {
        printf("The result of the addition is %d.\n", x_class+y_class);
    }
    private :
        int y_class;
};
int main(void) {
    SubClass a{10, 12}; // The creation of the subclass automatically creates the SuperClass.
    a.get_result();
    return 0;
}