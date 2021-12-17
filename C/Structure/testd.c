#include<stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, len;
    i = 0;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Remove :  ");
    scanf("%c", &ch);

    //strings lenth
    len = strlen(str);
    //remove a character from a string
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            while (str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
            break;
        }
        i++;
    }

    printf("\n The Final String after Removing First occurrence of '%c' = %s ", ch, str);

    return 0;
}