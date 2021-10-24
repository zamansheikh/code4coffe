#include <stdio.h>
#include <math.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int withoutOperator(int , int);

int main()
{
    printf("Input Two Number: \n");
    int a , b ;
    scanf("%d %d", &a, &b);
    printf("The sum is %d\n",withoutOperator(a,b));

    return 0;
}

int withoutOperator(int a, int b)
{
    int absh = abs(b);
    while (absh != 0)
    {
        if (b < 0 )
        {
            a--;
            absh--;
            continue;
        }
        a++;
        absh--;
    }
    return a;
    
}