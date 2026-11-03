#include <stdio.h>
#include <stdlib.h>

// Structure to store a node in AVL tree
struct Node {
    int key;
    int height;
    struct Node *left;
    struct Node *right;
};

// Function to get the height of a node
int height(struct Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// Function to get the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// A utility function to right rotate subtree rooted with y
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// A utility function to left rotate subtree rooted with x
struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get the balance factor of a node
int getBalance(struct Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

// Function to insert a node with given key
struct Node* insert(struct Node* node, int key) {
    // Perform the normal BST insertion
    if (node == NULL)
        return (struct Node*)malloc(sizeof(struct Node));

    if (key < node->key) {
        node->left = insert(node->left, key);
        node->height = max(height(node->left), height(node->right)) + 1;
    } else if (key > node->key) {
        node->right = insert(node->right, key);
        node->height = max(height(node->left), height(node->right)) + 1;
    } else // Equal keys are not allowed in AVL
        return node;

    // Get the balance factor of the ancestor node to check if it is unbalanced
    int balance = getBalance(node);

    // If the node becomes unbalanced, then there are 4 cases
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Function to print the tree in inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

// Driver code
int main() {
    struct Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    printf("Inorder traversal of the constructed AVL tree is: \n");
    inorder(root);

    return 0;
}
