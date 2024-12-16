//Create a program to simulate a simple login system with 3 attempts to enter the correct password.
#include <stdio.h>
#include <string.h>

void main() 
{
    char pass[20], correctPass[] = "password123";
    int attempts = 3;

    while (attempts > 0) 
    {
        printf("Enter password: ");
        scanf("%s", pass);
        if (strcmp(pass, correctPass) == 0) 
        {
            printf("Login successful \n");
            return 0;
        }
        attempts--;
        printf("Incorrect password. You have %d attempts left \n", attempts);
    }
    printf("Access denied!\n");
}
