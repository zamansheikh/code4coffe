#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    int i, sum = 0,rem, number;
    printf("Enter e Number: ");
    scanf("%d", &number);
    for ( i = 1; i < number; i++)
    {
        rem = number%i;
        if ( rem == 0 )
        {
            sum += i;
        }
    }
    if (sum == number) printf("The Number is perfect\n");
    else printf("The number is not perfect");
    return 0;
}