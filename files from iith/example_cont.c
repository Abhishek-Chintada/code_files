#include <stdio.h>

int main()
{
    // Reading numbers from the input file.
    FILE *ptr;
    ptr = fopen("input7.txt", "r");
    if(ptr == NULL)
    {
        printf("Error 404 Not Found!\n");
        return 404;
    }
    
    // Creating an array to store the numbers.
    int arr[20000];
    while(!feof(ptr))
    {
        for(int i=0;i<20000;i++)
        {
            fscanf(ptr, "%d", &arr[i]);
        }
    }
    // Sorting of the array of numbers.
    for(int i=0;i<20000-1;i++)
    {
        for(int j=i;j<20000;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Scanning the 
    FILE *out_ptr;
    out_ptr = fopen("output7.txt", "w");
    for(int i=0;i<20000;i=i+50)
    {
        for(int j=0;j<50;j++)
        {
            fprintf(out_ptr, "%d ", arr[i+j]);
        }
        fprintf(out_ptr, "\n");
    }
    fclose(ptr);
    fclose(out_ptr);
    return 0;
}