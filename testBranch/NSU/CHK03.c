#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    system ("cls");
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}