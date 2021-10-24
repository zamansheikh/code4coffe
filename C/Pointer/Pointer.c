#include <stdio.h>
#include <stdlib.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int *input()
{
    int *ptr = (int *)malloc(4 * sizeof(int));
    if (ptr == NULL)
    {
        printf("The memory allocation failed!\n");
        exit(1);
    }
    printf("Input four Integer\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",ptr + i);
    }
    return ptr;
}
int main()
{
    system("cls");
    int * ptr = input();
    if (ptr == NULL)
    {
        printf("The memory allocation failed!\n");
        exit(1);
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += *ptr +i;
    }
    printf("Total Sum = %d\n",sum);
    free(ptr);
    ptr = NULL;
    return 0;
}