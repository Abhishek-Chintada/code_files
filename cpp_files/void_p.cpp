#include <cstdio>

int main(void)
{
    int num = 65;
    void *ptr = &num;
    printf("The value of the pointer is %c\n", *((char *)ptr)); // dereferencing a void pointer is not possible!
    if(ptr) 
        printf("This is working fine\n"); // implicit pointer conversion to bool.
    ptr = nullptr;
    if(!ptr)
        printf("This also works fine\n");
    return 0;
}