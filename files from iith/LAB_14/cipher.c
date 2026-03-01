#include <stdio.h>

int main()
{
    // Accepting the given Cypher Code File.
    FILE *input_ptr;
    input_ptr = fopen("cipherCO25BTECH11007.txt", "r");
    if(input_ptr == NULL)
    {
        printf("File Could Not Be Found...!\n");
    }

    // Accepting the mapping file.
    FILE *mapping_ptr;
    mapping_ptr = fopen("mappingCO25BTECH11007.txt", "r");

    
    // Creating an array to store the characters of the text file.
    char ch;
    while(!feof(input_ptr))
    {
        ch = fgetc(input_ptr);
        
    }
    return 0;
}