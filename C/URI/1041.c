#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x > 0 && y > 0 )
        printf("Q1\n");
    else if (x > 0 && y < 0 )
        printf("Q4\n");
    else if (x < 0 && y < 0 )
        printf("Q3\n");
    else if (x < 0 && y > 0)
        printf("Q2\n");
    else if (x == 0 && y != 0)
        printf("Eixo Y\n");
    else if (x != 0 && y == 0)
        printf("Eixo X\n");

    return 0;
}