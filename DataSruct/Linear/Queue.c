//queue
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int front = 0;
int rear = -1;
int queue_Array[MAX_SIZE];

void enqueue(int x)
{
    if (rear < MAX_SIZE - 1)
    {
        rear += 1;
        queue_Array[rear] = x;
        printf("Item = %d ,Added Successfully ! \n", x);
    }
    else
    {
        printf("Exception! No Space !!\n");
    }
}

void dequeue()
{
    if (rear >= 0)
    {
        printf("Item = %d ,Removed Successfully ! \n", queue_Array[0]);
        for (int i = 0; i < rear; i++)
        {
            queue_Array[i] = queue_Array[i+1];
        }
        rear -= 1;
    }
    else
    {
        printf("Exception from pop_stack! Empty Stack!");
    }
}

void peek()
{
    if (front >= 0)
    {
        printf("The Peeked Item is = %d\n", queue_Array[front]);
    }
    else
        printf("No Item in this Queue\n");
}

int main()
{
    while (1)
    {
        printf("Press 1 for Enqueue\nPress 2 for Dequeue\nPress 3 for Peek\n");
        int press = 0; scanf("%d", &press);
        if (press == 1)
        {
            printf("Input Data : ");
            int data;
            scanf("%d", &data);
            enqueue(data);
        }
        else if (press == 2) dequeue();
        else if (press == 3) peek();
        else printf("Invalid Input\n");
    }
    return 0;
}