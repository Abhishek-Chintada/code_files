#include <cstdio>
// This finction demonstrates the shitty default copy of cpp lanugage.
struct Pointer_struct {
    int x;
    int *ptr;
    Pointer_struct(int x) {
        this->x = x;
        ptr = &(this->x);
        printf("The value of variable x is %d and the value of the pointer is %p\n", x, ptr);
    }
    ~Pointer_struct() {
        printf("The struct object is destroyed.\n");
    }
};

int main(void) {
    Pointer_struct p{10};
    Pointer_struct q = p;
    printf("The value of the variable x in q is %d and the value of the pointer in q is %p\n", q.x, q.ptr);
    return 0;
}