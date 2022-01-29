#include <stdio.h>
#include <stdlib.h>

int brackets(int abc)
{
    int i;
    float xyz = 0;
    for (i = 1; i <= abc; i++)
    {
        xyz = xyz + i;
    };
    xyz = 1 / xyz;
    return (xyz);
}

int main()
{
    int n = 4;
    float x = brackets(n);

    printf("%f", x);
    /*
    scanf("%d",&n);
    float xxx;
    for (int i = 1; i <= n ; i++)
    {
        xxx = xxx + brackets(n);

    }
    printf("the result is %.2f ", sum); */
    
    return 0;
}