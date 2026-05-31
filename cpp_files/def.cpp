#include <cstdio>

struct Highlander {
    private:
    int x;
    public: 
    Highlander(int new_int) {
        x = new_int;
        printf("The value of x is %d and the address of x is %p\n", x, &x);
    }
};

int main(void) {

}