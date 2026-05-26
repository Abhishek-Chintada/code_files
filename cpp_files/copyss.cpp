#include "simplestring.h"


int main(void) {
    // Copy Constructor

    SimpleString a{100};
    const char* str = "Hello!";
    a.append_line(str);
    SimpleString b{a};
    const char* str1 = "World";
    a.append_line(str1);
    a.get_buffer();
    b.get_buffer();

    // Copy Assignment

    SimpleString c{100};
    const char *str2 = "Abhishek Chintada";
    c.append_line(str2);
    SimpleString d{100};
    d = c;
    c.get_buffer();
    d.get_buffer();
    return 0;
}
