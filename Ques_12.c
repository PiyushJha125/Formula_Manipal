/*Write a C program to print equilateral triangle or Pyramid star pattern series of n rows using. For eg n=5.
                                                *
                                               * *
                                             *  *  *
                                            *  *  *  *
                                          *   *  *  *  *
*/
                                        


#include <stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
         {
           printf(" ");
         }
    for(k=1;k<=i;k++)
        {
          printf("*");
          printf(" ");
        }
        printf("\n");
    }
    
}
