#include <iostream>
#include <stdlib.h>

// defines the node for each element in the insertion array.
typedef struct Node {
    struct Node *parent;
    struct Node *left;
    struct Node *right;
    int value;
} Node;
// Creating the head node
Node *head = NULL;
// To-implement -> search, insert, delete, successor and predecessor.
bool insertNode(Node *head, int val) {
    if(head ==NULL) {
        head = (Node *)malloc(sizeof(Node));
        head->value = val;
        head->left = NULL;
        head->right = NULL;
        head->parent = NULL;
    }
    if(val > head->value && head->right != NULL) {
        insertNode(head->right, val);
    } else if(val < head->value && head->left != NULL) {
        insertNode(head->left, val);
    } else if(head->value == val) {
        std::cout << "The value already exists in the tree." << std::endl;
        return NULL;
    }
    if(val > head->value && head->right == NULL) {
        Node *tmp = (Node *)malloc(sizeof(Node));
        tmp->value = val;
        tmp->right = NULL;
        tmp->left = NULL;
        tmp->parent = head;
        head->right = tmp;
        return true;
    } else if(val < head->value && head->left == NULL) {
        Node *tmp = (Node *)malloc(sizeof(Node));
        tmp->value = val;
        tmp->right = NULL;
        tmp->left = NULL;
        tmp->parent = head;
        head->left = tmp;
        return true;
    }
    return false;
}

int main(void) {
    return 0;
}