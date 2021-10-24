#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    int number, exponent, expo;
    printf("Enter the Number then Power : ");
    scanf("%d %d", &number, &exponent);
    expo = exponent;
    int temp = number; //base
    double result = 1.0;
    if (exponent > 0)
    {
        while (exponent != 0)
        {
            result = result * number;
            exponent--;
        }
        printf("%d the pow %d is = %.10f \n", temp, expo, result);
    }
    else
    {

        while (exponent != 0)
        {
            result = result *(1.0 / number);
            exponent++;
        }
        printf("%d the pow %d is = %.10f \n", temp, expo, result);
    }

    return 0;
}