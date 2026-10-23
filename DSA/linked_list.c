#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int val;
}Node;

typedef struct List {
    Node* head;
    Node* tail;
    size_t length;
} List;


void add_node(int x, Node **head, Node **tail, size_t *length) {
    if(*head == NULL) {
        printf("<console> the list is empty. Creating new list...\n");
        Node *temp = (Node *)malloc(sizeof(Node));
        if(temp == NULL) {
            printf("<console> error : malloc failed.\n");
            exit(1);  // exit status 1 reserved for malloc errors.
        }
        temp->val = x;
        temp->next = NULL;
        *head = temp;
        *tail = temp;  // only happens when the list is empty.
        (*length)++;
        printf("%p - %p\n", *head, temp);
        return;
    }
   Node *temp = (Node *)malloc(sizeof(Node));
   if(temp == NULL) {
       printf("<console> error : malloc failed.\n");
       exit(1);
   }
   temp->val = x;
   temp->next = NULL;
   (*tail)->next = temp;
   *tail = temp;
   (*length)++;
   return;
}

void delete_latest(Node **head, Node **tail, size_t *length) {
    if(*length == 0) {
        printf("<console> error : head of list not found.\n");
        return;
    }
    if(*length == 1) {
        free(*head);
        *head = *tail = NULL;
        *length = 0;
        printf("<console> The list is thrown out of existence.\n");
        return;
    }
    Node *temp = *head;
    while(temp->next != *tail) {
        temp = temp->next;
    }
    free(*tail);
    temp->next = NULL;
    *tail = temp;
    (*length)--;
    return;
}

void delete_list(Node **head, Node **tail, size_t *length) {
    Node *cur = *head;
    while(cur) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    *head = *tail = NULL;
    *length = 0;
    return;
}

void print_list(Node *head) {
    if(head != NULL) printf("[ ");
    else printf("<console> list is empty bitch ! \n");
    for(Node *p = head; p; p = p->next) {
        if(p->next != NULL) printf("%d, ", p->val);
        else printf("%d ]\n", p->val);
    }
    return;
}

int main(void) {
    printf("<console> SOF\n");
    List list = {0};
    add_node(1, &list.head, &list.tail, &list.length);
    add_node(2, &list.head, &list.tail, &list.length);
    print_list(list.head);
    // delete_latest(&list.head, &list.tail, &list.length);
    print_list(list.head);
    // delete_latest(&list.head, &list.tail, &list.length);
    print_list(list.head);
    // delete_latest(&list.head, &list.tail, &list.length);
    delete_list(&list.head, &list.tail, &list.length);
    print_list(list.head);
    printf("<console> EOF\n");
    return 0;
}
