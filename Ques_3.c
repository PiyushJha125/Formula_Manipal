//Create a program to calculate electricity bills based on usage slabs (e.g.if total units are 350 then 0–100 units: ₹5/unit, 101–300 units: ₹8/unit, ₹10/unit for units above 300, then total bill is of 350 units is 2900).
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
