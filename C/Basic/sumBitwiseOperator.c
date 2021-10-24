#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int adder(int, int);

int main()
{
    int a, b;
    printf("Input Two Number: \n");
    scanf("%d %d", &a, &b);
    int sum = adder(a, b);
    printf("The sum is : %d\n", sum);
    return 0;
}

int adder(int a, int b)
{
    int sum, carry;
    while (b != 0)
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return a;
}
