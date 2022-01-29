/*ZAMAN
ans 03*/
#include <stdio.h>
int main()
{
    char op;
    int A, B;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%s", &op);
    printf("Enter 1st and 2nd number: ");
    scanf("%d%d", &A,&B);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d", A, B, A + B);
        break;
    case '-':
        printf("%d - %d = %d", A, B, A - B);
        break;
    case '*':
        printf("%d * %d = %d", A, B, A * B);
        break;
    case '/':
        printf("%d / %d = %d", A, B, A / B);
        break;
    case '%':
        printf("%d modu %d =%d", A, B, A % B);
        break;
    default:
        printf("operator is not correct");
    }

    return 0;
}