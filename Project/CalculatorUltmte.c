#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1

int main()
{
    int i, number, new;
    int sum = 0;
    char operator, backup;
    for (i = 0; i < 1000; i++)
    {
        scanf("%d", &number);
        fflush(stdin);
        backup = operator;
        scanf("%c", &operator);
        if (operator== '/')
        {
            sum /= number;
        }
        else if (operator== '+')
            sum += number;

        else if (operator== '-')
            sum -= number;

        else if (operator== '*')
            sum *= number;
        else if (operator== '=')
        {
            break;
        }
    }
    if (backup == '/')
    {
        sum /= number;
    }
    else if (backup == '+')
        sum += number;

    else if (backup == '-')
        sum -= number;

    else if (backup == '*')
        sum *= number;
    printf("%d", sum);
    return 0;
}
//operator =='+' ? sum+=num: break;