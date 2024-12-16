//Take each element of the 4x4 matrix from the user and print it, then add each element from the 4x4 matrix and print the sum, print the sum of both the diagonals
#include <stdio.h>

void main() 
{
    int matrix[4][4], sum = 0, pSum = 0, sSum = 0;

    printf("Enter elements of 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            if (i == j) 
            {
                pSum += matrix[i][j];
            }
            if (i+j==3) 
            {
                sSum += matrix[i][j];
            }
            
        }
    }
     
    printf("Matrix:\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Total Sum: %d\n", sum);
    printf("Diagonal 1 Sum: %d\n", pSum);
    printf("Diagonal 2 Sum: %d\n", sSum);
}
