//tree traversalin c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

//function prototypes
struct node *createNode();
void print (struct node *root);

int main()
{

    struct node *root = NULL;
    root = createNode();
    print(root);
}

//create node function
struct node *createNode()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data: -1 for Empty :");
    scanf("%d", &data);
    newNode->data = data;
    if (newNode->data == -1)
    {
        return NULL;
    }
    else
    {
        newNode->left = createNode();
        newNode->right = createNode();
    }
    return newNode;
}
void print(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        print(root->left);
        print(root->right);
    }
}