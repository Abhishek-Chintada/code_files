#pragma once
#include <cstddef>

struct SimpleString {
    public:
        SimpleString(size_t max);
        ~SimpleString();
        bool append_character(char x);
        bool append_line(const char * line);
        void get_buffer();
    private:
        char * buffer;  // dynamic variable.
        size_t max_size;
        size_t length;
};
