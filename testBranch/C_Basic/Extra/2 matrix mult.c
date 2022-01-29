#include<stdio.h>
#include<string.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0;
    
    printf("Enter the nember of row and column for the first matrix :\n");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter the nember of row and column for the second matrix :\n");
    scanf("%d %d",&r2,&c2);
    
    int a1[r1][c1], a2[r2][c2], result[r1][c2];
    
    
    while(c1 != r2)
    {
    printf("Wrong Input!! \n plese input row and column again...");
    
    printf("Enter the nember of row and column for the first matrix :\n");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter the nember of row and column for the second matrix :\n");
    scanf("%d %d",&r2,&c2);
    }
    
    printf("Enter elements for first matrix\n");
    
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1 ; j++)
        {
            scanf("%d",&a1[i][j]);
        }
     }
       
    printf("Enter elemenrs for second matrix\n");   
    
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2 ; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
            sum = sum + a1[i][k] * a2[k][j] ;
            }
            result[i][j] = sum ;
            sum = 0 ;
        }
    }
    
    /* result matrix */
    printf("the result martix is:\n");
    for(i=0 ;i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}