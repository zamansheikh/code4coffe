#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1

void finonnaci(int);

int main()
{
    int n;
    printf("How much terms?\n");
    scanf("%d", &n);
    finonnaci(n);
    return 0;
}

void finonnaci(int a)
{
    int initial = 0, second = 1, sum = 0;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",initial);
        sum = initial + second;
        initial = second;
        second = sum;
    }
    
}