#include <stdio.h>
#include <string.h>

//UserSnippetBy ZAMAN SHEIKH v0.1
char Encoding(char);
char Decoding(char);
char Encoding(char array[])
{
    int i;
    int length = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < length; i++)
    {
        array[i] += 3;
    }
    return array;
}
char Decoding(char array[])
{
    int i;
    int length = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < length; i++)
    {
        array[i] -= 3;
    }
    return array;
}

int main()
{
    char sequence[] = "I Love Bangladesh";
    sequence = Encoding(sequence);
    printf("%s\n", sequence);
    return 0;
}