//uri 1043
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, h;
    scanf("%f %f %f", &a, &b, &h);
    if (a + b > h && h > abs(a - b))
        printf("Perimetro = %.1f\n", (a * b));
    else
    {

        printf("Area = %.1f\n", (a + b) * h / 2);
    }

    return 0;
}