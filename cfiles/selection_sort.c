#include <stdio.h>

int main()
{
    int arr[] = {9, 4, 6, 1, 0, 3};
    int num = sizeof(arr)/sizeof(arr[0]);

    // Selection sorting of an array.
    int k = 0;
    while(k<num-1)
    {
        for(int i=k;i<num;i++)
        {
            int min = arr[k];
            if(arr[i]<min)
            {
                int temp = arr[k];
                arr[k] = arr[i];
                arr[i] = temp;
            }
        }
        k++;
    }

    // Printing the sorted array.
    for(int i=0;i<num;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}