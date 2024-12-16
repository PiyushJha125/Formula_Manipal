//Create a program that converts seconds into hours, minutes, and remaining seconds.
#include <stdio.h>
void main() 
{
    int sec,h, min;
    printf("Enter total seconds: ");
    scanf("%d", &sec);
    printf("%d \t",sec);
    h = sec / 3600;
    sec = sec%3600;
    min =  sec/ 60;
    sec = sec%60;
    printf("%d hours, %d minutes, and %d seconds", h, min, sec);

}
