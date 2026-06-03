#include <cstdio>

struct Data {
    int a = 10;
    private:
        int b = 20;  // inaccessible
};

int main(void) {
    Data data;
    Data& ref = data;
    Data* ptr = &data;
    printf("Data a reference : %d\n", ref.a);
    printf("Data a pointer : %d\n", ptr->a);
    return 0;
}