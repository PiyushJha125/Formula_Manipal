//Develop a program to swap every two adjacent elements in an array using pointers. 
#include <stdio.h>

void swap(int *arr, int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}

void main() 
{
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i <n; i++) 
    {
        printf("%d ", arr[i]);
    }

    swap(arr,n);

    printf("\n Array after swapping: ");

    for (int i = 0; i <n; i++) 
    { 
        printf("%d ", arr[i]);
    }

    printf("\n");
}
