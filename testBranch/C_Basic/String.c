#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* struct node //data type
    {
        int i;
        char c;
        struct node *ptr;
    }abc[20]; */
int main()
{

    int abc[10] = {0}, i;
    int N;
    scanf("%d", &N);
    int rev;
    while (N > 0)
    {
        rev = N % 10;
        if (abc[rev] == 1)
        {
            break;
        }
        else
        {
            abc[rev] = 1;
            N = N / 10;
        }
    };
    if (N == 0)
    {
        printf("No\n");                     
    }
    else
    printf("Yes\n");
    
    return 0;
}
