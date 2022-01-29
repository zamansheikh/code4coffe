#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

//UserSnippetBy ZAMAN 211-15-4031

int max();
void print();
void hprint();
int printfx();                       //WANTED OUTPUT
int x, y = 0, z = 1;                 //1
int antiloop();                      //0 1
int virusloop();                     //0 1 0
int antivirus();                     //1 0 1 0
                                     //1 0 1 0 1
void printoff();
void printon();

void printoff(){
    printf("0 ");
    z++;
}

void printon(){
    printf("1 ");
    z++;
}



int virusloop(int y)
{
    z % 2 == 0 ? printoff() : printon();
    return y == 0 ? 0 : virusloop(y - 1);
}

int antiloop(int x)
{
    printf("\n");
    virusloop(y);
    y++;;
    
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
    x = n-1;
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