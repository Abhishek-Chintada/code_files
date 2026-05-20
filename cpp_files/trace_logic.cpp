#include <cstdio>

struct Element {
    Element *next = nullptr;
    void insert_after(Element* new_element) {
        printf("--- Calling insert_after ---\n");
        printf("This element (%p) currently points to: %p\n", (void*)this, (void*)next);
        printf("New element (%p) currently points to: %p\n", (void*)new_element, (void*)new_element->next);
        
        new_element->next = next;
        next = new_element;
        
        printf("AFTER CHANGE:\n");
        printf("This element (%p) now points to: %p\n", (void*)this, (void*)next);
        printf("New element (%p) now points to: %p\n", (void*)new_element, (void*)new_element->next);
    }
    char prefix[2];
    short operating_number;
};

int main() {
    Element e1, e2, e3;
    printf("Addresses: e1=%p, e2=%p, e3=%p\n", (void*)&e1, (void*)&e2, (void*)&e3);

    e3.prefix[0] = 'F'; e3.prefix[1] = 'I'; e3.operating_number = 152;
    
    printf("\nAction 1: e2.insert_after(&e3)\n");
    e2.insert_after(&e3);
    
    e2.prefix[0] = 'S'; e2.prefix[1] = 'E'; e2.operating_number = 613;
    
    printf("\nAction 2: e1.insert_after(&e2)\n");
    e1.insert_after(&e2);

    return 0;
}
