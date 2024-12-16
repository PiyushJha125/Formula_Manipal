#include <stdio.h>

int fib(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    else 
    {
       return fib(n - 1) + fib(n - 2);
    }
    
}

void main() 
{
    int n;
    printf("Enter the number of terms in the series : ");
    scanf("%d", &n);
    if(n>0)
    {
       printf("The %d Fibonacci term is: %d\n", n, fib(n));
    }
    else
    {
      printf("INVALID!!!!\nThe entered number is negative\n");
    }
    

}
