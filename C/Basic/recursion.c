#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int fun(int n) //4 //2 //0
{
    if (n == 0) //00
    {
        return 1; //00
    }
    else
    {
        return 7 + fun(n - 2); //2rec//0rec return8 retun7 to main
    }
}
int main()
{
    system("cls");
    printf("%d", fun(4));
    return 0;
}