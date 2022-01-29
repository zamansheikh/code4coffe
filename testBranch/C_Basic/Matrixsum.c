#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
#define abc 5
int main()
{
    system("cls");
    int array[abc][abc];
    int i, j;
    for (i = 0; i < abc; i++)
    {
        for (j = 0; j < abc; j++)
        {
            printf("Input Row %d Collum %d Value:\n", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }
    int sumrow = 0;
    int sumcol = 0;
    for (i = 0; i < abc; i++)
    {
        for (j = 0; j < abc; j++)
        {
            sumrow = sumrow + array[i][j];
        }
        printf("The sum of the first row = %d \n", sumrow);
        sumrow = 0;
    }
    for (j = 0; j < abc; j++)
    {
        for (i = 0; i < abc; i++)
        {
            sumcol = sumcol + array[i][j];
        }
        printf("The sum of the first col = %d \n", sumcol);
        sumcol = 0;
    }
    return 0;
}