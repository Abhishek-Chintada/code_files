#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 2d structure in memory.
typedef struct node
{
    int number;
    struct node *left;
    struct node* right;
}node;

// binary search using recursion.
bool search(node* tree, int number)
{
    if(tree == NULL)
    {
        return false;
    }
    if(number<tree->number)
    {
        return search(tree->left, number);
    }
    else if(number>tree->number)
    {
        return search(tree->right, number);
    }
    else if(tree->number == number)
    {
        return true;
    }
}


int main(void)
{

}