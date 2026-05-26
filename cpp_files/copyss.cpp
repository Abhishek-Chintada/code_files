#include "simplestring.h"

int main(void) {
    SimpleString s{15};
    const char * str = "Hare Rama!";
    s.append_line(str);
    s.get_buffer();
    return 0;
}
