#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//UserSnippetBy ZAMAN SHEIKH v0.1

int max();
void print();
void hprint();
int printfx();       //WANTED OUTPUT
int x, y, z = 0;     //1
int antiloop();      //0 1
int virusloop();     //0 1 0
                     //1 0 1 0
int virusloop(int y) //1 0 1 0 1
{
    if (y % 2 == 0)
    {
        z++;
        if (y % 2 == 0)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        };
    }
    else
    {
        if (y % 2 == 0)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        };
    }

    return y == 0 ? 0 : virusloop(y - 1);
}

int antiloop(int x)
{
    printf("\n");
    virusloop(z);
    z++;

    return x == 0 ? 0 : antiloop(x - 1);
}

void hprint()
{
    printf("How Many Row you Wanna PRINT: ");
}

int printfx()
{
    int n;
    scanf("%d", &n);
    x = n - 1;
}

void print()
{
    hprint();
    printfx();
    antiloop(x);
}
int main()
{
    print();
    return 0;
}