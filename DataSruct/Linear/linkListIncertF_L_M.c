#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


struct node {
    int data;
    struct node *next;
} *head;


struct node * createNode( int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return *newNode;
}

void insertFirst(int data)
{
    struct node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void insertLast(int data)
{
    struct node *newNode = createNode(data);
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAfter(int data, int key)
{
    struct node *newNode = createNode(data);
    struct node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;//vip
    temp->next = newNode; //vip
}

void deleteFirst()
{
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteLast()
{
    struct node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteKey(int key)
{
    struct node *temp = head;
    struct node *temp2 = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    while (temp2->next != temp)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp->next;
    free(temp);
}

void printList()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteAll()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        head = head->next;
        free(temp);
        temp = head;
    }
}

int main(){

    head = NULL;
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    return 0;



}