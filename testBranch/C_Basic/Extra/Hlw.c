#include <stdio.h>
int main()
{
    int i,j, space, rows,k;
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        for (space = 1,k=0; space <= rows; ++space,k++)
        {
            printf("  ");
        }
        for (j = 1;j <= k; j++)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}