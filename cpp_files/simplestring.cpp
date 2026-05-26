#include <cstdio>
#include <stdexcept>
#include <cstring>
struct SimpleString {
    SimpleString(size_t max):max_size{max}, length{0} {
        if(max_size == 0) {
            throw std::logic_error{"Max size cannot be nill."};
        }
        buffer = new char[max_size];
        buffer[0] = '\0';
    }
    bool append_character(char x) {
        if(length+1 >= max_size) {
            throw std::range_error{"The buffer cannot afford to append the character."};
            return false;
        }
        buffer[length] = x;
        length++;
        buffer[length] = '\0';
        return true;
    }
    bool append_line(const char *line) {
        size_t size_line = strlen(line);
        if(size_line+length+1 >= max_size) {
            throw std::range_error{"The buffer cannot afford to append the line."};
            return false;
        }
        std::strncpy(buffer+length, line, size_line);
        length = length + size_line;
        buffer[length] = '\0';
        return true;
    }
    void get_buffer() {
        printf("%s\n", buffer);
    }
    ~SimpleString() {
        printf("%s is destructed...\n", buffer);
        delete[] buffer;
    }
    private:
        char *buffer;   // dynamic variable.
        size_t max_size; 
        size_t length;
};

int main(void) {
    SimpleString s{10};
    const char *str = "avada";
    const char *str0 = "ahe";
    try {
        s.append_character('L');
        s.get_buffer();
        s.append_line(str);
        s.get_buffer();
        s.append_line(str0);
        s.get_buffer();
    } catch (std::exception& e) {
        printf("Exception caught with msg : %s\n", e.what());
    }
    return 0;
}