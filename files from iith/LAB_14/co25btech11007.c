#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() 
{
    FILE *cipher_ptr, *map_ptr, *output_ptr;
    char cipherLetter, plainLetter;
    char mapping[26];

    // Opening files
    cipher_ptr = fopen("cipherCO25BTECH11007.txt", "r");
    map_ptr = fopen("mappingCO25BTECH11007.txt", "r");
    output_ptr = fopen("co25btech11007_output.txt", "w");

    if (!cipher_ptr || !map_ptr || !output_ptr) 
    {
        printf("Error: cannot open file.\n");
        return 1;
    }


    // Skip header lines in mapping file
    char line[100];
    for (int i = 0; i < 3; i++)
        fgets(line, sizeof(line), map_ptr);

    // Read mapping lines
    while (fscanf(map_ptr, " %c %c", &plainLetter, &cipherLetter) == 2) 
    {
        if (isalpha(cipherLetter))
            mapping[cipherLetter - 'A'] = plainLetter;
    }

    // Decoding the cypher text into original message.
    int ch;
    while ((ch = fgetc(cipher_ptr)) != EOF) 
    {
        if (isalpha(ch))
            fputc(mapping[ch - 'A'], output_ptr);
        else
            fputc(ch, output_ptr);
    }

    fclose(cipher_ptr);
    fclose(map_ptr);
    fclose(output_ptr);
    return 0;
}