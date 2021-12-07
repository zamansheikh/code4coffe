#include <stdio.h>
#include <stdlib.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//Global Structure
struct node
{
    int data;
    struct node *next;
} * head, *end, *tail;

//Function Prototypes
void insert();
void insertOk(int);
void disSerial();
void deleteFirst();
void deleteAll();
void dellAll();
void display();
void deleteLast();
void deletePos(int);


int main()
{
home:
    system("cls");
    printf("==================Welcome to Nude/Link\n");
    printf("==================Choise Option for Link Babe\n");
    printf("==================Choice I for Input\n==================Choice D for Delete\n==================Choice S for Show All\n==================Choice E for Exit\n");

    printf("====================================\n");
    printf("==>: ");
    int choice = toupper(getch());
    if (choice == 'I')
    {
        insert();
        goto home;
    }
    else if (choice == 'D')
    {
        deleteAll();
        goto home;
    }
    else if (choice == 'S')
    {
        disSerial();
        display();
        getch();
        goto home;
    }
    else if (choice == 'E')
    {
        system("cls");
        printf("Welcome to boxchod worlds\n");
    }
    else goto home;
}

void insert()
{
    int num;
    printf("How many Node you wanna Insert\n");
    scanf("%d", &num);
    insertOk(num);
    disSerial();
}

void insertOk(int num)
{
    printf("Node is Creating\n");
    int data = 0;
    struct node *newNode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory error\n");
    }
    else
    {
        printf("Enter the data of 1 No Node\n");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (int i = 2; i <= num; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if (newNode == NULL)
            {
                printf("Memory Error\n");
            }
            else
            {
                printf("Enter the data of %d No Node\n", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = newNode;
            }
        }
    }
    printf("Link List Created Successfully\n");
}

void display()
{
    struct node *temp;
    //system("cls");
    printf("********************************\n");
    disSerial();
    printf("We are displaying\n");
    if (head == NULL)
    {
        printf("There are no Nude Bainchud\n");
    }
    else
    {
        temp = head;
        int count = 1;
        while (temp != NULL)
        {
            printf("Data of No %d Node : ", count);
            printf("%d\n", temp->data);
            temp = temp->next;
            count++;
        }
    }
    //getch();
}

void disSerial()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        temp = head;
        printf("Total Node: ");
        int count = 1;
        while (temp != NULL)
        {
            printf("%d ",count);
            temp = temp->next;
            count++;
            
        }
        printf("\n");
    }
}

deleteAll()
{
    back:
    printf("Available Nodes in Project\n");
    disSerial();
    display();
    printf("to deleteAll choice D\nFirst for F\nLast for L\nPosition for P\nPress Q for Exit\n");
    
    printf("==>: ");
    int choice = toupper(getch());
    if (choice == 'D')
    {
        dellAll();
        goto back;
    }
    else if (choice == 'F')
    {
        deleteFirst();
        goto back;
    }
    else if (choice == 'L')
    {
        deleteLast();
        goto back;
    }
    else if (choice == 'P')
    {
        int num0;
        scanf("%d",&num0);
        deletePos(num0);
        goto back;

    }
    else if (choice == 'Q')
    return;
    else goto back;
    }

void deleteFirst()
{
    struct node * temp, * del;
    del = head;
    temp = head ->next;
    head = temp;
    free(del);

}
//create function for delete last node
void deleteLast()
{
    struct node * temp, * del;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    del = temp;
    temp = temp->next;
    free(del);
}
//delete node by position
void deletePos(int num)
{
    struct node * temp, * del;
    temp = head;
    for (int i = 1; i < num; i++)
    {
        temp = temp->next;
    }
    del = temp;
    temp = temp->next;
    free(del);
}
//delete all node
void dellAll()
{
    struct node * temp, * del;
    temp = head;
    while (temp != NULL)
    {
        del = temp;
        temp = temp->next;
        free(del);
    }
    head = NULL;
}
