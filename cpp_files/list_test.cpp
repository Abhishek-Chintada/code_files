#include <cstdio>

struct Element {
    Element *next = nullptr;
    void insert_after(Element* new_element)
    {
        new_element->next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() 
{
    Element e1, e2, e3;
    e1.prefix[0] = '1'; e1.operating_number = 101;
    e2.prefix[0] = '2'; e2.operating_number = 202;
    e3.prefix[0] = '3'; e3.operating_number = 303;

    printf("Initially: e1.next is %p\n", (void*)e1.next);

    printf("Inserting e2 after e1...\n");
    e1.insert_after(&e2);
    printf("e1.next points to e2 (%p)\n", (void*)e1.next);
    printf("e2.next points to %p (nullptr)\n", (void*)e2.next);

    printf("\nInserting e3 after e1 (between e1 and e2)...\n");
    e1.insert_after(&e3);
    printf("e1.next points to e3 (%p)\n", (void*)e1.next);
    printf("e3.next points to e2 (%p)\n", (void*)e3.next);

    return 0;
}
