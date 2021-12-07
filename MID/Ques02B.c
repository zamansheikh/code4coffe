#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char d;
    struct node *e;
    struct node *f; 
}*head;


void createList(char d);
void lastInsert(char d);
void displayList();
int countNodes();

int main()
{

    int n, data, position;

    createList('D');
    createList('J');
    //NODE NODE IN qUESTION 2B
    printf("\nData in the list \n");
    displayList();
    //insert last
    lastInsert('M');
    printf("\nData in the list \n");
    displayList();

    printf("\nTotal Nodes : %d",countNodes());

    return 0;
}

//create list
void createList(char d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->d = d;
    temp->e = NULL;
    temp->f = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while(p->f != NULL)
        {
            p = p->f;
        }
        p->f = temp;
    }
}

//create a function for last insert
void lastInsert(char d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->d = d;
    temp->e = NULL;
    temp->f = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while(p->f != NULL)
        {
            p = p->f;
        }
        p->f = temp;
    }
}

//display the list
void displayList()
{
    struct node *p;
    p = head;
    while(p != NULL)
    {
        printf("\nData = %c\n",p->d);
        p = p->f;
    }
}

//count the number of nodes in the list
int countNodes()
{
    int count = 0;
    struct node *p;
    p = head;
    while(p != NULL)
    {
        count++;
        p = p->f;
    }
    return count;
}