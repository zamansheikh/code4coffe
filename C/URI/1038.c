//snacks
#include <stdio.h>

int main()
{
    float a1= 4.00, a2 =4.50, a3 = 5.00, a4 = 2.00, a5 = 1.50;
    int n1, n2;
    float total = 0;
    scanf("%d %d", &n1, &n2);
    if ( n1 == 1)
    {
        total =a1* n2;
        printf("Total: R$ %.2f\n", total);
    }
    else if (n1 == 2)
    {
        total = a2* n2;
        printf("Total: R$ %.2f\n", total);
    }
    else if (n1 == 3)
    {
        total = a3* n2;
        printf("Total: R$ %.2f\n", total);
    }
    else if (n1 == 4)
    {
        total = a4* n2;
        printf("Total: R$ %.2f\n", total);
    }
    else if (n1 == 5)
    {
        total = a5* n2;
        printf("Total: R$ %.2f\n", total);
    }
    return 0;
}
