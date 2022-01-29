#include <stdio.h>
#include <stdbool.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//FIFO
//It's a Stack by C Code
#define CAPACITY 5
int queuearray[CAPACITY];
int front =0, rear = -1, totalItem =0;
void enqueue(int x)
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
int dequeue()
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


int main()
{
    system("cls");
    printf("Lets Implimanting My Queue in C\n");
    push_stack(10);
    push_stack(10);
    push_stack(30);
    pop_stack();
    push_stack(10);

    return 0;
}