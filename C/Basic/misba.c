//header
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n], flag = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", array[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum += array[j];
    }
    

    for (int k = 2; k <= sum / 2; ++k)
    {
        // condition for non-prime
        if (sum % k == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Sum of all element is a prime number.\n");
    else
        printf("Sum of all element is not a prime number.\n");

    return 0;
}