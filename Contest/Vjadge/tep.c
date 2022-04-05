#include <stdio.h>
int main()
{
    const int n;
    scanf("%d", &n);
    int age[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    int j;
    int count = 0;
    for (j = 0; j < n; j++)
    {
        if (age[j] >= 13 && age[j] <= 19)
        {
            count++;
        }
    }
    printf("Teenage: %d", count);
    return 0;
}