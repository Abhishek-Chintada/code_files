#include <cstdio>

struct Element {
    Element *next = nullptr;
    void insert_after(Element* new_element)
    {
        new_element->next = next;
        next = new_element;
    }
    char prefix[3]; // Increased to 3 to accommodate 'FI', 'SE', 'TH' + null terminator if needed, though we use %c%c
    short operating_number;
};

int main() 
{
    Element e1, e2, e3;
    
    // Set data for e3
    e3.prefix[0] = 'F'; e3.prefix[1] = 'I'; e3.operating_number = 152;
    e3.next = nullptr; // Explicitly ensure it's null
    
    // Set data for e2 and link e3
    e2.prefix[0] = 'S'; e2.prefix[1] = 'E'; e2.operating_number = 613;
    e2.insert_after(&e3);
    
    // Set data for e1 and link e2
    e1.prefix[0] = 'T'; e1.prefix[1] = 'H'; e1.operating_number = 812;
    e1.insert_after(&e2);

    for(Element *cursor = &e1; cursor; cursor = cursor->next)
    {
        printf("%c%c - %d (next: %p)\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number, (void*)cursor->next);
    }
}
