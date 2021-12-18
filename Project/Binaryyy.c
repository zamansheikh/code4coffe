#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};


void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ->", root->item);
  inorder(root->right);
}

void preOrder(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preOrder(root->left);
  preOrder(root->right);
}

void postorder(struct node* root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ->", root->item);
}

struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  system("cls");
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertRight(root->left, 3);
  insertLeft(root->left->right, 2);
  insertLeft(root->right, 10);
  insertRight(root->right, 24);
  insertRight(root->right->left, 13);
  insertLeft(root->right->left->right, 11);
  insertLeft(root->right->right, 20);
  insertRight(root->right->right->left, 23);
  insertLeft(root->right->right->left->right, 22);


  printf("Inorder traversal \n");
  inorder(root);

  printf("\nPreorder traversal \n");
  preOrder(root);

  printf("\nPostorder traversal \n");
  postorder(root);
}