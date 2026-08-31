#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int element;
    void* next;
}Node;

Node *head = NULL;
Node *tail = NULL;
size_t current_top = 0;

void createList(int x) {
    if(head != NULL) {
        printf("The Linked List is already created.\n");
        return;
    } else {
        head = (Node*)malloc(sizeof(Node));
        head->element = x;
        head->next = NULL;
        tail = head;
        current_top = 0;
        return;
    }
}

void addNode(int x) {
    if(head == NULL) {
        printf("The linked list is not yet init.\n");
        return;
    }
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->element = x;
    tmp->next = NULL;
    tail->next = tmp;
    tail = tmp;
    current_top++;
    return;
}

void remNode() {
    Node *labbe = head;
    for(size_t i = 0; i < current_top-1; i++) {
        labbe = labbe->next;
    }
    labbe->next = NULL;
    current_top = current_top - 1;
}

void printList() {
    Node* tmp = head;
    printf("[ ");
    for(size_t i = 0; i < current_top; i++) {
        printf("%d ", tmp->element);
        tmp = tmp->next;
    }
    printf("%d ]\n", tmp->element);
}

int main(void) {
    createList(23);
    addNode(34);
    addNode(54);
    printList();
    printf("<console> Number of elements in list : %zu\n", current_top+1);
    remNode();
    printList();
   printf("<console> Number of elements in list : %zu\n", current_top+1); 
    return 0;
}