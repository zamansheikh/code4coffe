#include <stdio.h>
int main()
{
    printf("How much Unit?\n");
    int unit;
    float TexHex, nextHex;
    scanf("%d", &unit);
    if (unit > 0 && unit <= 250)
    {
        nextHex = 4.5 * unit;
        if (nextHex < 90)
        {
            printf("Total Bill = 90 TK");
        }
        else
        {
            printf("Total Bill = %.2f TK\n", nextHex);
        }
    }
    else if (unit > 250)
    {
        TexHex = 7 * unit;
        if (TexHex < 90)
        {
            printf("Total Bill = 90 TK");
        }
        else
        {
            printf("Total Bill = %.2f TK\n", TexHex);
        }

    }
    else
    {
        printf("Total Bill = Error\n");
    }

    printf("\n");
    return 0;
}