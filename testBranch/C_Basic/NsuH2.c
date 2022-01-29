#include <stdio.h>
int main()
{
    system ("cls"); //only for VS code user 
    //otherwise please delete this line
    printf("Input Something -\n");
    int xxV = 10;
    char input[xxV];
    scanf("%s",&input);
    int aa = 1;
    int bb = 1;
    int cc = 1;
    int dd = 1;

    int i ;
    for (i = 0; i < xxV; i++)
    {
        if (input[i] >=48 && input[i] <=57)
        {
            aa+2;
            //printf(" %s is a Digit",input);
        }
        else if (input[i] >=65 && input[i] <=90)
        {
            bb+2;
            //printf(" %s is a Uppercase Alphabet",input);
        }
        else if (input[i] >=97 && input[i] <=112)
        {
            cc+=2;
            //printf(" %s is a Lowercase Alphabet",input);;
        }
        else 
        {
            dd+=2;
        }
    }
    if ((aa == 1) && (bb == 1) && (cc == 1))
    {
        printf("Error\n");
    }
    else if((aa %2 ==1) && (bb ==1) && (cc ==1))
    {
        printf("%s is a digit\n",input);
    }
    else if((aa ==1) && (bb %2 ==1) && (cc ==1))
    {
        printf("%s is a All Is UpperCase\n",input);
    }
    else if((aa ==1) && (bb ==1) && (cc %2 ==1))
    {
        printf("%s is a All Is LowerCase\n",input);
    }
    else
    {
        printf("Error\n");
    }
    printf("\n");
    return 0;
}