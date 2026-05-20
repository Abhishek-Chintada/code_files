#include <cstdio>

struct Element {
    Element *next = nullptr;
    void insert_after(Element* new_element) {
        new_element->next = next;
        next = new_element;
    }
    char prefix[2]; // Size 2
    short operating_number; // Size 2
};

int main() {
    Element e;
    printf("Size of Element: %zu\n", sizeof(Element));
    printf("Offset of next: %zu\n", (size_t)&e.next - (size_t)&e);
    printf("Offset of prefix: %zu\n", (size_t)&e.prefix - (size_t)&e);
    printf("Offset of operating_number: %zu\n", (size_t)&e.operating_number - (size_t)&e);
    
    // Testing the overwrite hypothesis
    e.prefix[0] = 'X';
    e.prefix[1] = 'Y';
    e.prefix[2] = 'Z'; // OVERFLOW! 
    
    return 0;
}
