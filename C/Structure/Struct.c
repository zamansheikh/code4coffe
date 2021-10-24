#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    int note;
    scanf("%d", &note);
    printf("%d nota(s) de R$ 100,00\n", note / 100);
    note %= 100;
    printf("%d nota(s) de R$ 50,00\n", note / 50);
    note %= 50;
    printf("%d nota(s) de R$ 20,00\n", note / 20);
    note %= 20;
    printf("%d nota(s) de R$ 10,00\n", note / 10);
    note %= 10;
    printf("%d nota(s) de R$ 5,00\n", note / 5);
    note %= 5;
    printf("%d nota(s) de R$ 2,00\n", note / 2);
    note %= 2;
    printf("%d nota(s) de R$ 1,00\n", note / 1);
    return 0;
}