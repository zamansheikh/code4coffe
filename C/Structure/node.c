#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;

void create(int n);
void add(int data);
void display();
int main()
{
    struct node *head;
    int n, data;
    printf("HOW MANY NODES DO YOU WANT : ");
    scanf("%d", &n);
    create(n);
    printf("Data in the list : \n");
    display();

    printf("\nenter the data you want to inseart in the end: ");
    scanf("%d", &data);
    add(data);
    printf("THE FINAL LIST ");
    display();
    return 0;
}
void create(int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    struct node *temp, *newnode;
    int i, data;

    if (head == NULL)
    {
        printf("memory problem");
    }
    else
    {
        printf("1 NO data : ");
        scanf("%d", &data);
        head->link = NULL;
        head->data = data;
        temp = head;

        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("memory problem:");
            }
            else
            {
                printf("%d no-- data : ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->link = NULL;

                temp->link = newnode;
                temp = temp->link;
            }
        }
        printf("data entry successful");
    }
}
void add(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    newnode->data = data;
    newnode->link = NULL;
    temp = head;

    while (temp->link != NULL)
    {
        //printf("%d no data is : %d",i,temp->data);
        temp = temp->link;
    }
    temp->link = newnode;
    printf("DATA ENTWER SUCCECC\n");
}
void display()
{

    struct node *temp;
    if (head == NULL)
    {
        printf("display error\n");
    }
    else
    {
        int count = 1;
        temp = head;
        while (temp != NULL)
        {
            printf("%d no data = %d \n", count, temp->data);
            temp = temp->link;
            count++;
        }
    }
}

// #include <stdio.h>
// #include <stdlib.h>
// //head node create for controlling
// struct node {
//     int data;
//     struct node * next;
// }*head;

// //create a node creator function
// int creator( int n);
// //int lastInsert( int n);
// void view();

// int main()
// {
//     int n;
//     printf("How many node you wanna create?");
//     scanf("%d",&n);
//     creator(n);
//     view();

//     return 0;

// }

// int creator( int n)
// {
//     head = (struct node *)malloc(sizeof(struct node));
//     struct node * temp ;
//     temp = head;
//     if (head = NULL)
//     {
//         printf("Your Memory is full\n");
//     }
//     else
//     {
//         printf("Input data of No 1 node\n");
//         int data;
//         scanf("%d", &data);
//         head ->data = data;
//         for (int i = 1; i <= n; i++)
//         {
//             struct node * newnode = (struct node *)malloc(sizeof(struct node));
//             if (newnode = NULL)
//             {
//                 printf("Memory Error\n");
//             }
//             else
//             {
//                 printf("Input data of No %d node\n", i);
//                 scanf("%d", &newnode->data);
//                 newnode ->next = NULL;
//                 temp ->next = newnode;
//                 temp = newnode;
//                 printf("Data Input Succecfully\n");

//             }
//         }
//     }
// }
// void view()
// {
//     struct node * temp ;
//     temp = head;
//     while (temp != NULL)
//     {
//         printf("data = %d \n",temp->data);
//         temp = temp ->next;
//     }
// }