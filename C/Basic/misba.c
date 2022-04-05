#include <stdio.h>
int main()
{
    double i, a, b, j;

    for (i = 0; i <= 2; i = i + 0.2)
    {
        if (i == 0 || i == 1.0 || (compare_float (i, 2.0)))
        {
            for (j = 1.0; j <= 3.0; j++)
            {
                printf("I= %.0lf\n", i);
            }
        }
    }
}