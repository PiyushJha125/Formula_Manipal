//Implement a program count the number of vowels and consonants in the given string as well as to scramble the characters of a string randomly.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void scramble(char s[1000])
{
    srand(time(NULL));
    char snew[1000];
    int idx[1000],number;
    for (int i = 0; i < strlen(s) - 1; i++) 
    {
        int idx = i + rand() % (strlen(s) - i);
        char temp = s[i];
        s[i] = s[idx];
        s[idx] = temp;
    }
    printf("%s",s);
}
void main()
{
    char str[100];
    int v = 0, c = 0;
    printf("Enter a string: ");
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
             v++;
            }
            else 
            {
                c++;
            }
        }
     
     printf("Vowels: %d, Consonants: %d\n", v, c);
     scramble(str);

    }

   
