#include <stdio.h>
int main()
{
    //find the sum from series 1 + 10 + 20 + 200 + 400;/5\\631

    int sum = 1;
    int n = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = 1;
    if (n == 1)
    {
        printf("%d\n", sum);
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += temp * 2;
                temp *= 2;
            }
            else
            {
                sum += temp * 10;
                temp *= 10;
            }
        }
        printf("The sum is: %d\n", sum);
    }
    return 0;
}