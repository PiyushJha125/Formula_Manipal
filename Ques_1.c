#include <stdio.h>
void isPrime(int s) 
{
    int flag =0;
    if (s>0)
    {
       for (int i = 2; i < s ; i++)
       {
        if (s % i == 0)
        {
            flag = flag +1;
        }
    }
    }
    else
    {
      printf("The given number is either 0 or a negative number \n");
    }
    if(flag!=0)
    {
        printf("The sum of the three numbers is a composite number \n");
    }
    else
    {
        printf("The sum of the three numbers is a prime number \n");
    }

    }


void isEven(int s) 
{
    if(s%2==0)
    {
        printf("The sum of the three numbers is an even number \n");
    }
    else
    {
        printf("The sum of the three numbers is an odd number \n");
    }

 }

void main() 
{
    float a, b, c, sum;
    printf("Enter three numbers : \n");
    scanf("%f %f %f", &a, &b, &c);
    sum = a + b + c;
    printf("%f \n",sum);
    isEven(sum);
    isPrime(sum);
}

