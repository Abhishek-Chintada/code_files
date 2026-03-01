#include<stdio.h>

typedef struct node
{
    char *name;
    char *number;
    struct node* next;
}node;

int main(void)
{
    node* table[26]; // hash table with 26 buckets.
}