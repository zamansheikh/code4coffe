//Binary tree Inplementation
//HW by Zakia Sultana Mam
//Done by:Zaman 4031

//Header files
#include <stdio.h>
#include <stdlib.h>

//structures
struct node
{
    int item;
    struct node *left;
    struct node *right;
};

//function prototypes
struct node *create_node();

void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ->", root->item);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d ->", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->item);
}

void main()
{
    //Declare the variables
    struct node *root;

    //calling a function
    root = create_node();

    printf("Inorder traversal \n");
    inorderTraversal(root);

    printf("\nPreorder traversal \n");
    preorderTraversal(root);

    printf("\nPostorder traversal \n");
    postorderTraversal(root);
}

//create node function recurcively
struct node *create_node()
{
    //declare the variables
    struct node *new_node;
    int data;

    //allocate memory
    new_node = (struct node *)malloc(sizeof(struct node));

    //get the data
    printf("-1 for NULL\nEnter the data:Input ");
    scanf("%d", data);

    //assign the data
    new_node->item = data;
    //check if the data is -1 || its a special case to break the recursion
    if (data == -1)
    {
        return NULL;
    }
    //assign the left and right nodes
    new_node->left = create_node();
    new_node->right = create_node();

    //return the node
    return new_node;
}




Some error , I dont find that 😕😕😕