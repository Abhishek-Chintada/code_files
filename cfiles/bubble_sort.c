#include <stdio.h>

int main()
{
    int arr[] = {7, 5, 3, 9, 2, 8};
    
    // Count the number of elements in the array.
    int element_number = sizeof(arr)/sizeof(arr[0]); 

    // Bubble Sorting the Array.
    int swap_counter = -1;
    int unsorted = 0;

    while(swap_counter != 0)
    {
        swap_counter = 0;
    for(int i=0;i<element_number-unsorted-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            swap_counter++;
        }
    }
    unsorted++;
}
    // Print the sorted array.
    for(int i=0;i<element_number;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}