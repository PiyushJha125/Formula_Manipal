//Create a program to remove all duplicates from an array of integers.
#include <stdio.h>

void main() 
{
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n;) 
        {
            if (arr[i] == arr[j]) 
            {
                for (k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            } 
            else
             {
                j++;
             }
        }
    }

    printf("Array after removing duplicates: ");

    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


}
