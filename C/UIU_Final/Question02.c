#include <stdio.h>

int main()
{
    int mark;
    scanf("%d", &mark);
    if ( mark < 0 || mark > 100)
    {
        printf("Error\n");
    }
    else if ( mark >= 80 && mark <=100){
        printf("A\n");
    }
    else if ( mark >= 65 && mark < 79)
    {
        printf("B\n");
    }
    else if ( mark >= 50 && mark < 65)
    {
        printf("C\n");
    }
    else if ( mark >= 35 && mark < 50)
    {
        printf("D\n");
    }
    else if ( mark >= 0 && mark < 35)
    {
        printf("F\n");
    }
    
    return 0;
}