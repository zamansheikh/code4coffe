#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int res = n/ 100;
    printf ("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", res);
    n = n - res*100;
    res = n/50;
    printf("%d nota(s) de R$ 50,00\n", res);
    n = n - res*50;
    res = n/20;
    printf("%d nota(s) de R$ 20,00\n", res);
    n = n - res*20;
    res = n/10;
    printf("%d nota(s) de R$ 10,00\n", res);
    n = n - res*10;
    res = n/5;
    printf("%d nota(s) de R$ 5,00\n", res);
    n = n - res*5;
    res = n/2;
    printf("%d nota(s) de R$ 2,00\n", res);
    n = n - res*2;
    res = n/1;
    printf("%d nota(s) de R$ 1,00\n", res);
    return 0;
}