#include <stdio.h>
int main()
{
    int n;
    double rem;
    scanf("%lf", &rem);
    n = rem;
    printf("NOTAS:\n");
    int res = n/ 100;
    printf("%d nota(s) de R$ 100.00\n", res);
    n = n - res*100;
    res = n/50;
    printf("%d nota(s) de R$ 50.00\n", res);
    n = n - res*50;
    res = n/20;
    printf("%d nota(s) de R$ 20.00\n", res);
    n = n - res*20;
    res = n/10;
    printf("%d nota(s) de R$ 10.00\n", res);
    n = n - res*10;
    res = n/5;
    printf("%d nota(s) de R$ 5.00\n", res);
    n = n - res*5;
    res = n/2;
    printf("%d nota(s) de R$ 2.00\n", res);
    n = n - res*2;
    res = n/1;
    printf("MOEDAS:\n");    
    printf("%d moeda(s) de R$ 1.00\n", res);
    res = rem;
    double poysha = rem -res;
    res = poysha *100;
    n = res;
    res = n/50;
    printf("%d moeda(s) de R$ 0.50\n", res);
    n = n - res*50;
    res = n/25;
    printf("%d moeda(s) de R$ 0.25\n", res);
    n = n - res*25;
    res = n/10;
    printf("%d moeda(s) de R$ 0.10\n", res);
    n = n - res*10;
    res = n/5;
    printf("%d moeda(s) de R$ 0.05\n", res);
    n = n - res*5;
    res = n/1;
    printf("%d moeda(s) de R$ 0.01\n", res);
    return 0;

}
