#include <stdio.h>
#include <math.h>
int main()
{
    char Operator;
    float num1, num2, result;
    printf("WELCOME TO ZAMAN's CALCULATOR\n");
    printf("---------211-15-4031---------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &Operator, &num2);
    switch (Operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, Operator, num2, result);

    return 0;
    
}