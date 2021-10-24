#include <stdio.h>
#include <stdlib.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    system ("cls");
    int i;
    int * ptr = (int *)malloc(2*sizeof(int));
    if (ptr == NULL)
    {
        printf("The memory allocation failed!\n");
        exit(1);
    }
    printf("Enter two Number\n");
    for ( i = 0; i < 2; i++)
    {
        scanf("%d", ptr + i);
    }
    ptr = (int *)realloc(ptr,4*sizeof(int));
    if (ptr == NULL)
    {
        printf("The memory allocation failed!\n");
        exit(1);
    }
    printf("Enter two more number\n");
    for ( i = 2; i < 4; i++)
    {
        scanf("%d", ptr + i);
    }
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",*ptr);
    }
    
    return 0;
}