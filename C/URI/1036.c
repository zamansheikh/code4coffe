#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, pos, neg;
    scanf("%lf %lf %lf", &a, &b, &c);
    pos = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
    neg = (-b - sqrt((pow(b, 2) - 4 * a * c)))/ (2 * a);
    if ((a != 0 )&& (sqrt((pow(b, 2) - 4 * a * c))) > 0 )
    {
        printf("R1 = %.5lf\n", pos);
        printf("R2 = %.5lf\n", neg);
    }
    else printf("Impossivel calcular\n");
    return 0;
}