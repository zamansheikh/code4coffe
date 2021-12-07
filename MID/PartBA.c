#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int md;
    struct node *shamsuzzaman; 
}*head;


void createList(int data);
void displayList();
void searchData();


int main()
{

    int n, data, position;

    createList(8);
    createList(3);
    createList(6);
    createList(9);
    //display
    printf("\nData in the list \n");
    displayList();
    //search
    searchData();

    printf("\nData in the list \n");
    displayList();

    return 0;
}

//create node function
void createList(int data)
{
    struct node *temp, *ptr;
    int i;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->md = data;
    temp->shamsuzzaman = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->shamsuzzaman != NULL)
        {
            ptr = ptr->shamsuzzaman;
        }
        ptr->shamsuzzaman = temp;
    }
}




//displayList
void displayList()
{
    struct node *temp;

   
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("\nData = %d \n", temp->md); 
            temp = temp->shamsuzzaman;                 
        }
    }
}


//search data in the list & delete it
void searchData()
{
    int input;
    printf("What data do you want to find?\n$ ");
    scanf("%d", &input);

    struct node *temp = head, *delete;

    while(temp!=NULL){
        if(temp->md==input){
            printf("%d found!", input);
            printf("\nNext node with data %d has been deleted!", temp->shamsuzzaman->md);
            break;
        }
        temp=temp->shamsuzzaman;
    }

    delete = temp->shamsuzzaman;
    temp->shamsuzzaman = temp->shamsuzzaman->shamsuzzaman;
    free(delete);
}
