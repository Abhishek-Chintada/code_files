#include <cstdio>
#include <stdexcept>

struct textFile {
    bool status;
    const char* contents;
    size_t bytes;
};
textFile read_text(const char* text) {
    const static char contents[] {"Sometimes the goat is you."};
    return textFile{
            true, 
            contents,
            sizeof(contents)
        };
}

int main(void) {
    const auto [success, contents, size] = read_text("Labbe.txt");
    if(success) {
        printf("These are the contents :\n%s\n", contents);
    } else {
        printf("<error parsing the file>\n");
    }
    return 0;
}