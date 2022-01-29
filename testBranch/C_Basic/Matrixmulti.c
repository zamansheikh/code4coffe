#include <stdio.h>
#define MAX 50

int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;
    //part 1
    printf("Enter the rows and column of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the Element of the Matrix a: ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and column of the Matrix b: ");
    scanf("%d %d", &brows, &acolumns);

    if(brows != acolumns)
    {
        printf("Sorry ! We can't multiply the matrix a & b \n ");

    }
    else{
        printf("Enter the elements of matrix b: \n");
        for(i =0; i < brows; i++)
        {
            for(j = 0; j < bcolumns; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\n");

    
    for


}