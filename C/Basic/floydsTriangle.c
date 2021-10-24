#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    int rows, n = 1;
    printf("Enter the row : ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
        
    }
    
    return 0;
}