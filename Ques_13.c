#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char ch;
    int w=1,l=0,c=0;
    FILE*fptr;
    fptr=fopen("text.txt","r");
    char content[1000];
    while(fgets(content,1000,fptr))
    {

    printf("%s\n",content);
    l++;
    for(int i=0;i<strlen(content);i++)
    {
        ch=content[i];
        c++;
        if(isspace(ch) && content[i+1]!=" ")
        {
          w++;
        }
    }
    }
    printf("The number of characters in the content is :%d\n",c);
    printf("The number of words in the content is :%d\n",w);
    printf("The number of lines in the content is :%d\n",l);

}