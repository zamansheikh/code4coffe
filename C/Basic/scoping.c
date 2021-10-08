#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//Solve: Static Scoping Ans 3 1 , Dynamic Scoping Ans 3 4 
int a, b; // b=1, a =3

void print() // fun2
{
    printf("%d %d", a, b);
}

int fun1() //main function
{
    int a, c;
    a = 0; b = 1; c = 2;
    return c; // 2
}
void fun2() //main function
{
    int b;
    a = 3; b = 4;
    print();
}
int main()
{
    system ("cls");
    a = fun1(); //2
    fun2();
    return 0; 
}