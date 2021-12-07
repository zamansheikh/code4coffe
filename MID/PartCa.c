//Convert Expression 2/ (1*1- (1+5^4)/0)*3+1*1 to postfix and prefix using stack
//ID: 211-15-4031
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char exp[100];
    char postfix[100];
    char prefix[100];
    char stack[100];
    int top = -1;
    int i,j,k;
    printf("Enter the expression\n");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]>='0' && exp[i]<='9')
        {
            postfix[i]=exp[i];
            prefix[i]=exp[i];
        }
        else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
        {
            postfix[i]=' ';
            prefix[i]=' ';
            stack[++top]=exp[i];
        }
        else if(exp[i]=='^')
        {
            postfix[i]=' ';
            prefix[i]=' ';
            stack[++top]='^';
        }
        else if(exp[i]=='(')
        {
            postfix[i]=' ';
            prefix[i]=' ';
            stack[++top]='(';
        }
        else if(exp[i]==')')
        {
            postfix[i]=' ';
            prefix[i]=' ';
            while(stack[top]!='(')
            {
                postfix[i]=stack[top];
                prefix[i]=stack[top];
                top--;
                i++;
            }
            top--;
        }
    }
    while(top!=-1)
    {
        postfix[i]=stack[top];
        prefix[i]=stack[top];
        top--;
        i++;
    }
    printf("Postfix Expression is\n");
    for(j=0;postfix[j]!='\0';j++)
    {
        printf("%c",postfix[j]);
    }
    printf("\nPrefix Expression is\n");
    for(k=i-1;k>=0;k--)
    {
        printf("%c",prefix[k]);
    }

    //Evaluate the value of above postfix.ans ni part 3 B
    int num1,num2,result;
    char op;
    top=-1;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(postfix[i]>='0' && postfix[i]<='9')
        {
            stack[++top]=postfix[i];
        }
        else
        {
            num2=stack[top]-'0';
            top--;
            num1=stack[top]-'0';
            top--;
            switch(postfix[i])
            {
                case '+':
                    result=num1+num2;
                    break;
                case '-':
                    result=num1-num2;
                    break;
                case '*':
                    result=num1*num2;
                    break;
                case '/':
                    result=num1/num2;
                    break;
                case '^':
                    result=pow(num1,num2);
                    break;
            }
            stack[++top]=result+'0';
        }
    }
    printf("\nResult is %d",stack[top]-'0');


    return 0;
}