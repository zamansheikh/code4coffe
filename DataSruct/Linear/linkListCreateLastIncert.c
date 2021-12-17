#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
} *head;


void createList()
{
    int data;
    if (head == NULL)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = temp;
    }
}


int main()
{
    head = NULL;
    //insert at the end
    createList(head);
    return 0;
}