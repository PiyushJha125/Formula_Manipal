#include <stdio.h>

void findSecondLargest(int *arr, int size) 
{
    int largest = arr[0]; 
    int secondLargest = arr[0];

    for (int i = 0; i < size; i++) 
    {
        if (*(arr+i) > largest) 
        {
            largest = arr[i];
        } 
    }
    for (int i = 0; i < size; i++) 
    {
        if (*(arr+i) > secondLargest) 
        {
            if (*(arr+i)==largest)
            {
                continue;
            }
            secondLargest = arr[i];
        } 
    }
    printf("The second largset number is :%d",secondLargest);

}
void main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, n);
}
