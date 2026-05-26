#include "simplestring.h"
#include <cstdio>
#include <stdexcept>
#include <cstring>
    SimpleString::SimpleString(size_t max):max_size{max}, length{0} {
        if(max_size == 0) {
            throw std::logic_error{"Max size cannot be nill."};
        }
        buffer = new char[max_size];
        buffer[0] = '\0';
    }
    bool SimpleString::append_character(char x) {
        if(length + 1 >= max_size) {
            throw std::range_error{"The buffer cannot afford to append the character."};
            return false;
        }
        buffer[length] = x;
        length++;
        buffer[length] = '\0';
        return true;
    }
    bool SimpleString::append_line(const char *line) {
        size_t size_line = strlen(line);
        if(size_line + length + 1 >= max_size) {
            throw std::range_error{"The buffer cannot afford to append the line."};
            return false;
        }
        std::strncpy(buffer+length, line, size_line);
        length = length + size_line;
        buffer[length] = '\0';
        return true;
    }
    void SimpleString::get_buffer() {
        printf("%s\n", buffer);
    }
    SimpleString::~SimpleString() {
        printf("%s is destructed...\n", buffer);
        delete[] buffer;
    }
