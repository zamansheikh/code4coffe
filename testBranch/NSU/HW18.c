#include <stdio.h>

int main()
{
    float a[30], num, small, avg, sum = 0;

    printf("\nHow many Input :\n");
    scanf("%f", &num);
    printf("\nInput number :");
    int i;
    for (i = 0; i < num; i++)
        scanf("%f", &a[i]);

    // find avg

    for (i = 0; i < num; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / num;
    // Avarage
    small = a[0];

    for (i = 0; i < num; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }

    printf("Avarage : %.2f\n", avg);

    for (i = 0; i < num; i++)
    {
        if (a[i] < avg)
        {
            printf("\nArray No: [%d] = %.2f is smaller than Avarage = %.2f\n",i,a[i],avg);
        }
    }

    return 0;
}