#include <stdio.h>
int main()
{
    char number;
    scanf("%c", &number);
    if (number == 'a' || number == 'A' || number == 'E' || number == 'e' || number == 'i' || number == 'I' || number == 'o' || number == 'O' || number == 'U' || number == 'u')
    {
        printf("%c is  Vowel",number);
    }
    else
    {
        printf("%c is Consonant",number);
    }
    getchar();
    return 0;
}