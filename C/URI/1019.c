#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int min, hour, second, rem;
    hour = n / 3600;
    rem = n % 3600;
    min = rem / 60;
    rem = rem % 60;
    second = rem;
    printf("%d:%d:%d\n", hour, min, second);
    return 0;
}