#include <stdio.h>

#define MAX_SIZE 10
int top = -1;
int stack_Array[MAX_SIZE];

void push(int x)
{
    if (top < MAX_SIZE - 1)
    {
        top += 1;
        stack_Array[top] = x;
        printf("Item = %d ,Added Successfully ! \n", x);
    }
    else
    {
        printf("Exception! No Space !!\n");
    }
}

void pop()
{
    if (top >= 0)
    {
        int val = stack_Array[top];
        top -= 1;
        printf("Item = %d ,Removed Successfully ! \n", val);
    }
    else
    {
        printf("Exception from pop_stack! Empty Stack!");
    }
}

void peek()
{
    if (top >= 0)
    {
        printf("The Peeked Item is = %d\n", stack_Array[top]);
    }
    else
        printf("No Item in this Stack\n");
}

int main()
{
    while (1)
    {
        printf("Press 1 for Push\nPress 2 for POP\nPress 3 for Peek\n");
        int press = 0; scanf("%d", &press);
        if (press == 1)
        {
            printf("Input Data : ");
            int data;
            scanf("%d", &data);
            push(data);
        }
        else if (press == 2) pop();
        else if (press == 3) peek();
        else printf("Invalid Input\n");
    }
    return 0;
}