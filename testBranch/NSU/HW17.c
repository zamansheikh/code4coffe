#include <stdio.h>

int main()
{
    int a[30], i, num = 10, small;

    printf("\nInput 10 number :");

    for (i = 0; i < num; i++)
        scanf("%d", &a[i]);

    small = a[0];

    for (i = 0; i < num; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("Smallest Number : %d\n", small);
    for (i = 0; i < num; i++)
    {
        if (a[i] == small)
        {
            int temp = a[0];
            a[0] = a[i];
            a[i] = temp;
            printf("1st Element after replace = %d\n2nd/Swap Element = %d\n", a[0], a[i]);
        }
    }

    return 0;
}