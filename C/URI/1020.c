#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int year, month, day, rem;
    year = n / 365;
    rem = n % 365;
    month = rem / 30;
    rem = rem % 30;
    day = rem;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    return 0;
}