#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int factorial(int n) //5 4 3 2 1
{
    if (n == 1) 
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
        /* 5 * 24 //main e
        4 * 6
        3 * 2
        2 * 1 */
    }
    
    
}
int main()
{
    system ("cls");
    printf("\n");
    int number;
    printf("Input Number: ");
    scanf("%d",&number);
    printf("%d",factorial(number)); //factorial
    return 0;
}