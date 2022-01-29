#include <stdio.h>

int main()
{

    /* local variable definition */
    printf("\nInput number\n");
    int a;
    scanf("%d", &a);

    /* do loop execution */
    while (a < 20)
    {
        printf("value of a: %d\n", a);
        a = a + 1;
    }

    return 0;
}