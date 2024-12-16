#include <stdio.h>
#include <string.h>

void compress(const char *str, char *newstr, int idx, int count, int newidx) 
{
    if (str[idx] == '\0')
    {
        sprintf(&newstr[newidx], "%d", count);
        newidx++;
        newstr[newidx] = '\0';
        return;
    }

    if (str[idx] == str[idx - 1]) 
    {
        compress(str, newstr, idx + 1, count + 1, newidx);
    } 
    else 
    {
        if (count > 0) 
        {
            sprintf(&newstr[newidx], "%d", count);
            newidx++;
        }
        newstr[newidx++] = str[idx];
        compress(str, newstr, idx + 1, 1, newidx);
    }
}

void main() 
{
    char str[100], newstr[200];
    printf("Enter a string: ");
    scanf("%s", str);

    if (strlen(str) == 0) 
    {
        printf("Compressed string: \n");
        return;
    }

    newstr[0] = str[0];
    compress(str, newstr, 1, 1, 1);
    printf("Compressed string: %s\n", newstr);
}
