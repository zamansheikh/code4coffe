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


int main(){

    head = NULL;
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    return 0;



}