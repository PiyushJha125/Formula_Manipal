#include <stdio.h>
void main() 
{
    int units;
    float bill = 0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) 
    {
        bill = units * 5;
    }
     else if (units <= 300) 
    {
        bill = 100 * 5 + (units - 100) * 8;
    }
     else 
    {
        bill = 100 * 5 + 200 * 8 + (units - 300) * 10;
    }
    printf("The bill amount is %f ", bill);
}
