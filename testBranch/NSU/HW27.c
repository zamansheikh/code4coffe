#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[50], ch = '#', i;
    printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = ch;
        }
    }
    printf("\nNew String (after replacing vowel with #) = %s", str);
    getch();
    return 0;
}