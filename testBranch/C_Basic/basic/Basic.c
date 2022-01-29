#include <stdio.h>
int value();
int main()
{
    int abc = 0;
    for (value(); value() ; value())
    {
        printf("%d ",abc);
        abc++;

    }
    

    return 0; 
}
int value()
{
    static int number = 21; //loop =(Loop *2) +1
    return number--;
}