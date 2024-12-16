//Implement Bubble sort or Selection sort on an array based on the input from the user and on the sorted array perform binary search algorithm to find an element
#include <stdio.h>

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void binarySearch(int arr[], int size, int key) 
{
    int low = 0, high = size - 1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key) 
        {
           printf("The element is prsesnt in the array");
           break;
        }
        
        else if (arr[mid] < key) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
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
    int key, choice;

    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nChoose sorting method:\n1. Bubble Sort\n2. Selection Sort\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        bubbleSort(arr, n);
        printf("\nArray sorted using Bubble Sort: ");
    } 
    else if (choice == 2) 
    {
        selectionSort(arr,n);
        printf("\nArray sorted using Selection Sort: ");
    } 
    else 
    {
        printf("\nInvalid choice!\n");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    binarySearch(arr,n, key);
}
