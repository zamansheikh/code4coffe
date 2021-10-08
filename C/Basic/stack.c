#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//LIFO
//It's a Stack by C Code
#define CAPACITY 3
int stackarray[CAPACITY];
int top = -1;
void push_stack(int x)
{
    if (top < CAPACITY - 1)
    {
        top += 1;
        stackarray[top] = x;
        printf("Item = %d ,Added Successfully ! \n", x);
    }
    else
    {
        printf("Exception! No Space !!\n");
    }
}
int pop_stack()
{
    if (top>= 0)
    {
        int val = stackarray[top];
        top -= 1;
        return val;
    }
    else
    {
        printf("Exception from pop_stack! Empty Stack!");
        return -1;
    }
}

int peek_stack()
{
    if (top>= 0)
    {
        return stackarray[top];
    }
    else
    {
        printf("Exception from peek_stack! Empty Stack!");
        return -1;
    }
    
    
}
int main()
{
    system("cls");
    printf("Implimanting My Stack in C\n");
    push_stack(10);
    push_stack(10);
    push_stack(30);
    pop_stack();
    push_stack(10);

    return 0;
}