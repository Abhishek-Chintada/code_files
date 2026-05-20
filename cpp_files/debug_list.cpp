#include <cstdio>

struct Element {
    Element *next = nullptr;
    void insert_after(Element* new_element)
    {
        printf("Inserting %p after %p. Current next of %p was %p\n", (void*)new_element, (void*)this, (void*)this, (void*)next);
        new_element->next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() 
{
    Element e1, e2, e3;
    printf("&e1: %p, &e2: %p, &e3: %p\n", (void*)&e1, (void*)&e2, (void*)&e3);
    
    e3.prefix[0] = 'F'; e3.prefix[1] = 'I'; e3.operating_number = 152;
    e2.insert_after(&e3);
    
    e2.prefix[0] = 'S'; e2.prefix[1] = 'E'; e2.operating_number = 613;
    e1.insert_after(&e2);
    
    e1.prefix[0] = 'T'; e1.prefix[1] = 'H'; e1.operating_number = 812;

    printf("\nTraversing:\n");
    for(Element *cursor = &e1; cursor; cursor = cursor->next)
    {
        printf("Cursor: %p, Next: %p, Data: %c%c - %d\n", (void*)cursor, (void*)cursor->next, cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
    }
}
