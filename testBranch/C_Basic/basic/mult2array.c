#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
#define MAX 50
int main()
{
    system ("cls");
    int i, j, k;
    printf("Input 1st Matrix =>>\n");
    printf("How many rows ?\n");
    int arow = 0;
    scanf("%d", &arow);
    printf("How many columns ?\n");
    int acolumn = 0;
    scanf("%d", &acolumn);
    int MatxA[MAX][MAX];

    for ( i = 0; i < arow; i++)
    {
        printf("\nInput the No: %d Rows Value ->\n", i + 1);
        for (j = 0; j < acolumn; j++)
        {
            scanf("%d", &MatxA[i][j]);
        }
        
    }

    printf("Input 2nd Matrix =>>\n");
    printf("How many rows ?\n");
    int brow = 0;
    scanf("%d", &brow);
    printf("How many columns ?\n");
    int bcolumn = 0;
    scanf("%d", &bcolumn);
    int MatxB[MAX][MAX];

    for ( i = 0; i < brow; i++)
    {
        printf("\nInput the No: %d Rows Value ->\n", i + 1);
        for ( j = 0; j < bcolumn; j++)
        {
            scanf("%d", &MatxB[i][j]);
        }
        
    }
    
    int ResultMAT[MAX][MAX];
    int sum = 0;

    for ( i = 0; i < arow; i++)
    {
        for ( j = 0; j < bcolumn; j++)
        {
            for ( k = 0; i < brow; i++)
            {
                sum += MatxA[i][k] * MatxB[k][j];
            }
            
            ResultMAT[i][j] = sum;
            sum = 0;
        }
        
    }

    for ( i = 0; i < arow; i++ )
    {
        printf("\nOutPut the No: %d Rows Value ->\n", i + 1);
        for ( j = 0; j < bcolumn; j++)
        {
            printf("%d ",ResultMAT[i][j]);
        }
        
    }

    return 0;
}