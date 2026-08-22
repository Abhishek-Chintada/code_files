#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int element;
    void* next;
}Node;

Node *head = NULL;

void addNode(int x) {
    if(head == NULL) {
        head = (Node*)malloc(sizeof(Node));
    } else {
        head->next = (Node*)malloc(sizeof(Node));
        
    }
}

int main(void) {

    return 0;
}