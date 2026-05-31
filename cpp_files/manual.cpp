#include <cstdio>
// This file is for showing the double free error generation and how to avoid it...

struct hehe {
    int* x = new int;
    char ch;
    hehe(int x_test, char c) {
        *x = x_test;
        ch = c;
        printf("The value of x is %d and the address of x is %p\n", *x, x);
        printf("The character is %c\n", ch);
    }
    hehe() {
        *x = 50;
        ch = 'A';
        printf("This is the test variable of the struct \n");
    }
    hehe(const hehe& other) { // copy constructor
        x = new int(*other.x);
        ch = char(int('1') + *x);
        printf("Copied successfully. New address: %p\n", x);
        printf("The character is %c\n", ch);
    }
    hehe& operator=(const hehe& other) {
        hehe temp{other}; // for copy and swap idion.
        if(temp.x != this->x) {
            delete this->x;
            this->x = new int(*temp.x);
            this->ch = char(int('2') + *temp.x);
            printf("Assigned successfully. New address: %p\n", this->x);
            printf("The character is %c\n", this->ch);
            return *this;
        } else {
            this->ch = char(int('3') + *this->x);
            printf("Self assignment detected. No new memory allocated. Address: %p\n", this->x);
            printf("The character is %c\n", this->ch);
            return *this;
        }
    }
    ~hehe() {
        delete x;
        printf("The dynamic variable of %c is destroyed...\n", ch);
    }
    
};
int main(void) {
    hehe a{23, 'A'};
    hehe c;
    c = a;  // Presumably the copy assignemnt operator is required here. or else shallow copy occurs.
    a = a; // Self Assignment test case.
    printf("The value of x in c is %d and the address of x in c is %p\n", *c.x, c.x);
    printf("The value of x in a is %d and the address of x in a is %p\n", *a.x, a.x);
    return 0;
}